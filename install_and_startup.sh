#!/bin/bash

echo "First installation? [y|n]"
read first_install

if [[ "$first_install" == 'y' ]]
then
    locale  # check for UTF-8

    sudo apt update && sudo apt install locales
    sudo locale-gen en_US en_US.UTF-8
    sudo update-locale LC_ALL=en_US.UTF-8 LANG=en_US.UTF-8
    export LANG=en_US.UTF-8

    locale  # verify settings

    sudo apt install software-properties-common -y
    sudo add-apt-repository universe

    sudo apt update && sudo apt install curl -y
    sudo curl -sSL https://raw.githubusercontent.com/ros/rosdistro/master/ros.key -o /usr/share/keyrings/ros-archive-keyring.gpg

    echo "deb [arch=$(dpkg --print-architecture) signed-by=/usr/share/keyrings/ros-archive-keyring.gpg] http://packages.ros.org/ros2/ubuntu $(. /etc/os-release && echo $UBUNTU_CODENAME) main" | sudo tee /etc/apt/sources.list.d/ros2.list > /dev/null

    sudo apt update
    sudo apt upgrade -y

    sudo apt install ros-humble-desktop-full -y
    sudo apt install ros-humble-ros-base -y
    sudo apt install ros-dev-tools -y

    source /opt/ros/humble/setup.bash

    if ! command -v pip &> /dev/null; then
        echo "pip not found. Installing..."
        sudo apt update
        sudo apt install python3-pip -y
        echo "pip installed successfully."
    fi

    pip install -r requirements.txt
    sudo cp veicolo_psd.sdf /usr/share/ignition/ignition-gazebo6/worlds/veicolo_psd.sdf
    
    echo "source /opt/ros/humble/setup.bash" >> .bashrc 
    
    sudo apt update
    sudo apt install git-all # git install
    echo "git installed successfully."
    
fi

cd ~/psd_startup/ros2_ws
colcon build

cd ..
$(bash launch.sh)


