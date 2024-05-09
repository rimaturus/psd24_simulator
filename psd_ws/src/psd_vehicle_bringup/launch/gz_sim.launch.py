from launch import LaunchDescription

from launch.actions import (
    DeclareLaunchArgument,
    IncludeLaunchDescription,
    RegisterEventHandler,
    TimerAction,
)

from launch.substitutions import (
    Command, 
    FindExecutable, 
    PathJoinSubstitution,
    LaunchConfiguration,
)
from launch.launch_description_sources import PythonLaunchDescriptionSource

from launch_ros.actions import Node, SetParameter

from ament_index_python.packages import get_package_share_directory

from launch.event_handlers import OnProcessExit, OnProcessStart
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.substitutions import FindPackageShare


def generate_launch_description():
    # Declare arguments
    declared_arguments = []
    declared_arguments.append(
        DeclareLaunchArgument(
            "runtime_config_package",
            default_value="psd_vehicle_bringup",
            description='Package with the controller\'s configuration in "config" folder. \
        Usually the argument is not set, it enables use of a custom setup.',
        )
    )
    declared_arguments.append(
        DeclareLaunchArgument(
            "controllers_file",
            default_value="psd_vehicle_controllers.yaml",
            description="YAML file with the controllers configuration.",
        )
    )
    declared_arguments.append(
        DeclareLaunchArgument(
            "description_package",
            default_value="psd_vehicle_description",
            description="Description package with robot URDF/xacro files. Usually the argument \
        is not set, it enables use of a custom description.",
        )
    )
    declared_arguments.append(
        DeclareLaunchArgument(
            "description_file",
            default_value="psd_vehicle.urdf.xacro",
            description="URDF/XACRO description file with the robot.",
        )
    )
    declared_arguments.append(
        DeclareLaunchArgument(
            "prefix",
            default_value='""',
            description="Prefix of the joint names, useful for \
        multi-robot setup. If changed than also joint names in the controllers' configuration \
        have to be updated.",
        )
    )
    declared_arguments.append(
        DeclareLaunchArgument(
            "robot_controller",
            default_value="joint_trajectory_controller",
            choices=["forward_position_controller", "joint_trajectory_controller"],
            description="Robot controller to start.",
        )
    )

    map_package = get_package_share_directory("psd_gazebo_worlds")
    world_file = PathJoinSubstitution([map_package, "worlds", "track.sdf"])
    declared_arguments.append(
        DeclareLaunchArgument(
            "world",
            default_value=["-r ", world_file],
            description="SDF world file.",
        )
    )
    

    # ------------------ SENSORS!!!! ------------------ 
    lidar_model = LaunchConfiguration("lidar_model")
    declare_lidar_model_arg = DeclareLaunchArgument(
        "lidar_model",
        default_value="slamtec_rplidar_s1",
        description="Lidar model added to the URDF",
    )

    camera_model = LaunchConfiguration("camera_model")
    declare_camera_model_arg = DeclareLaunchArgument(
        "camera_model",
        default_value="None",
        description="Camera model added to the URDF",
    )
    
    include_camera_mount = LaunchConfiguration("include_camera_mount")
    declare_include_camera_mount_arg = DeclareLaunchArgument(
        "include_camera_mount",
        default_value="False",
        description="Whether to include camera mount to the robot URDF",
    )
    # --------------------- end ----------------------- 

    # ===============================================
    # Initialize Arguments
    runtime_config_package = LaunchConfiguration("runtime_config_package")
    controllers_file = LaunchConfiguration("controllers_file")
    description_package = LaunchConfiguration("description_package")
    description_file = LaunchConfiguration("description_file")
    prefix = LaunchConfiguration("prefix")
    robot_controller = LaunchConfiguration("robot_controller")

    world_cfg = LaunchConfiguration("world")


    robot_controllers = PathJoinSubstitution(
        [FindPackageShare(runtime_config_package), "config", controllers_file]
    )
    rviz_config_file = PathJoinSubstitution(
        [FindPackageShare(description_package), "rviz", "psd_vehicle.rviz"]
    )

    # Get URDF via xacro
    robot_description_content = Command(
        [
            PathJoinSubstitution([FindExecutable(name="xacro")]),
            " ",
            PathJoinSubstitution(
                [FindPackageShare(description_package), "urdf", description_file]
            ),
            " ",
            "prefix:=",
            prefix,
            " ",
            "simulation_controllers:=",
            robot_controllers,
            " ",
        ]
    )
    
    robot_state_pub_node = Node(
        package="robot_state_publisher",
        executable="robot_state_publisher",
        output="both",
        parameters=[{"robot_description": robot_description_content}],
    )
    rviz_node = Node(
        package="rviz2",
        executable="rviz2",
        name="rviz2",
        output="log",
        arguments=["-d", rviz_config_file],
    )
    # ===============================================
        
    
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

    # Spawn robot
    gz_spawn_robot = Node(
        package="ros_gz_sim",
        executable="create",
        name="spawn_psd_vehicle",
        arguments=[
            "-name", 
            "psd_vehicle", 
            "-allow_renaming",
            "true",
            "-topic", 
            "robot_description"
            "-x",
            "0.0",
            "-y",
            "0.0",
            "-z",
            "1.0",
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



    joint_state_broadcaster_spawner = Node(
        package="controller_manager",
        executable="spawner",
        arguments=["joint_state_broadcaster", "--controller-manager", "/controller_manager"],
    )

    # robot_controllers = [robot_controller]
    # robot_controller_spawners = []
    # for controller in robot_controllers:
    #     robot_controller_spawners += [
    #         Node(
    #             package="controller_manager",
    #             executable="spawner",
    #             arguments=[controller, "-c", "/controller_manager"],
    #         )
    #     ]

    # # Delay loading and activation of `joint_state_broadcaster` after start of ros2_control_node
    # delay_joint_state_broadcaster_spawner_after_gazebo_spawn_robot = RegisterEventHandler(
    #     event_handler=OnProcessExit(
    #         target_action=gazebo_spawn_robot,
    #         on_exit=[joint_state_broadcaster_spawner],
    #     )
    # )

    # # Delay rviz start after Joint State Broadcaster to avoid unnecessary warning output.
    # delay_rviz_after_joint_state_broadcaster_spawner = RegisterEventHandler(
    #     event_handler=OnProcessExit(
    #         target_action=joint_state_broadcaster_spawner,
    #         on_exit=[rviz_node],
    #     )
    # )

    # # Delay loading and activation of robot_controller after `joint_state_broadcaster`
    # delay_robot_controller_spawners_after_joint_state_broadcaster_spawner = []
    # for controller in robot_controller_spawners:
    #     delay_robot_controller_spawners_after_joint_state_broadcaster_spawner += [
    #         RegisterEventHandler(
    #             event_handler=OnProcessExit(
    #                 target_action=joint_state_broadcaster_spawner,
    #                 on_exit=[
    #                     TimerAction(
    #                         period=3.0,
    #                         actions=[controller],
    #                     ),
    #                 ],
    #             )
    #         )
    #     ]

    return LaunchDescription(
        declared_arguments
        + [
            gz_sim,
            gz_spawn_robot,
            ign_bridge,
            robot_state_pub_node,
            #delay_rviz_after_joint_state_broadcaster_spawner,
            #delay_joint_state_broadcaster_spawner_after_gazebo_spawn_robot,
            declare_lidar_model_arg,
            declare_camera_model_arg,
            declare_include_camera_mount_arg,
            # Sets use_sim_time for all nodes started below (doesn't work for nodes started from ignition gazebo)
            SetParameter(name="use_sim_time", value=True),
        ]
        #+ delay_robot_controller_spawners_after_joint_state_broadcaster_spawner
    )
