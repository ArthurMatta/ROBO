# Assignment 3 & 4

This is the repository for Assignment 3 and 4 of the Robotics curricular unit at FEUP.

## Goal

The objective of these assignments is the development of a Cat & Mouse game. The first should chase and capture the second whilst the second should avoid being captured.

To that end, two robots were developed using the Robotic Operational System (ROS) and the Gazebo Simulator environment.

## Pre-requisites & Setup

- [Install ROS melodic](http://wiki.ros.org/melodic/Installation);
- [Configure the catkin workspace](http://wiki.ros.org/ROS/Tutorials/InstallingandConfiguringROSEnvironment#Create_a_ROS_Workspace);
- [Install Gazebo](http://gazebosim.org/tutorials?cat=install);
- [Install gazebo_ros package](http://gazebosim.org/tutorials?tut=ros_installing&cat=connect_ros);
```
sudo apt-get install ros-melodic-gazebo-ros-pkgs ros-melodic-gazebo-ros-control
```
- [Install ros controllers package](http://wiki.ros.org/ros_control#Install):
```
sudo apt-get install ros-melodic-ros-control ros-melodic-ros-controllers
```
- [Install ros_state_publisher package](http://wiki.ros.org/robot_state_publisher):
```
sudo apt-get install ros-melodic-robot-state-publisher
```
- For the training section it is required to have [python 3.5+](https://www.python.org/downloads/) and the [openAI gym package](https://gym.openai.com/docs/#installation) installed.  
**Note:** Recent versions of the gym package are causing some errors with our program. Therefore we recommed installing version 0.10.8:
```
pip install gym==0.10.8
```
- Donwload this repository and move the contents of *Assignment_3_and_4* folder into the *catkin_ws* folder. Your folder structure should be something like this:
```
catkin_ws/
   build/
      ...
   devel/
      setup.bash
      ...
   src/
      cat_description/
         cad/
         materials/
         meshes/
         urdf/
      cat_gazebo/
         launch/
         materials/
         models/
         plugins/
         worlds/
      cat_control/
         config/
         launch/   
      cat_training/
         config/
         launch/
         scripts/
         ...
      CMakeLists.txt
```

## Running the Program

- Remove the devel/ and build/ folders
```
cd <path_to_your_catkin_ws>/catkin_ws
rm -r build/ devel/
```

- Recompiled your working space and sourced the setup file:
```
catkin_make
source devel/setup.bash
```

- Execute the following command to initialize the world with the cat robot in gazebo:
```
roslaunch cat_gazebo cat_world.launch
```

## Training the Robot

- After launching the simulation with the previous command, execute the following command in a second terminal:
```
roslaunch cat_training start_training.launch
```
- The robot should start moving and tons of [DEBUG] messages should appear in your terminal.
