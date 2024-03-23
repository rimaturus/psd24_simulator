#!/usr/bin/env python3

from launch import LaunchDescription
from launch.actions import (
    IncludeLaunchDescription,
    DeclareLaunchArgument,
)
from launch.substitutions import (
    PathJoinSubstitution,
    LaunchConfiguration,
)
from launch.launch_description_sources import PythonLaunchDescriptionSource

from launch_ros.actions import Node, SetParameter

from ament_index_python.packages import get_package_share_directory


from launch import LaunchDescription
from launch.actions import RegisterEventHandler, DeclareLaunchArgument
from launch.conditions import UnlessCondition
from launch.event_handlers import OnProcessExit
from launch.substitutions import (
    Command,
    PythonExpression,
    FindExecutable,
    PathJoinSubstitution,
    LaunchConfiguration,
)

from launch_ros.actions import Node, SetParameter
from launch_ros.substitutions import FindPackageShare


def generate_launch_description():
    lidar_model = LaunchConfiguration("lidar_model")
    declare_lidar_model_arg = DeclareLaunchArgument(
        "lidar_model",
        default_value="slamtec_rplidar_s1",
        description="Lidar model added to the URDF",
    )

    camera_model = LaunchConfiguration("camera_model")
    declare_camera_model_arg = DeclareLaunchArgument(
        "camera_model",
        default_value="intel_realsense_d435",
        description="Camera model added to the URDF",
    )

    include_camera_mount = LaunchConfiguration("include_camera_mount")
    declare_include_camera_mount_arg = DeclareLaunchArgument(
        "include_camera_mount",
        default_value="True",
        description="Whether to include camera mount to the robot URDF",
    )

    map_package = get_package_share_directory("psd_gazebo_worlds")
    world_file = PathJoinSubstitution([map_package, "worlds", "track.sdf"])
    world_cfg = LaunchConfiguration("world")
    declare_world_arg = DeclareLaunchArgument(
        "world", default_value=["-r ", world_file], description="SDF world file"
    )

    gz_sim = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            PathJoinSubstitution(
                [
                    get_package_share_directory("ros_gz_sim"),
                    "launch",
                    "gz_sim.launch.py",
                ]
            )
        ),
        launch_arguments={"gz_args": world_cfg}.items(),
    )

    # set the name and spawn position of the robot on the gazebo world
    gz_spawn_entity = Node(
        package="ros_gz_sim",
        executable="create",
        arguments=[
            "-name",
            "psd_vehicle",
            "-allow_renaming",
            "true",
            "-topic",
            "robot_description",
            "-x",
            "0.0",
            "-y",
            "-2",
            "-z",
            "0.5",
            "-Y",
            "1.20",
        ],
        output="screen",
    )
    ign_bridge = Node(
        package="ros_gz_bridge",
        executable="parameter_bridge",
        name="ign_bridge",
        arguments=[
            "/clock" + "@rosgraph_msgs/msg/Clock" + "[ignition.msgs.Clock",
            "/scan" + "@sensor_msgs/msg/LaserScan" + "[ignition.msgs.LaserScan",
            "/velodyne_points/points"
            + "@sensor_msgs/msg/PointCloud2"
            + "[ignition.msgs.PointCloudPacked",
            "/camera/color/camera_info"
            + "@sensor_msgs/msg/CameraInfo"
            + "[ignition.msgs.CameraInfo",
            "/camera/color/image_raw"
            + "@sensor_msgs/msg/Image"
            + "[ignition.msgs.Image",
            "/camera/camera_info"
            + "@sensor_msgs/msg/CameraInfo"
            + "[ignition.msgs.CameraInfo",
            "/camera/depth" + "@sensor_msgs/msg/Image" + "[ignition.msgs.Image",
            "/camera/depth/points"
            + "@sensor_msgs/msg/PointCloud2"
            + "[ignition.msgs.PointCloudPacked",
        ],
        remappings=[
            ("/velodyne_points/points", "/velodyne_points"),
            ("/camera/camera_info", "/camera/depth/camera_info"),
            ("/camera/depth", "/camera/depth/image_raw"),
        ],
        output="screen",
    )

    use_sim = LaunchConfiguration("use_sim")
    declare_use_sim_arg = DeclareLaunchArgument(
        "use_sim",
        default_value="True",
        description="Whether simulation is used",
    )

    simulation_engine = LaunchConfiguration("simulation_engine")
    declare_simulation_engine_arg = DeclareLaunchArgument(
        "simulation_engine",
        default_value="ignition-gazebo",
        description="Which simulation engine will be used",
    )


    robot_localization_node = Node(
        package="robot_localization",
        executable="ekf_node",
        name="ekf_filter_node",
        output="screen",
        parameters=[
            PathJoinSubstitution(
                [
                    get_package_share_directory("psd_vehicle_gazebo"), 
                    "config", 
                    "ekf.yaml"]
            )
        ],
    )

    laser_filter_node = Node(
        package="laser_filters",
        executable="scan_to_scan_filter_chain",
        parameters=[
            PathJoinSubstitution(
                [
                    get_package_share_directory("psd_vehicle_gazebo"),
                    "config",
                    "laser_filter.yaml",
                ]
            )
        ],
    )

    controller_config_name = 'diff_drive_controller.yaml'
    robot_controllers = PathJoinSubstitution(
        [
            FindPackageShare("psd_vehicle_gazebo"),
            "config",
            controller_config_name,
        ]
    )

    controller_manager_name = '/psd_vehicle_ctrl'
    # Get URDF via xacro
    robot_description_content = Command(
        [
            PathJoinSubstitution([FindExecutable(name="xacro")]),
            " ",
            PathJoinSubstitution(
                [
                    FindPackageShare("psd_vehicle_description"),
                    "urdf",
                    "psd_vehicle.urdf.xacro",
                ]
            ),
            " lidar_model:=",
            lidar_model,
            " camera_model:=",
            camera_model,
            " include_camera_mount:=",
            include_camera_mount,
            " use_sim:=",
            use_sim,
            " simulation_engine:=",
            simulation_engine,
            " simulation_controllers_config_file:=",
            robot_controllers,
        ]
    )
    robot_description = {"robot_description": robot_description_content}

    control_node = Node(
        package="controller_manager",
        executable="ros2_control_node",
        parameters=[robot_description, robot_controllers],
        remappings=[
            ("/imu_sensor_node/imu", "/_imu/data_raw"),
            ("~/motors_cmd", "/_motors_cmd"),
            ("~/motors_response", "/_motors_response"),
            ("/psd_vehicle_ctrl/cmd_vel_unstamped", "/cmd_vel"),
        ],
    )

    robot_state_pub_node = Node(
        package="robot_state_publisher",
        executable="robot_state_publisher",
        output="both",
        parameters=[robot_description],
    )

    joint_state_broadcaster_spawner = Node(
        package="controller_manager",
        executable="spawner",
        arguments=[
            "joint_state_broadcaster",
            "--controller-manager",
            controller_manager_name,
            # "--controller-manager-timeout",
            # "120",
        ],
    )
    
    robot_controller_spawner = Node(
        package="controller_manager",
        executable="spawner",
        arguments=[
            "psd_vehicle_ctrl",
            "--controller-manager",
            controller_manager_name,
            # "--controller-manager-timeout",
            # "120",
        ],
    )

    # Delay start of robot_controller after joint_state_broadcaster
    delay_robot_controller_spawner_after_joint_state_broadcaster_spawner = (
        RegisterEventHandler(
            event_handler=OnProcessExit(
                target_action=joint_state_broadcaster_spawner,
                on_exit=[robot_controller_spawner],
            )
        )
    )

    imu_broadcaster_spawner = Node(
        package="controller_manager",
        executable="spawner",
        arguments=[
            "imu_broadcaster",
            "--controller-manager",
            controller_manager_name,
            # "--controller-manager-timeout",
            # "120",
        ],
    )

    # Delay start of imu_broadcaster after robot_controller
    # when spawning without delay ros2_control_node sometimes crashed
    delay_imu_broadcaster_spawner_after_robot_controller_spawner = RegisterEventHandler(
        event_handler=OnProcessExit(
            target_action=robot_controller_spawner,
            on_exit=[imu_broadcaster_spawner],
        )
    )

    return LaunchDescription(
        [
            declare_lidar_model_arg,
            declare_camera_model_arg,
            declare_include_camera_mount_arg,
            declare_world_arg,
            # Sets use_sim_time for all nodes started below (doesn't work for nodes started from ignition gazebo)
            SetParameter(name="use_sim_time", value=True),
            declare_use_sim_arg,
            declare_simulation_engine_arg,
            gz_sim,
            ign_bridge,
            gz_spawn_entity,
            robot_localization_node,
            laser_filter_node,
            delay_robot_controller_spawner_after_joint_state_broadcaster_spawner,
            delay_imu_broadcaster_spawner_after_robot_controller_spawner,
            control_node,
            robot_state_pub_node,
            joint_state_broadcaster_spawner,
        ]
    )
