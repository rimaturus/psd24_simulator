FROM osrf/ros:humble-desktop-full

RUN apt-get update \
    && apt-get install -y \
    nano \
    bash-completion \
    python3-argcomplete \
    && rm -rf /var/lib/apt/lists/*

COPY config/ /site_config/

ARG USERNAME=ros
ARG USER_UID=1000
ARG USER_GID=$USER_UID

# Create a non root user
RUN groupadd --gid $USER_GID $USERNAME \
    && useradd -s /bin/bash --uid $USER_UID --gid $USER_GID -m $USERNAME \
    && mkdir /home/$USERNAME/.config && chown $USER_UID:$USER_GID /home/$USERNAME/.config 

# Set up sudo (it permits to use sudo commands inside docker without launching docker exec -itu ...)
RUN apt-get update \
    && apt-get install -y sudo \
    && echo $USERNAME ALL=\(root\) NOPASSWD:ALL > /etc/sudoers.d/$USERNAME\
    && chmod 0440 /etc/sudoers.d/$USERNAME \
    && rm -rf /var/lib/apt/lists/*

COPY entrypoint.sh /entrypoint.sh
COPY bashrc /home/$USERNAME/.bashrc

ENTRYPOINT [ "/bin/bash", "/entrypoint.sh" ]
CMD [ "bash" ] 
#se voglio lanciare un comando all'avvio

# Testing devices
RUN apt-get update \
    && apt-get install -y \
    evtest \
    jstest-gtk \
    python3-serial \
    && rm -rf /var/lib/apt/lists/*

RUN usermod -aG dialout ${USERNAME}

WORKDIR /psd_ws


# USER ros
# # tutte i comandi da qui in poi saranno effettuati come useradd

# USER root 
# # tutti i comandi da qui in poi invece come root

# # ACHTUNG! L'ultimo user settato nel dockerfile sarà anche quello su cui si avvierà il container,
# #  a meno che non si faccia l'override tramite: docker run -it --user ros -v $PWD/psd_ws:/psd_ws psd_image

