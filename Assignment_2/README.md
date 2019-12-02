# Assignment 2

This is the repository for Assignment 2 of the Robotics curricular unit at FEUP. 

## Goal

The goal of this project is to develop a robot capable of following an angled wall. To that end, we developed a robot using the Robot Operational System (ROS) for the robot logic and the Simple Two-Dimensional Robot Simulator (STDR Simulator) to simulate the environment.

## Pre-requisites & Setup

- [Install ROS melodic](http://wiki.ros.org/melodic/Installation);
- [Configure the catkin workspace](http://wiki.ros.org/ROS/Tutorials/InstallingandConfiguringROSEnvironment#Create_a_ROS_Workspace);
- [Install the STDR from Github](http://wiki.ros.org/stdr_simulator/Tutorials/Set%20up%20STDR%20Simulator#Get_STDR_Simulator_from_Github) and not from the apt packages as they are not up to date;
- Download this repository and move the files from *Assignment_2* folder into *catkin_ws* folder. Your *catkin_ws* folder structure should be something like this:
```
catkin_ws/
   setup.sh
   ...
   build/
      ...
   devel/
      setup.bash
      ...
   src/
      assignment_2/
      CMakeLists.txt
      stdr_simulator/
```
- Run the *setup.sh* script

```sh
    cd ~/catkin_ws/
    sh setup.sh
```

- Build the package

```sh
    cd ~/catkin_ws/
    catkin_make
```

## Running the Program

- Open a terminal and run one of the commands bellow

```sh
    roslaunch stdr_launchers linefollowing_V.launch // For a V-shaped map
    roslaunch stdr_launchers linefollowing_W.launch // For a W-shaped map
    roslaunch stdr_launchers linefollowing_W2.launch // For a hollow W-shaped map
    roslaunch stdr_launchers linefollowing_C.launch // For a C-shaped map
```

These commands should open a window displaying a map and a robot with its laser sensors.

- Open another terminal and run the command

```sh
    rosrun assignment_2 robot_linefollow_node robot0 laser_0
```

This command should apply the movement logic to the robot. If you get an error saying something like *assignment_2 not found*, try sourcing the *setup.bash* file.
```sh
    cd ~/catkin_ws
    source devel/setup.bash
```
