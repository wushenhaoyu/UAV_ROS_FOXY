# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_SOURCE_DIR = /home/ubuntu/Desktop/cartographer_ws/src/cartographer

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ubuntu/Desktop/cartographer_ws/build/cartographer

# Include any dependencies generated for this target.
include CMakeFiles/cartographer_migrate_serialization_format.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/cartographer_migrate_serialization_format.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cartographer_migrate_serialization_format.dir/flags.make

CMakeFiles/cartographer_migrate_serialization_format.dir/cartographer/io/migrate_serialization_format_main.cc.o: CMakeFiles/cartographer_migrate_serialization_format.dir/flags.make
CMakeFiles/cartographer_migrate_serialization_format.dir/cartographer/io/migrate_serialization_format_main.cc.o: /home/ubuntu/Desktop/cartographer_ws/src/cartographer/cartographer/io/migrate_serialization_format_main.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/Desktop/cartographer_ws/build/cartographer/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/cartographer_migrate_serialization_format.dir/cartographer/io/migrate_serialization_format_main.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cartographer_migrate_serialization_format.dir/cartographer/io/migrate_serialization_format_main.cc.o -c /home/ubuntu/Desktop/cartographer_ws/src/cartographer/cartographer/io/migrate_serialization_format_main.cc

CMakeFiles/cartographer_migrate_serialization_format.dir/cartographer/io/migrate_serialization_format_main.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cartographer_migrate_serialization_format.dir/cartographer/io/migrate_serialization_format_main.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ubuntu/Desktop/cartographer_ws/src/cartographer/cartographer/io/migrate_serialization_format_main.cc > CMakeFiles/cartographer_migrate_serialization_format.dir/cartographer/io/migrate_serialization_format_main.cc.i

CMakeFiles/cartographer_migrate_serialization_format.dir/cartographer/io/migrate_serialization_format_main.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cartographer_migrate_serialization_format.dir/cartographer/io/migrate_serialization_format_main.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ubuntu/Desktop/cartographer_ws/src/cartographer/cartographer/io/migrate_serialization_format_main.cc -o CMakeFiles/cartographer_migrate_serialization_format.dir/cartographer/io/migrate_serialization_format_main.cc.s

# Object files for target cartographer_migrate_serialization_format
cartographer_migrate_serialization_format_OBJECTS = \
"CMakeFiles/cartographer_migrate_serialization_format.dir/cartographer/io/migrate_serialization_format_main.cc.o"

# External object files for target cartographer_migrate_serialization_format
cartographer_migrate_serialization_format_EXTERNAL_OBJECTS =

cartographer_migrate_serialization_format: CMakeFiles/cartographer_migrate_serialization_format.dir/cartographer/io/migrate_serialization_format_main.cc.o
cartographer_migrate_serialization_format: CMakeFiles/cartographer_migrate_serialization_format.dir/build.make
cartographer_migrate_serialization_format: libcartographer.a
cartographer_migrate_serialization_format: /usr/lib/libceres.so.1.14.0
cartographer_migrate_serialization_format: /usr/lib/x86_64-linux-gnu/libglog.so
cartographer_migrate_serialization_format: /usr/lib/x86_64-linux-gnu/libgflags.so.2.2.2
cartographer_migrate_serialization_format: /usr/lib/x86_64-linux-gnu/liblua5.2.so
cartographer_migrate_serialization_format: /usr/lib/x86_64-linux-gnu/libm.so
cartographer_migrate_serialization_format: /usr/lib/x86_64-linux-gnu/libboost_iostreams.so.1.71.0
cartographer_migrate_serialization_format: /usr/lib/x86_64-linux-gnu/libgflags.so.2.2.2
cartographer_migrate_serialization_format: /usr/lib/x86_64-linux-gnu/libprotobuf.so
cartographer_migrate_serialization_format: CMakeFiles/cartographer_migrate_serialization_format.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ubuntu/Desktop/cartographer_ws/build/cartographer/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable cartographer_migrate_serialization_format"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cartographer_migrate_serialization_format.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cartographer_migrate_serialization_format.dir/build: cartographer_migrate_serialization_format

.PHONY : CMakeFiles/cartographer_migrate_serialization_format.dir/build

CMakeFiles/cartographer_migrate_serialization_format.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/cartographer_migrate_serialization_format.dir/cmake_clean.cmake
.PHONY : CMakeFiles/cartographer_migrate_serialization_format.dir/clean

CMakeFiles/cartographer_migrate_serialization_format.dir/depend:
	cd /home/ubuntu/Desktop/cartographer_ws/build/cartographer && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ubuntu/Desktop/cartographer_ws/src/cartographer /home/ubuntu/Desktop/cartographer_ws/src/cartographer /home/ubuntu/Desktop/cartographer_ws/build/cartographer /home/ubuntu/Desktop/cartographer_ws/build/cartographer /home/ubuntu/Desktop/cartographer_ws/build/cartographer/CMakeFiles/cartographer_migrate_serialization_format.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/cartographer_migrate_serialization_format.dir/depend

