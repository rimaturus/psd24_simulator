# PSD Stack  <br>
## ROS2 Humble + Ubuntu 22.04

## How to build the image and start the container
1) Go inside the cloned folder
2) Create an image from the Dockerfile: `docker build -t psd_humble_orin .`
3) Run the container: `docker run -it --gpus all --user humble --network=host --ipc=host -v $PWD/psd__stack_ws:/home/humble/psd_stack_ws -v /tmp/.X11-unix:/tmp/.X11-unix:rw --env=DISPLAY -v /dev:/dev --device-cgroup-rule="c *:* rmw" --name orin_psd_container psd_humble_orin`
4) **Achtung!** Once inside, only for the first time **go to deps/ folder and launch `bash first_launch_script.sh`**: this will setup everything for you and configure all the dependencies. 
5) CTRL + D to exit the container`

## How to use it:
At every pc reboot you need to do  `docker start orin_psd_container`
After that you can access the container with `docker exec -it orin_psd_container /bin/bash`


