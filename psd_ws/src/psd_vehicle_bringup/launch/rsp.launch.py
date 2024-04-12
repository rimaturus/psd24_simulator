import os

from ament_index_python.packages import get_package_share_directory

from launch import LaunchDescription
from launch.substitutions import LaunchConfiguration, Command
from launch.actions import DeclareLaunchArgument
from launch_ros.actions import Node

import xacro


def generate_launch_description():

    prefix = LaunchConfiguration('prefix')
    use_mock_hardware = LaunchConfiguration('use_mock_hardware')
    mock_sensor_commands = LaunchConfiguration('mock_sensor_commands')
    sim_gazebo_teleop = LaunchConfiguration('sim_gazebo_teleop')
    sim_gazebo = LaunchConfiguration('sim_gazebo')
    simulation_controllers = LaunchConfiguration('simulation_controllers')

    # Process the URDF file
    pkg_path = os.path.join(get_package_share_directory('psd_vehicle_description'))
    xacro_file = os.path.join(pkg_path,'urdf','psd_vehicle.urdf.xacro')
    # robot_description_config = xacro.process_file(xacro_file).toxml()
    robot_description_config = Command(['xacro ', xacro_file])
    
    # Create a robot_state_publisher node
    params = {'robot_description': robot_description_config}
    node_robot_state_publisher = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        output='screen',
        parameters=[params]
    )


    # Launch!
    return LaunchDescription([
        DeclareLaunchArgument(
            'prefix',
            default_value='""',
            description='prefix of the robot if you spawn multiple'),

        DeclareLaunchArgument(
            'use_mock_hardware',
            default_value='false',
            description='use_mock_hardware'),

        DeclareLaunchArgument(
            'mock_sensor_commands',
            default_value='false',
            description='mock_sensor_commands'),
        
        DeclareLaunchArgument(
            'sim_gazebo_teleop',
            default_value='true',
            description='sim_gazebo_teleop'),
        
        DeclareLaunchArgument(
            'sim_gazebo',
            default_value='false',
            description='sim_gazebo'),

        DeclareLaunchArgument(
            'simulation_controllers',
            default_value='""',
            description='simulation_controllers'),

        node_robot_state_publisher
    ])