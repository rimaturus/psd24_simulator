export PSD_ROS_BUILD_TYPE=simulation

# to specify which simulation engine will be used
# for gazebo classic
export SIMULATION_ENGINE=gazebo-classic
# for ignition gazebo
export SIMULATION_ENGINE=ignition-gazebo

rosdep update --rosdistro $ROS_DISTRO
rosdep install -i --from-path src --rosdistro $ROS_DISTRO -y
colcon build
