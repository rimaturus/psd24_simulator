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
    rosdep install -i --from-path ../src --rosdistro $ROS_DISTRO -y
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
    cmake ..
    sudo make -j4 install
    cd ../..
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

# Main Script
update_and_upgrade  # Perform system updates and upgrades
sudo apt-get install wget -y
sudo apt-get install curl zip unzip tar -y

build_libzmq
build_cppzmq_vcpkg

update_rosdep       # Update rosdep and install ROS dependencies

echo -e "${GREEN}Build process completed.${NC}"
