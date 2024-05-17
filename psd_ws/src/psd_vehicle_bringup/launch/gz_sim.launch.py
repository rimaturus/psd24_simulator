from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, ExecuteProcess, IncludeLaunchDescription
from launch.actions import RegisterEventHandler
from launch.event_handlers import OnProcessExit
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import Command, FindExecutable, LaunchConfiguration, PathJoinSubstitution

from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare


def generate_launch_description():
    use_sim_time = LaunchConfiguration('use_sim_time', default=True)

    # Get URDF via xacro
    robot_description_content = Command(
        [
            PathJoinSubstitution([FindExecutable(name='xacro')]),
            ' ',
            PathJoinSubstitution(
                [FindPackageShare('psd_vehicle_description'),
                 'urdf', 'psd_vehicle.urdf.xacro']
            ),
        ]
    )
    robot_description = {'robot_description': robot_description_content}

    node_robot_state_publisher = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        output='screen',
        parameters=[robot_description]
    )

    gz_spawn_entity = Node(
        package="ros_gz_sim",
        executable="create",
        name="spawn_psd_vehicle",
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
            "0.0",
            "-z",
            "1.0",
        ],
        output="screen",
    )

    load_joint_state_broadcaster = ExecuteProcess(
        cmd=['ros2', 'control', 'load_controller', '--set-state', 'active',
             'joint_state_broadcaster'],
        output='screen'
    )

    load_effort_controller = ExecuteProcess(
        cmd=['ros2', 'control', 'load_controller', '--set-state', 'active',
             'effort_controller'],
        output='screen'
    )

    load_position_controller = ExecuteProcess(
        cmd=['ros2', 'control', 'load_controller', '--set-state', 'active',
             'position_controller'],
        output='screen'
    )

    robot_description_content = Command(
        [
            PathJoinSubstitution([FindExecutable(name='xacro')]),
            ' ',
            PathJoinSubstitution(
                [FindPackageShare('psd_vehicle_description'),
                 'urdf', 'psd_vehicle.urdf.xacro']
            ),
        ]
    )

    #world_file = FindPackageShare('psd_gazebo_worlds') + "world/" + "track.sdf"
    world_file = "/home/ubuntu/psd_ws/src/psd_gazebo_worlds/world/track.sdf"

    # Bridge
    bridge = Node(
        package='ros_gz_bridge',
        executable='parameter_bridge',
        arguments=[
            "/clock" + "@rosgraph_msgs/msg/Clock" + "[gz.msgs.Clock",
            # "/scan" + "@sensor_msgs/msg/LaserScan" + "[gz.msgs.LaserScan",

            # "/velodyne_points/points"
            # + "@sensor_msgs/msg/PointCloud2"
            # + "[gz.msgs.PointCloudPacked",

            # "/camera/color/camera_info"
            # + "@sensor_msgs/msg/CameraInfo"
            # + "[gz.msgs.CameraInfo",

            # "/camera/color/image_raw"
            # + "@sensor_msgs/msg/Image"
            # + "[gz.msgs.Image",

            # "/camera/camera_info"
            # + "@sensor_msgs/msg/CameraInfo"
            # + "[gz.msgs.CameraInfo",

            # "/camera/depth" + "@sensor_msgs/msg/Image" + "[gz.msgs.Image",

            # "/camera/depth/points"
            # + "@sensor_msgs/msg/PointCloud2"
            # + "[gz.msgs.PointCloudPacked",
        ],

        remappings=[
            ("/velodyne_points/points", "/velodyne_points"),
            ("/camera/camera_info", "/camera/depth/camera_info"),
            ("/camera/depth", "/camera/depth/image_raw"),
        ],

        output='screen'
    )

    return LaunchDescription([
        bridge,
        # Launch gazebo environment
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource(
                [PathJoinSubstitution([FindPackageShare('ros_gz_sim'),
                                       'launch',
                                       'gz_sim.launch.py'])]),
            launch_arguments=[('gz_args', [f' -r -v 4 {world_file}'])]),

        RegisterEventHandler(
            event_handler=OnProcessExit(
                target_action=gz_spawn_entity,
                on_exit=[load_joint_state_broadcaster],
            )
        ),

        RegisterEventHandler(
            event_handler=OnProcessExit(
                target_action=load_joint_state_broadcaster,
                on_exit=[load_effort_controller, load_position_controller],
            )
        ),

        node_robot_state_publisher,
        gz_spawn_entity,

        # Launch Arguments
        DeclareLaunchArgument(
            'use_sim_time',
            default_value=use_sim_time,
            description='If true, use simulated clock'),
    ])


# How to use the controllers:
# -) effort controller: ros2 topic pub --once /effort_controller/commands std_msgs/msg/Float64MultiArray "data: [2.0, 2.0, 2.0, 2.0]"










































    # # Declare arguments
    # declared_arguments = []
    # declared_arguments.append(
    #     DeclareLaunchArgument(
    #         "runtime_config_package",
    #         default_value="psd_vehicle_bringup",
    #         description='Package with the controller\'s configuration in "config" folder. \
    #     Usually the argument is not set, it enables use of a custom setup.',
    #     )
    # )
    # declared_arguments.append(
    #     DeclareLaunchArgument(
    #         "controllers_file",
    #         default_value="psd_vehicle_controllers.yaml",
    #         description="YAML file with the controllers configuration.",
    #     )
    # )
    # declared_arguments.append(
    #     DeclareLaunchArgument(
    #         "description_package",
    #         default_value="psd_vehicle_description",
    #         description="Description package with robot URDF/xacro files. Usually the argument \
    #     is not set, it enables use of a custom description.",
    #     )
    # )
    # declared_arguments.append(
    #     DeclareLaunchArgument(
    #         "description_file",
    #         default_value="psd_vehicle.urdf.xacro",
    #         description="URDF/XACRO description file with the robot.",
    #     )
    # )
    # declared_arguments.append(
    #     DeclareLaunchArgument(
    #         "prefix",
    #         default_value='""',
    #         description="Prefix of the joint names, useful for \
    #     multi-robot setup. If changed than also joint names in the controllers' configuration \
    #     have to be updated.",
    #     )
    # )
    # declared_arguments.append(
    #     DeclareLaunchArgument(
    #         "robot_controller",
    #         default_value="joint_trajectory_controller",
    #         choices=["forward_position_controller", "joint_trajectory_controller"],
    #         description="Robot controller to start.",
    #     )
    # )

    # map_package = get_package_share_directory("psd_gazebo_worlds")
    # world_file = PathJoinSubstitution([map_package, "worlds", "track.sdf"])
    # declared_arguments.append(
    #     DeclareLaunchArgument(
    #         "world",
    #         default_value=["-r ", world_file],
    #         description="SDF world file.",
    #     )
    # )
    

    # # ------------------ SENSORS!!!! ------------------ 
    # lidar_model = LaunchConfiguration("lidar_model")
    # declare_lidar_model_arg = DeclareLaunchArgument(
    #     "lidar_model",
    #     default_value="slamtec_rplidar_s1",
    #     description="Lidar model added to the URDF",
    # )

    # camera_model = LaunchConfiguration("camera_model")
    # declare_camera_model_arg = DeclareLaunchArgument(
    #     "camera_model",
    #     default_value="None",
    #     description="Camera model added to the URDF",
    # )
    
    # include_camera_mount = LaunchConfiguration("include_camera_mount")
    # declare_include_camera_mount_arg = DeclareLaunchArgument(
    #     "include_camera_mount",
    #     default_value="False",
    #     description="Whether to include camera mount to the robot URDF",
    # )
    # # # --------------------- end ----------------------- 

    # # ===============================================
    # # Initialize Arguments
    # runtime_config_package = LaunchConfiguration("runtime_config_package")
    # controllers_file = LaunchConfiguration("controllers_file")
    # description_package = LaunchConfiguration("description_package")
    # description_file = LaunchConfiguration("description_file")
    # prefix = LaunchConfiguration("prefix")
    # robot_controller = LaunchConfiguration("robot_controller")

    # world_cfg = LaunchConfiguration("world")


    # robot_controllers = PathJoinSubstitution(
    #     [FindPackageShare(runtime_config_package), "config", "psd_vehicle_controllers.yaml"]
    # )

    # rviz_config_file = PathJoinSubstitution(
    #     [FindPackageShare(description_package), "rviz", "psd_vehicle.rviz"]
    # )

    # # Get URDF via xacro
    # robot_description_content = Command(
    #     [
    #         PathJoinSubstitution([FindExecutable(name="xacro")]),
    #         " ",
    #         PathJoinSubstitution(
    #             [FindPackageShare(description_package), "urdf", description_file]
    #         ),
    #         " ",
    #         "prefix:=",
    #         prefix,
    #         " ",
    #         "simulation_controllers:=",
    #         robot_controllers,
    #         " ",
    #     ]
    # )

    # robot_description = {"robot_description": robot_description_content}
    
    # robot_state_pub_node = Node(
    #     package="robot_state_publisher",
    #     executable="robot_state_publisher",
    #     output="both",
    #     parameters=[robot_description],
    # )

    # control_node = Node(
    #     package="controller_manager",
    #     executable="ros2_control_node",
    #     output="both",
    #     parameters=[robot_description, robot_controllers],
    # )

    # joint_state_broadcaster_spawner = Node(
    #     package="controller_manager",
    #     executable="spawner",
    #     arguments=[
    #         "joint_state_broadcaster",
    #         "--controller-manager",
    #         "/controller_manager",
    #     ],
    # )


    # rviz_node = Node(
    #     package="rviz2",
    #     executable="rviz2",
    #     name="rviz2",
    #     output="log",
    #     arguments=["-d", rviz_config_file],
    # )
    # # ===============================================
        
    
    # gz_sim = IncludeLaunchDescription(
    #     PythonLaunchDescriptionSource(
    #         PathJoinSubstitution(
    #             [
    #                 get_package_share_directory("ros_gz_sim"),
    #                 "launch",
    #                 "gz_sim.launch.py",
    #             ]
    #         )
    #     ),
    #     launch_arguments={"gz_args": world_cfg}.items(),
    # )

    # # Spawn robot
    # gz_spawn_robot = Node(
    #     package="ros_gz_sim",
    #     executable="create",
    #     name="spawn_psd_vehicle",
    #     arguments=[
    #         "-name", 
    #         "psd_vehicle", 
    #         "-allow_renaming",
    #         "true",
    #         "-topic", 
    #         "robot_description",
    #         "-x",
    #         "0.0",
    #         "-y",
    #         "0.0",
    #         "-z",
    #         "1.0",
    #     ],
    #     output="screen",
    # )

    # ign_bridge = Node(
    #     package="ros_gz_bridge",
    #     executable="parameter_bridge",
    #     name="ign_bridge",
    #     arguments=[
    #         "/clock" + "@rosgraph_msgs/msg/Clock" + "[ignition.msgs.Clock",
    #         "/scan" + "@sensor_msgs/msg/LaserScan" + "[ignition.msgs.LaserScan",

    #         "/velodyne_points/points"
    #         + "@sensor_msgs/msg/PointCloud2"
    #         + "[ignition.msgs.PointCloudPacked",

    #         "/camera/color/camera_info"
    #         + "@sensor_msgs/msg/CameraInfo"
    #         + "[ignition.msgs.CameraInfo",

    #         "/camera/color/image_raw"
    #         + "@sensor_msgs/msg/Image"
    #         + "[ignition.msgs.Image",

    #         "/camera/camera_info"
    #         + "@sensor_msgs/msg/CameraInfo"
    #         + "[ignition.msgs.CameraInfo",

    #         "/camera/depth" + "@sensor_msgs/msg/Image" + "[ignition.msgs.Image",

    #         "/camera/depth/points"
    #         + "@sensor_msgs/msg/PointCloud2"
    #         + "[ignition.msgs.PointCloudPacked",
    #     ],
    #     remappings=[
    #         ("/velodyne_points/points", "/velodyne_points"),
    #         ("/camera/camera_info", "/camera/depth/camera_info"),
    #         ("/camera/depth", "/camera/depth/image_raw"),
    #     ],
    #     output="screen",
    # )

    # return LaunchDescription(
    #     declared_arguments
    #     + [
    #         gz_sim,
    #         gz_spawn_robot,
    #         ign_bridge,
    #         robot_state_pub_node,
    #         joint_state_broadcaster_spawner,
    #         # rviz_node,
    #         control_node,
    #         # declare_lidar_model_arg,
    #         # declare_camera_model_arg,
    #         # declare_include_camera_mount_arg,
    #         # Sets use_sim_time for all nodes started below (doesn't work for nodes started from ignition gazebo)
    #         SetParameter(name="use_sim_time", value=True),
    #     ]
    #     #+ delay_robot_controller_spawners_after_joint_state_broadcaster_spawner
    # )
