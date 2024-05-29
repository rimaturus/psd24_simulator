#!/bin/bash

# Set Colors for Output
RED='\033[0;31m'
GREEN='\033[0;32m'
NC='\033[0m' # No Color

# Function to check for a command
command_exists() {
    command -v "$1" >/dev/null 2>&1
}

# Function to update and upgrade the system
update_and_upgrade() {
    echo -e "${GREEN}Updating and upgrading the system...${NC}"
    sudo apt-get update && sudo apt-get upgrade -y
}

# Function to update rosdep and install dependencies for the ROS distro
update_rosdep() {
    echo -e "${GREEN}Updating rosdep and installing dependencies for ROS...${NC}"
    rosdep update --rosdistro $ROS_DISTRO
    rosdep install -i --from-path /home/ubuntu/psd_ws/src --rosdistro $ROS_DISTRO -y --skip-keys SDL2
}

# Function to build libzmq from source
build_libzmq() {
    echo -e "${GREEN}Building libzmq...${NC}"
    if ! command_exists cmake; then
        echo -e "${RED}Error: cmake not found. Please install cmake first.${NC}"
        exit 1
    fi

    # Download latest libzmq release (adjust if a specific version is needed)
    wget https://github.com/zeromq/libzmq/releases/download/v4.3.5/zeromq-4.3.5.tar.gz
    tar -xf zeromq-4.3.5.tar.gz && rm zeromq-4.3.5.tar.gz
    cd zeromq-4.3.5

    mkdir build
    cd build
    cmake ..
    sudo make -j4 install
    cd ../..
}

# Function to build cppzmq from source
build_cppzmq() {
    echo -e "${GREEN}Building cppzmq from source...${NC}"
    if ! command_exists cmake; then
        echo -e "${RED}Error: cmake not found. Please install cmake first.${NC}"
        exit 1
    fi

    # Download latest cppzmq release (adjust if a specific version is needed)
    wget https://github.com/zeromq/cppzmq/archive/refs/tags/v4.9.0.tar.gz
    tar -xf v4.9.0.tar.gz && rm v4.9.0.tar.gz
    cd cppzmq-4.9.0

    mkdir build
    cd build

    cmake .. -DCPPZMQ_BUILD_TESTS=OFF  # Error on: #include <catch2/catch.hpp>
    sudo make -j4 install
    cd ../..
}

remove_kortex_dependency() {
    echo -e "${GREEN}Removing kortex_description dependency from package.xml...${NC}"
    sed -i '/<depend>kortex_description<\/depend>/d' /home/edo/psd24_simulator/psd_ws/src/ros_components_description/package.xml
}


# Function to build cppzmq using vcpkg
build_cppzmq_vcpkg() {
    echo -e "${GREEN}Building cppzmq using vcpkg...${NC}"
    if ! command_exists git; then
        echo -e "${RED}Error: git not found. Please install git first.${NC}"
        exit 1
    fi

    git clone https://github.com/Microsoft/vcpkg.git
    cd vcpkg
    ./bootstrap-vcpkg.sh 
    ./vcpkg integrate install
    ./vcpkg install cppzmq
    cd ..
}

# Temporary fix due to an error in the library
remove_kortex_dependency_from_ros_components() {
    echo -e "${GREEN}Removing kortex_description dependency from package.xml...${NC}"
    sed -i '/<depend>kortex_description<\/depend>/d' /home/ubuntu/psd_ws/src/ros_components_description/package.xml
}

# Set directory path
directory="/home/ubuntu/psd_ws/deps/not_mapped_dir"

# Check if directory exists
if [ ! -d "$directory" ]; then
  # If directory doesn't exist, create it (with parent directories if needed)
  echo "Creating directory: $directory" 
  mkdir -p "$directory"
else
  # If directory exists, do nothing or print a message
  echo "Directory already exists: $directory" 
fi

cd $directory

# Main Script
update_and_upgrade  # Perform system updates and upgrades

build_libzmq
build_cppzmq
build_cppzmq_vcpkg

remove_kortex_dependency_from_ros_components # Temporary fix due to an error in the library
update_rosdep       # Update rosdep and install ROS dependencies

cd /home/ubuntu/psd_ws
sudo apt install tmuxinator

echo -e "${GREEN}Building ROS packages...${NC}"
colcon build --symlink-install
source install/setup.bash

git rm --cached psd_ws/deps/not_mapped_dir/vcpkg -f

echo -e "${GREEN}Build process completed.${NC}"
