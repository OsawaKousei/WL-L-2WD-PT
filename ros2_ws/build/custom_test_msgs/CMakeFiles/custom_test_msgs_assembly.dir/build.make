# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
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
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/osawakousei/ros2_ws/src/custom_test_msgs

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/osawakousei/ros2_ws/build/custom_test_msgs

# Utility rule file for custom_test_msgs_assembly.

# Include any custom commands dependencies for this target.
include CMakeFiles/custom_test_msgs_assembly.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/custom_test_msgs_assembly.dir/progress.make

CMakeFiles/custom_test_msgs_assembly: rosidl_generator_cs/custom_test_msgs/srv/add_three_ints.cs
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/osawakousei/ros2_ws/build/custom_test_msgs/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "/usr/bin/cmake;-version;/usr/bin/dotnet restore custom_test_msgs_assembly_dotnetcore.csproj;          /usr/bin/dotnet build custom_test_msgs_assembly_dotnetcore.csproj -> /home/osawakousei/ros2_ws/build/custom_test_msgs/custom_test_msgs_assembly"
	cd /home/osawakousei/ros2_ws/build/custom_test_msgs/custom_test_msgs_assembly && /usr/bin/cmake -DCSHARP_TARGET_FRAMEWORK="netstandard2.0" -DCSHARP_BUILDER_OUTPUT_TYPE="library" -DCSHARP_BUILDER_OUTPUT_PATH="/home/osawakousei/ros2_ws/build/custom_test_msgs/" -DCSHARP_PLATFORM="x64" -DCSHARP_BUILDER_OUTPUT_NAME="custom_test_msgs_assembly" -DCSHARP_CONFIGURE="Release" -DCSHARP_BUILDER_ADDITIONAL_REFERENCES="<Reference Include=\"/home/osawakousei/ros2_ws/install/ros2cs_common/lib/dotnet/ros2cs_common.dll\" />" -DCSHARP_BUILDER_SOURCES="<Compile Include=\"/home/osawakousei/ros2_ws/build/custom_test_msgs/rosidl_generator_cs/custom_test_msgs/srv/add_three_ints.cs\" />" -DCSHARP_TARGET_FRAMEWORK_VERSION="2.0" -DCSHARP_PACKAGE_REFERENCES="" -DMSBUILD_TOOLSET="12.0" -DCSHARP_IMPORTS="" -DCONFIG_INPUT_FILE="/home/osawakousei/ros2_ws/install/dotnet_cmake_module/share/dotnet_cmake_module/cmake/Modules/dotnet/dotnetcore.csproj.in" -DCONFIG_OUTPUT_FILE="/home/osawakousei/ros2_ws/build/custom_test_msgs/custom_test_msgs_assembly/custom_test_msgs_assembly_dotnetcore.csproj" -P /home/osawakousei/ros2_ws/install/dotnet_cmake_module/share/dotnet_cmake_module/cmake/ConfigureFile.cmake
	cd /home/osawakousei/ros2_ws/build/custom_test_msgs/custom_test_msgs_assembly && /usr/bin/cmake -DCSHARP_PACKAGE_REFERENCES="" -DCONFIG_INPUT_FILE="/home/osawakousei/ros2_ws/install/dotnet_cmake_module/share/dotnet_cmake_module/cmake/Modules/dotnet/packages.config.in" -DCONFIG_OUTPUT_FILE="/home/osawakousei/ros2_ws/build/custom_test_msgs/custom_test_msgs_assembly/packages.config" -P /home/osawakousei/ros2_ws/install/dotnet_cmake_module/share/dotnet_cmake_module/cmake/ConfigureFile.cmake
	cd /home/osawakousei/ros2_ws/build/custom_test_msgs/custom_test_msgs_assembly && /usr/bin/cmake -DCSHARP_BUILDER_OUTPUT_NAME="custom_test_msgs_assembly" -DCONFIG_INPUT_FILE="/home/osawakousei/ros2_ws/install/dotnet_cmake_module/share/dotnet_cmake_module/cmake/Modules/dotnet/Directory.Build.props.in" -DCONFIG_OUTPUT_FILE="/home/osawakousei/ros2_ws/build/custom_test_msgs/custom_test_msgs_assembly/Directory.Build.props" -P /home/osawakousei/ros2_ws/install/dotnet_cmake_module/share/dotnet_cmake_module/cmake/ConfigureFile.cmake
	cd /home/osawakousei/ros2_ws/build/custom_test_msgs/custom_test_msgs_assembly && /usr/bin/cmake -version
	cd /home/osawakousei/ros2_ws/build/custom_test_msgs/custom_test_msgs_assembly && /usr/bin/dotnet restore custom_test_msgs_assembly_dotnetcore.csproj
	cd /home/osawakousei/ros2_ws/build/custom_test_msgs/custom_test_msgs_assembly && /usr/bin/dotnet build custom_test_msgs_assembly_dotnetcore.csproj -c=Release

rosidl_generator_cs/custom_test_msgs/srv/add_three_ints.cs: /home/osawakousei/ros2_ws/install/rosidl_generator_cs/lib/rosidl_generator_cs/rosidl_generator_cs
rosidl_generator_cs/custom_test_msgs/srv/add_three_ints.cs: /home/osawakousei/ros2_ws/install/rosidl_generator_cs/local/lib/python3.10/dist-packages/rosidl_generator_cs/__init__.py
rosidl_generator_cs/custom_test_msgs/srv/add_three_ints.cs: /home/osawakousei/ros2_ws/install/rosidl_generator_cs/share/rosidl_generator_cs/resource/idl.c.em
rosidl_generator_cs/custom_test_msgs/srv/add_three_ints.cs: /home/osawakousei/ros2_ws/install/rosidl_generator_cs/share/rosidl_generator_cs/resource/idl_typesupport.c.em
rosidl_generator_cs/custom_test_msgs/srv/add_three_ints.cs: /home/osawakousei/ros2_ws/install/rosidl_generator_cs/share/rosidl_generator_cs/resource/idl.cs.em
rosidl_generator_cs/custom_test_msgs/srv/add_three_ints.cs: /home/osawakousei/ros2_ws/install/rosidl_generator_cs/share/rosidl_generator_cs/resource/msg.c.em
rosidl_generator_cs/custom_test_msgs/srv/add_three_ints.cs: /home/osawakousei/ros2_ws/install/rosidl_generator_cs/share/rosidl_generator_cs/resource/msg_typesupport.c.em
rosidl_generator_cs/custom_test_msgs/srv/add_three_ints.cs: /home/osawakousei/ros2_ws/install/rosidl_generator_cs/share/rosidl_generator_cs/resource/msg.cs.em
rosidl_generator_cs/custom_test_msgs/srv/add_three_ints.cs: /home/osawakousei/ros2_ws/install/rosidl_generator_cs/share/rosidl_generator_cs/resource/srv.c.em
rosidl_generator_cs/custom_test_msgs/srv/add_three_ints.cs: /home/osawakousei/ros2_ws/install/rosidl_generator_cs/share/rosidl_generator_cs/resource/srv_typesupport.c.em
rosidl_generator_cs/custom_test_msgs/srv/add_three_ints.cs: /home/osawakousei/ros2_ws/install/rosidl_generator_cs/share/rosidl_generator_cs/resource/srv.cs.em
rosidl_generator_cs/custom_test_msgs/srv/add_three_ints.cs: rosidl_adapter/custom_test_msgs/srv/AddThreeInts.idl
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/osawakousei/ros2_ws/build/custom_test_msgs/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating C# code for ROS interfaces"
	/usr/bin/python3.10 /home/osawakousei/ros2_ws/install/rosidl_generator_cs/lib/rosidl_generator_cs/rosidl_generator_cs --generator-arguments-file /home/osawakousei/ros2_ws/build/custom_test_msgs/rosidl_generator_cs__arguments.json --typesupport-impls "rosidl_typesupport_c;rosidl_typesupport_introspection_c;rosidl_typesupport_fastrtps_c" --cs-build-tool DotNetCore

rosidl_generator_cs/custom_test_msgs/srv/add_three_ints_s.c: rosidl_generator_cs/custom_test_msgs/srv/add_three_ints.cs
	@$(CMAKE_COMMAND) -E touch_nocreate rosidl_generator_cs/custom_test_msgs/srv/add_three_ints_s.c

rosidl_generator_cs/custom_test_msgs/srv/add_three_ints.ep.rosidl_typesupport_c.c: rosidl_generator_cs/custom_test_msgs/srv/add_three_ints.cs
	@$(CMAKE_COMMAND) -E touch_nocreate rosidl_generator_cs/custom_test_msgs/srv/add_three_ints.ep.rosidl_typesupport_c.c

rosidl_generator_cs/custom_test_msgs/srv/add_three_ints.ep.rosidl_typesupport_introspection_c.c: rosidl_generator_cs/custom_test_msgs/srv/add_three_ints.cs
	@$(CMAKE_COMMAND) -E touch_nocreate rosidl_generator_cs/custom_test_msgs/srv/add_three_ints.ep.rosidl_typesupport_introspection_c.c

rosidl_generator_cs/custom_test_msgs/srv/add_three_ints.ep.rosidl_typesupport_fastrtps_c.c: rosidl_generator_cs/custom_test_msgs/srv/add_three_ints.cs
	@$(CMAKE_COMMAND) -E touch_nocreate rosidl_generator_cs/custom_test_msgs/srv/add_three_ints.ep.rosidl_typesupport_fastrtps_c.c

custom_test_msgs_assembly: CMakeFiles/custom_test_msgs_assembly
custom_test_msgs_assembly: rosidl_generator_cs/custom_test_msgs/srv/add_three_ints.cs
custom_test_msgs_assembly: rosidl_generator_cs/custom_test_msgs/srv/add_three_ints.ep.rosidl_typesupport_c.c
custom_test_msgs_assembly: rosidl_generator_cs/custom_test_msgs/srv/add_three_ints.ep.rosidl_typesupport_fastrtps_c.c
custom_test_msgs_assembly: rosidl_generator_cs/custom_test_msgs/srv/add_three_ints.ep.rosidl_typesupport_introspection_c.c
custom_test_msgs_assembly: rosidl_generator_cs/custom_test_msgs/srv/add_three_ints_s.c
custom_test_msgs_assembly: CMakeFiles/custom_test_msgs_assembly.dir/build.make
.PHONY : custom_test_msgs_assembly

# Rule to build all files generated by this target.
CMakeFiles/custom_test_msgs_assembly.dir/build: custom_test_msgs_assembly
.PHONY : CMakeFiles/custom_test_msgs_assembly.dir/build

CMakeFiles/custom_test_msgs_assembly.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/custom_test_msgs_assembly.dir/cmake_clean.cmake
.PHONY : CMakeFiles/custom_test_msgs_assembly.dir/clean

CMakeFiles/custom_test_msgs_assembly.dir/depend:
	cd /home/osawakousei/ros2_ws/build/custom_test_msgs && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/osawakousei/ros2_ws/src/custom_test_msgs /home/osawakousei/ros2_ws/src/custom_test_msgs /home/osawakousei/ros2_ws/build/custom_test_msgs /home/osawakousei/ros2_ws/build/custom_test_msgs /home/osawakousei/ros2_ws/build/custom_test_msgs/CMakeFiles/custom_test_msgs_assembly.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/custom_test_msgs_assembly.dir/depend

