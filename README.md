## How to download [IMPORTANT]:
Since it use a submodules that contain the models of the camera and lidar, clone this repo using `git clone --recurse-submodules <this-repo-url>`

## How to build the image and start the container
1) Go inside the cloned folder
2) Create an image from the Dockerfile: `docker build -t psd_jazzy .`
3) Run the container: `docker run -it --gpus all --user psd --network=host --ipc=host -v $PWD/psd_ws:/home/psd/psd_ws -v /tmp/.X11-unix:/tmp/.X11-unix:rw --env=DISPLAY -v /dev:/dev --device-cgroup-rule="c *:* rmw" --name psd_container psd_jazzy`
4) CTRL + D to exit the container`

## How to use it:
At every pc reboot you need to do  `docker start psd_container`
After that you can access the container with `docker exec -it psd_container /bin/bash`

## First run of the container:
To be sure that everything is setup well, launch the script `bash script.sh` inside the container: it'll make a fast update and install all the needed ros dependencies.
