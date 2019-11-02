# ROBO

Project developed for the MIEIC ROBO curricular unit

## Setup

- [Install ROS melodic](http://wiki.ros.org/melodic/Installation);
- [Configure the catkin workspace](http://wiki.ros.org/ROS/Tutorials/InstallingandConfiguringROSEnvironment#Create_a_ROS_Workspace);
- [Install the STDR from Github](http://wiki.ros.org/stdr_simulator/Tutorials/Set%20up%20STDR%20Simulator#Get_STDR_Simulator_from_Github) and not from the apt packages as they are not up to date;
- Download this repository and save its files in *~/catkin_ws/src/*;
- Run the setup script

```sh
    cd ~/catkin_ws/src/
    sh setup.sh
```

- Build the package

```sh
    cd ~/catkin_ws/
    catkin_make
```

## Running the Program

- Open a terminal and run the command

```sh
    roslaunch stdr_launchers line-following-robot.launch
```

This command should open a windows displaying a map and a robot.

- In another terminal run the command

```sh
    rosrun line_following_robot robot_linefollow_node robot0 laser_0
```

This command should apply the movement logic to the robot.
