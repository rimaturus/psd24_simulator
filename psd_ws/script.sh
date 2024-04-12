sudo apt update
sudo apt upgrade -y
sudo apt install ros-humble-xacro
sudo apt install ros-humble-joint-state-publisher-gui
sudo apt install ros-humble-ros2-control
sudo apt install ros-humble-ros2-controllers


export IGNITION_VERSION=fortress

wget https://raw.githubusercontent.com/ros-controls/ros2_control_ci/master/ros_controls.$ROS_DISTRO.repos
vcs import src < ros_controls.$ROS_DISTRO.repos
rosdep update --rosdistro=$ROS_DISTRO
sudo apt-get update
rosdep install --from-paths src --ignore-src -r -y

colcon build
