# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/parallels/Documents/FEUP/ROBO/Assignment_2/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/parallels/Documents/FEUP/ROBO/Assignment_2/build

# Include any dependencies generated for this target.
include stdr_simulator/stdr_robot/CMakeFiles/stdr_thermal_sensor.dir/depend.make

# Include the progress variables for this target.
include stdr_simulator/stdr_robot/CMakeFiles/stdr_thermal_sensor.dir/progress.make

# Include the compile flags for this target's objects.
include stdr_simulator/stdr_robot/CMakeFiles/stdr_thermal_sensor.dir/flags.make

stdr_simulator/stdr_robot/CMakeFiles/stdr_thermal_sensor.dir/src/sensors/thermal.cpp.o: stdr_simulator/stdr_robot/CMakeFiles/stdr_thermal_sensor.dir/flags.make
stdr_simulator/stdr_robot/CMakeFiles/stdr_thermal_sensor.dir/src/sensors/thermal.cpp.o: /home/parallels/Documents/FEUP/ROBO/Assignment_2/src/stdr_simulator/stdr_robot/src/sensors/thermal.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/parallels/Documents/FEUP/ROBO/Assignment_2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object stdr_simulator/stdr_robot/CMakeFiles/stdr_thermal_sensor.dir/src/sensors/thermal.cpp.o"
	cd /home/parallels/Documents/FEUP/ROBO/Assignment_2/build/stdr_simulator/stdr_robot && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/stdr_thermal_sensor.dir/src/sensors/thermal.cpp.o -c /home/parallels/Documents/FEUP/ROBO/Assignment_2/src/stdr_simulator/stdr_robot/src/sensors/thermal.cpp

stdr_simulator/stdr_robot/CMakeFiles/stdr_thermal_sensor.dir/src/sensors/thermal.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/stdr_thermal_sensor.dir/src/sensors/thermal.cpp.i"
	cd /home/parallels/Documents/FEUP/ROBO/Assignment_2/build/stdr_simulator/stdr_robot && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/parallels/Documents/FEUP/ROBO/Assignment_2/src/stdr_simulator/stdr_robot/src/sensors/thermal.cpp > CMakeFiles/stdr_thermal_sensor.dir/src/sensors/thermal.cpp.i

stdr_simulator/stdr_robot/CMakeFiles/stdr_thermal_sensor.dir/src/sensors/thermal.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/stdr_thermal_sensor.dir/src/sensors/thermal.cpp.s"
	cd /home/parallels/Documents/FEUP/ROBO/Assignment_2/build/stdr_simulator/stdr_robot && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/parallels/Documents/FEUP/ROBO/Assignment_2/src/stdr_simulator/stdr_robot/src/sensors/thermal.cpp -o CMakeFiles/stdr_thermal_sensor.dir/src/sensors/thermal.cpp.s

stdr_simulator/stdr_robot/CMakeFiles/stdr_thermal_sensor.dir/src/sensors/thermal.cpp.o.requires:

.PHONY : stdr_simulator/stdr_robot/CMakeFiles/stdr_thermal_sensor.dir/src/sensors/thermal.cpp.o.requires

stdr_simulator/stdr_robot/CMakeFiles/stdr_thermal_sensor.dir/src/sensors/thermal.cpp.o.provides: stdr_simulator/stdr_robot/CMakeFiles/stdr_thermal_sensor.dir/src/sensors/thermal.cpp.o.requires
	$(MAKE) -f stdr_simulator/stdr_robot/CMakeFiles/stdr_thermal_sensor.dir/build.make stdr_simulator/stdr_robot/CMakeFiles/stdr_thermal_sensor.dir/src/sensors/thermal.cpp.o.provides.build
.PHONY : stdr_simulator/stdr_robot/CMakeFiles/stdr_thermal_sensor.dir/src/sensors/thermal.cpp.o.provides

stdr_simulator/stdr_robot/CMakeFiles/stdr_thermal_sensor.dir/src/sensors/thermal.cpp.o.provides.build: stdr_simulator/stdr_robot/CMakeFiles/stdr_thermal_sensor.dir/src/sensors/thermal.cpp.o


# Object files for target stdr_thermal_sensor
stdr_thermal_sensor_OBJECTS = \
"CMakeFiles/stdr_thermal_sensor.dir/src/sensors/thermal.cpp.o"

# External object files for target stdr_thermal_sensor
stdr_thermal_sensor_EXTERNAL_OBJECTS =

/home/parallels/Documents/FEUP/ROBO/Assignment_2/devel/lib/libstdr_thermal_sensor.so: stdr_simulator/stdr_robot/CMakeFiles/stdr_thermal_sensor.dir/src/sensors/thermal.cpp.o
/home/parallels/Documents/FEUP/ROBO/Assignment_2/devel/lib/libstdr_thermal_sensor.so: stdr_simulator/stdr_robot/CMakeFiles/stdr_thermal_sensor.dir/build.make
/home/parallels/Documents/FEUP/ROBO/Assignment_2/devel/lib/libstdr_thermal_sensor.so: /opt/ros/melodic/lib/libnodeletlib.so
/home/parallels/Documents/FEUP/ROBO/Assignment_2/devel/lib/libstdr_thermal_sensor.so: /opt/ros/melodic/lib/libbondcpp.so
/home/parallels/Documents/FEUP/ROBO/Assignment_2/devel/lib/libstdr_thermal_sensor.so: /opt/ros/melodic/lib/libclass_loader.so
/home/parallels/Documents/FEUP/ROBO/Assignment_2/devel/lib/libstdr_thermal_sensor.so: /usr/lib/libPocoFoundation.so
/home/parallels/Documents/FEUP/ROBO/Assignment_2/devel/lib/libstdr_thermal_sensor.so: /usr/lib/x86_64-linux-gnu/libdl.so
/home/parallels/Documents/FEUP/ROBO/Assignment_2/devel/lib/libstdr_thermal_sensor.so: /opt/ros/melodic/lib/libtf.so
/home/parallels/Documents/FEUP/ROBO/Assignment_2/devel/lib/libstdr_thermal_sensor.so: /opt/ros/melodic/lib/libtf2_ros.so
/home/parallels/Documents/FEUP/ROBO/Assignment_2/devel/lib/libstdr_thermal_sensor.so: /opt/ros/melodic/lib/libactionlib.so
/home/parallels/Documents/FEUP/ROBO/Assignment_2/devel/lib/libstdr_thermal_sensor.so: /opt/ros/melodic/lib/libmessage_filters.so
/home/parallels/Documents/FEUP/ROBO/Assignment_2/devel/lib/libstdr_thermal_sensor.so: /opt/ros/melodic/lib/libtf2.so
/home/parallels/Documents/FEUP/ROBO/Assignment_2/devel/lib/libstdr_thermal_sensor.so: /usr/lib/x86_64-linux-gnu/libtinyxml.so
/home/parallels/Documents/FEUP/ROBO/Assignment_2/devel/lib/libstdr_thermal_sensor.so: /opt/ros/melodic/lib/libroscpp.so
/home/parallels/Documents/FEUP/ROBO/Assignment_2/devel/lib/libstdr_thermal_sensor.so: /usr/lib/x86_64-linux-gnu/libboost_signals.so
/home/parallels/Documents/FEUP/ROBO/Assignment_2/devel/lib/libstdr_thermal_sensor.so: /opt/ros/melodic/lib/librosconsole.so
/home/parallels/Documents/FEUP/ROBO/Assignment_2/devel/lib/libstdr_thermal_sensor.so: /opt/ros/melodic/lib/librosconsole_log4cxx.so
/home/parallels/Documents/FEUP/ROBO/Assignment_2/devel/lib/libstdr_thermal_sensor.so: /opt/ros/melodic/lib/librosconsole_backend_interface.so
/home/parallels/Documents/FEUP/ROBO/Assignment_2/devel/lib/libstdr_thermal_sensor.so: /usr/lib/x86_64-linux-gnu/liblog4cxx.so
/home/parallels/Documents/FEUP/ROBO/Assignment_2/devel/lib/libstdr_thermal_sensor.so: /usr/lib/x86_64-linux-gnu/libboost_regex.so
/home/parallels/Documents/FEUP/ROBO/Assignment_2/devel/lib/libstdr_thermal_sensor.so: /opt/ros/melodic/lib/libxmlrpcpp.so
/home/parallels/Documents/FEUP/ROBO/Assignment_2/devel/lib/libstdr_thermal_sensor.so: /opt/ros/melodic/lib/libroslib.so
/home/parallels/Documents/FEUP/ROBO/Assignment_2/devel/lib/libstdr_thermal_sensor.so: /opt/ros/melodic/lib/librospack.so
/home/parallels/Documents/FEUP/ROBO/Assignment_2/devel/lib/libstdr_thermal_sensor.so: /usr/lib/x86_64-linux-gnu/libpython2.7.so
/home/parallels/Documents/FEUP/ROBO/Assignment_2/devel/lib/libstdr_thermal_sensor.so: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
/home/parallels/Documents/FEUP/ROBO/Assignment_2/devel/lib/libstdr_thermal_sensor.so: /usr/lib/x86_64-linux-gnu/libboost_program_options.so
/home/parallels/Documents/FEUP/ROBO/Assignment_2/devel/lib/libstdr_thermal_sensor.so: /usr/lib/x86_64-linux-gnu/libtinyxml2.so
/home/parallels/Documents/FEUP/ROBO/Assignment_2/devel/lib/libstdr_thermal_sensor.so: /opt/ros/melodic/lib/libroscpp_serialization.so
/home/parallels/Documents/FEUP/ROBO/Assignment_2/devel/lib/libstdr_thermal_sensor.so: /opt/ros/melodic/lib/librostime.so
/home/parallels/Documents/FEUP/ROBO/Assignment_2/devel/lib/libstdr_thermal_sensor.so: /opt/ros/melodic/lib/libcpp_common.so
/home/parallels/Documents/FEUP/ROBO/Assignment_2/devel/lib/libstdr_thermal_sensor.so: /usr/lib/x86_64-linux-gnu/libboost_system.so
/home/parallels/Documents/FEUP/ROBO/Assignment_2/devel/lib/libstdr_thermal_sensor.so: /usr/lib/x86_64-linux-gnu/libboost_thread.so
/home/parallels/Documents/FEUP/ROBO/Assignment_2/devel/lib/libstdr_thermal_sensor.so: /usr/lib/x86_64-linux-gnu/libboost_chrono.so
/home/parallels/Documents/FEUP/ROBO/Assignment_2/devel/lib/libstdr_thermal_sensor.so: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
/home/parallels/Documents/FEUP/ROBO/Assignment_2/devel/lib/libstdr_thermal_sensor.so: /usr/lib/x86_64-linux-gnu/libboost_atomic.so
/home/parallels/Documents/FEUP/ROBO/Assignment_2/devel/lib/libstdr_thermal_sensor.so: /usr/lib/x86_64-linux-gnu/libpthread.so
/home/parallels/Documents/FEUP/ROBO/Assignment_2/devel/lib/libstdr_thermal_sensor.so: /usr/lib/x86_64-linux-gnu/libconsole_bridge.so.0.4
/home/parallels/Documents/FEUP/ROBO/Assignment_2/devel/lib/libstdr_thermal_sensor.so: /home/parallels/Documents/FEUP/ROBO/Assignment_2/devel/lib/libstdr_sensor_base.so
/home/parallels/Documents/FEUP/ROBO/Assignment_2/devel/lib/libstdr_thermal_sensor.so: /opt/ros/melodic/lib/libnodeletlib.so
/home/parallels/Documents/FEUP/ROBO/Assignment_2/devel/lib/libstdr_thermal_sensor.so: /opt/ros/melodic/lib/libbondcpp.so
/home/parallels/Documents/FEUP/ROBO/Assignment_2/devel/lib/libstdr_thermal_sensor.so: /opt/ros/melodic/lib/libclass_loader.so
/home/parallels/Documents/FEUP/ROBO/Assignment_2/devel/lib/libstdr_thermal_sensor.so: /usr/lib/libPocoFoundation.so
/home/parallels/Documents/FEUP/ROBO/Assignment_2/devel/lib/libstdr_thermal_sensor.so: /usr/lib/x86_64-linux-gnu/libdl.so
/home/parallels/Documents/FEUP/ROBO/Assignment_2/devel/lib/libstdr_thermal_sensor.so: /opt/ros/melodic/lib/libtf.so
/home/parallels/Documents/FEUP/ROBO/Assignment_2/devel/lib/libstdr_thermal_sensor.so: /opt/ros/melodic/lib/libtf2_ros.so
/home/parallels/Documents/FEUP/ROBO/Assignment_2/devel/lib/libstdr_thermal_sensor.so: /opt/ros/melodic/lib/libactionlib.so
/home/parallels/Documents/FEUP/ROBO/Assignment_2/devel/lib/libstdr_thermal_sensor.so: /opt/ros/melodic/lib/libmessage_filters.so
/home/parallels/Documents/FEUP/ROBO/Assignment_2/devel/lib/libstdr_thermal_sensor.so: /opt/ros/melodic/lib/libtf2.so
/home/parallels/Documents/FEUP/ROBO/Assignment_2/devel/lib/libstdr_thermal_sensor.so: /home/parallels/Documents/FEUP/ROBO/Assignment_2/devel/lib/libstdr_parser.so
/home/parallels/Documents/FEUP/ROBO/Assignment_2/devel/lib/libstdr_thermal_sensor.so: /usr/lib/x86_64-linux-gnu/libtinyxml.so
/home/parallels/Documents/FEUP/ROBO/Assignment_2/devel/lib/libstdr_thermal_sensor.so: /opt/ros/melodic/lib/libroscpp.so
/home/parallels/Documents/FEUP/ROBO/Assignment_2/devel/lib/libstdr_thermal_sensor.so: /usr/lib/x86_64-linux-gnu/libboost_signals.so
/home/parallels/Documents/FEUP/ROBO/Assignment_2/devel/lib/libstdr_thermal_sensor.so: /opt/ros/melodic/lib/librosconsole.so
/home/parallels/Documents/FEUP/ROBO/Assignment_2/devel/lib/libstdr_thermal_sensor.so: /opt/ros/melodic/lib/librosconsole_log4cxx.so
/home/parallels/Documents/FEUP/ROBO/Assignment_2/devel/lib/libstdr_thermal_sensor.so: /opt/ros/melodic/lib/librosconsole_backend_interface.so
/home/parallels/Documents/FEUP/ROBO/Assignment_2/devel/lib/libstdr_thermal_sensor.so: /usr/lib/x86_64-linux-gnu/liblog4cxx.so
/home/parallels/Documents/FEUP/ROBO/Assignment_2/devel/lib/libstdr_thermal_sensor.so: /usr/lib/x86_64-linux-gnu/libboost_regex.so
/home/parallels/Documents/FEUP/ROBO/Assignment_2/devel/lib/libstdr_thermal_sensor.so: /opt/ros/melodic/lib/libxmlrpcpp.so
/home/parallels/Documents/FEUP/ROBO/Assignment_2/devel/lib/libstdr_thermal_sensor.so: /opt/ros/melodic/lib/libroslib.so
/home/parallels/Documents/FEUP/ROBO/Assignment_2/devel/lib/libstdr_thermal_sensor.so: /opt/ros/melodic/lib/librospack.so
/home/parallels/Documents/FEUP/ROBO/Assignment_2/devel/lib/libstdr_thermal_sensor.so: /usr/lib/x86_64-linux-gnu/libpython2.7.so
/home/parallels/Documents/FEUP/ROBO/Assignment_2/devel/lib/libstdr_thermal_sensor.so: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
/home/parallels/Documents/FEUP/ROBO/Assignment_2/devel/lib/libstdr_thermal_sensor.so: /usr/lib/x86_64-linux-gnu/libboost_program_options.so
/home/parallels/Documents/FEUP/ROBO/Assignment_2/devel/lib/libstdr_thermal_sensor.so: /usr/lib/x86_64-linux-gnu/libtinyxml2.so
/home/parallels/Documents/FEUP/ROBO/Assignment_2/devel/lib/libstdr_thermal_sensor.so: /opt/ros/melodic/lib/libroscpp_serialization.so
/home/parallels/Documents/FEUP/ROBO/Assignment_2/devel/lib/libstdr_thermal_sensor.so: /opt/ros/melodic/lib/librostime.so
/home/parallels/Documents/FEUP/ROBO/Assignment_2/devel/lib/libstdr_thermal_sensor.so: /opt/ros/melodic/lib/libcpp_common.so
/home/parallels/Documents/FEUP/ROBO/Assignment_2/devel/lib/libstdr_thermal_sensor.so: /usr/lib/x86_64-linux-gnu/libboost_system.so
/home/parallels/Documents/FEUP/ROBO/Assignment_2/devel/lib/libstdr_thermal_sensor.so: /usr/lib/x86_64-linux-gnu/libboost_thread.so
/home/parallels/Documents/FEUP/ROBO/Assignment_2/devel/lib/libstdr_thermal_sensor.so: /usr/lib/x86_64-linux-gnu/libboost_chrono.so
/home/parallels/Documents/FEUP/ROBO/Assignment_2/devel/lib/libstdr_thermal_sensor.so: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
/home/parallels/Documents/FEUP/ROBO/Assignment_2/devel/lib/libstdr_thermal_sensor.so: /usr/lib/x86_64-linux-gnu/libboost_atomic.so
/home/parallels/Documents/FEUP/ROBO/Assignment_2/devel/lib/libstdr_thermal_sensor.so: /usr/lib/x86_64-linux-gnu/libpthread.so
/home/parallels/Documents/FEUP/ROBO/Assignment_2/devel/lib/libstdr_thermal_sensor.so: /usr/lib/x86_64-linux-gnu/libconsole_bridge.so.0.4
/home/parallels/Documents/FEUP/ROBO/Assignment_2/devel/lib/libstdr_thermal_sensor.so: stdr_simulator/stdr_robot/CMakeFiles/stdr_thermal_sensor.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/parallels/Documents/FEUP/ROBO/Assignment_2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library /home/parallels/Documents/FEUP/ROBO/Assignment_2/devel/lib/libstdr_thermal_sensor.so"
	cd /home/parallels/Documents/FEUP/ROBO/Assignment_2/build/stdr_simulator/stdr_robot && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/stdr_thermal_sensor.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
stdr_simulator/stdr_robot/CMakeFiles/stdr_thermal_sensor.dir/build: /home/parallels/Documents/FEUP/ROBO/Assignment_2/devel/lib/libstdr_thermal_sensor.so

.PHONY : stdr_simulator/stdr_robot/CMakeFiles/stdr_thermal_sensor.dir/build

stdr_simulator/stdr_robot/CMakeFiles/stdr_thermal_sensor.dir/requires: stdr_simulator/stdr_robot/CMakeFiles/stdr_thermal_sensor.dir/src/sensors/thermal.cpp.o.requires

.PHONY : stdr_simulator/stdr_robot/CMakeFiles/stdr_thermal_sensor.dir/requires

stdr_simulator/stdr_robot/CMakeFiles/stdr_thermal_sensor.dir/clean:
	cd /home/parallels/Documents/FEUP/ROBO/Assignment_2/build/stdr_simulator/stdr_robot && $(CMAKE_COMMAND) -P CMakeFiles/stdr_thermal_sensor.dir/cmake_clean.cmake
.PHONY : stdr_simulator/stdr_robot/CMakeFiles/stdr_thermal_sensor.dir/clean

stdr_simulator/stdr_robot/CMakeFiles/stdr_thermal_sensor.dir/depend:
	cd /home/parallels/Documents/FEUP/ROBO/Assignment_2/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/parallels/Documents/FEUP/ROBO/Assignment_2/src /home/parallels/Documents/FEUP/ROBO/Assignment_2/src/stdr_simulator/stdr_robot /home/parallels/Documents/FEUP/ROBO/Assignment_2/build /home/parallels/Documents/FEUP/ROBO/Assignment_2/build/stdr_simulator/stdr_robot /home/parallels/Documents/FEUP/ROBO/Assignment_2/build/stdr_simulator/stdr_robot/CMakeFiles/stdr_thermal_sensor.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : stdr_simulator/stdr_robot/CMakeFiles/stdr_thermal_sensor.dir/depend

