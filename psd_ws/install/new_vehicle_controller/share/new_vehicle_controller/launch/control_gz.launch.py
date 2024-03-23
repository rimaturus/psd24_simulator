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

def generate_launch_description():
    # Declare launch arguments
    urdf_path = LaunchConfiguration('/home/psd/psd_ws/src/psd_vehicle_ros/psd_vehicle_description/urdf/psd_vehicle.urdf.xacro')

    # Gazebo launch
    map_package = get_package_share_directory("psd_gazebo_worlds")
    #world_file = PathJoinSubstitution([map_package, "worlds", "office.sdf"])
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

    # Plugin node
    plugin_node = Node(
        package='new_vehicle_controller',  # Replace with your package name
        executable='joint_control_plugin',  # Replace with your plugin executable name
        output='screen')

    return LaunchDescription([
        DeclareLaunchArgument('urdf_path', description='Path to the URDF file'),
        declare_world_arg,
        # Sets use_sim_time for all nodes started below (doesn't work for nodes started from ignition gazebo)
        SetParameter(name="use_sim_time", value=True),
        gz_sim,
        gz_spawn_entity,
        plugin_node
    ])
