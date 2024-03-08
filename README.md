## How to build the image and start the container
1) Go inside the cloned folder
2) Create an image from the Dockerfile: `docker build -t psd_image .`
3) Run the container: `docker run -it --gpus all --user ros --network=host --ipc=host -v $PWD/psd_ws:/psd_ws -v /tmp/.X11-unix:/tmp/.X11-unix:rw --env=DISPLAY -v /dev:/dev --device-cgroup-rule="c *:* rmw" psd_image`
