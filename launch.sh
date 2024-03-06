#!/bin/bash

if ! command -v tmuxinator &> /dev/null; then
    echo "Tmuxinator not found. Installing..."
    sudo apt update
    sudo apt install -y tmuxinator
    echo "Tmuxinator installed successfully."
fi

sudo cp veicolo_psd.sdf /usr/share/ignition/ignition-gazebo6/worlds/veicolo_psd.sdf

cd ros2_ws

colcon build

cd ..

# Start Tmux session
tmuxinator start -p session.yml
