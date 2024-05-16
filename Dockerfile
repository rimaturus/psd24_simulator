FROM osrf/ros:jazzy-desktop-full

ARG USERNAME=ubuntu
# ARG USER_UID=1001
# ARG USER_GID=$USER_UID
ENV DEBIAN_FRONTEND=noninteractive

# Install necessary packages (including tools for color support)
RUN apt-get update && apt-get install -y --no-install-recommends \
    nano \
    bash-completion \
    python3-argcomplete \
    lsof \  
    vim \
    iputils-ping \
    net-tools \
    locales \
    && locale-gen en_US.UTF-8 \
    && update-locale LANG=en_US.UTF-8 \
    && rm -rf /var/lib/apt/lists/*

# Color Support
ENV TERM=xterm-256color

# Copy configuration files (if any)
COPY config/ /site_config/

# # Create a non-root user 
# RUN groupadd --gid $USER_GID $USERNAME \
#     && useradd -s /bin/bash --uid $USER_UID --gid $USER_GID -m $USERNAME \
#     && mkdir /home/$USERNAME/.config && chown $USER_UID:$USER_GID /home/$USERNAME/.config 

# Setup sudo for the non-root user (careful with security!)
RUN echo "$USERNAME ALL=(ALL) NOPASSWD:ALL" >> /etc/sudoers

# Copy entrypoint and bashrc scripts
COPY entrypoint.sh /entrypoint.sh
COPY bashrc /home/$USERNAME/.bashrc

# Set environment variables (optional)
# RUN export HUSARION_ROS_BUILD_TYPE=simulation \
#     && export PSD_VEHICLE_ROS_BUILD_TYPE=simulation \
#     && export SIMULATION_ENGINE=ignition-gazebo

# Additional tools for testing devices
RUN apt-get update && apt-get install -y --no-install-recommends \
    evtest \
    jstest-gtk \
    python3-serial \
    && rm -rf /var/lib/apt/lists/*

RUN usermod -aG dialout ${USERNAME}
WORKDIR /home/$USERNAME/psd_ws

# Switch to non-root user for the rest of the build
USER $USERNAME

# Install ROS dependencies (if needed)
# RUN rosdep update --rosdistro $ROS_DISTRO \
#     && rosdep install -i --from-path src --rosdistro $ROS_DISTRO -y

# Build your ROS 2 workspace
# RUN colcon build

# Entrypoint and default command
ENTRYPOINT [ "/bin/bash", "/entrypoint.sh" ]
CMD [ "bash" ]
