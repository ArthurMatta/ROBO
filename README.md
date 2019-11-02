# ROBO

Project developed for the MIEIC ROBO curricular unit

## Setup

- [Install ROS melodic](http://wiki.ros.org/melodic/Installation);
- [Configure the catkin workspace](http://wiki.ros.org/ROS/Tutorials/InstallingandConfiguringROSEnvironment#Create_a_ROS_Workspace);
- Download this repository (**NOTE:** use --recursive option when cloning to also download the STDR submodule) and save its files in the *catkin_ws/src/* folder;
- Run the commands:

```sh
    cd ~/catkin_ws
    rosdep install --from-paths src --ignore-src --rosdistro $ROS_DISTRO
    catkin_make
```
