# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_SOURCE_DIR = /home/duong/cauliFlower

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/duong/cauliFlower/build

# Include any dependencies generated for this target.
include CMakeFiles/flower.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/flower.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/flower.dir/flags.make

CMakeFiles/flower.dir/src/xampleflower.cpp.o: CMakeFiles/flower.dir/flags.make
CMakeFiles/flower.dir/src/xampleflower.cpp.o: ../src/xampleflower.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/duong/cauliFlower/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/flower.dir/src/xampleflower.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/flower.dir/src/xampleflower.cpp.o -c /home/duong/cauliFlower/src/xampleflower.cpp

CMakeFiles/flower.dir/src/xampleflower.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/flower.dir/src/xampleflower.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/duong/cauliFlower/src/xampleflower.cpp > CMakeFiles/flower.dir/src/xampleflower.cpp.i

CMakeFiles/flower.dir/src/xampleflower.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/flower.dir/src/xampleflower.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/duong/cauliFlower/src/xampleflower.cpp -o CMakeFiles/flower.dir/src/xampleflower.cpp.s

CMakeFiles/flower.dir/src/xampleflower.cpp.o.requires:

.PHONY : CMakeFiles/flower.dir/src/xampleflower.cpp.o.requires

CMakeFiles/flower.dir/src/xampleflower.cpp.o.provides: CMakeFiles/flower.dir/src/xampleflower.cpp.o.requires
	$(MAKE) -f CMakeFiles/flower.dir/build.make CMakeFiles/flower.dir/src/xampleflower.cpp.o.provides.build
.PHONY : CMakeFiles/flower.dir/src/xampleflower.cpp.o.provides

CMakeFiles/flower.dir/src/xampleflower.cpp.o.provides.build: CMakeFiles/flower.dir/src/xampleflower.cpp.o


CMakeFiles/flower.dir/src/main.cpp.o: CMakeFiles/flower.dir/flags.make
CMakeFiles/flower.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/duong/cauliFlower/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/flower.dir/src/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/flower.dir/src/main.cpp.o -c /home/duong/cauliFlower/src/main.cpp

CMakeFiles/flower.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/flower.dir/src/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/duong/cauliFlower/src/main.cpp > CMakeFiles/flower.dir/src/main.cpp.i

CMakeFiles/flower.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/flower.dir/src/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/duong/cauliFlower/src/main.cpp -o CMakeFiles/flower.dir/src/main.cpp.s

CMakeFiles/flower.dir/src/main.cpp.o.requires:

.PHONY : CMakeFiles/flower.dir/src/main.cpp.o.requires

CMakeFiles/flower.dir/src/main.cpp.o.provides: CMakeFiles/flower.dir/src/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/flower.dir/build.make CMakeFiles/flower.dir/src/main.cpp.o.provides.build
.PHONY : CMakeFiles/flower.dir/src/main.cpp.o.provides

CMakeFiles/flower.dir/src/main.cpp.o.provides.build: CMakeFiles/flower.dir/src/main.cpp.o


CMakeFiles/flower.dir/src/utility.cpp.o: CMakeFiles/flower.dir/flags.make
CMakeFiles/flower.dir/src/utility.cpp.o: ../src/utility.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/duong/cauliFlower/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/flower.dir/src/utility.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/flower.dir/src/utility.cpp.o -c /home/duong/cauliFlower/src/utility.cpp

CMakeFiles/flower.dir/src/utility.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/flower.dir/src/utility.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/duong/cauliFlower/src/utility.cpp > CMakeFiles/flower.dir/src/utility.cpp.i

CMakeFiles/flower.dir/src/utility.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/flower.dir/src/utility.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/duong/cauliFlower/src/utility.cpp -o CMakeFiles/flower.dir/src/utility.cpp.s

CMakeFiles/flower.dir/src/utility.cpp.o.requires:

.PHONY : CMakeFiles/flower.dir/src/utility.cpp.o.requires

CMakeFiles/flower.dir/src/utility.cpp.o.provides: CMakeFiles/flower.dir/src/utility.cpp.o.requires
	$(MAKE) -f CMakeFiles/flower.dir/build.make CMakeFiles/flower.dir/src/utility.cpp.o.provides.build
.PHONY : CMakeFiles/flower.dir/src/utility.cpp.o.provides

CMakeFiles/flower.dir/src/utility.cpp.o.provides.build: CMakeFiles/flower.dir/src/utility.cpp.o


# Object files for target flower
flower_OBJECTS = \
"CMakeFiles/flower.dir/src/xampleflower.cpp.o" \
"CMakeFiles/flower.dir/src/main.cpp.o" \
"CMakeFiles/flower.dir/src/utility.cpp.o"

# External object files for target flower
flower_EXTERNAL_OBJECTS =

flower: CMakeFiles/flower.dir/src/xampleflower.cpp.o
flower: CMakeFiles/flower.dir/src/main.cpp.o
flower: CMakeFiles/flower.dir/src/utility.cpp.o
flower: CMakeFiles/flower.dir/build.make
flower: /usr/lib/x86_64-linux-gnu/libGLU.so
flower: /usr/lib/x86_64-linux-gnu/libGL.so
flower: /usr/lib/x86_64-linux-gnu/libglut.so
flower: /usr/lib/x86_64-linux-gnu/libXmu.so
flower: /usr/lib/x86_64-linux-gnu/libXi.so
flower: CMakeFiles/flower.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/duong/cauliFlower/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable flower"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/flower.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/flower.dir/build: flower

.PHONY : CMakeFiles/flower.dir/build

CMakeFiles/flower.dir/requires: CMakeFiles/flower.dir/src/xampleflower.cpp.o.requires
CMakeFiles/flower.dir/requires: CMakeFiles/flower.dir/src/main.cpp.o.requires
CMakeFiles/flower.dir/requires: CMakeFiles/flower.dir/src/utility.cpp.o.requires

.PHONY : CMakeFiles/flower.dir/requires

CMakeFiles/flower.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/flower.dir/cmake_clean.cmake
.PHONY : CMakeFiles/flower.dir/clean

CMakeFiles/flower.dir/depend:
	cd /home/duong/cauliFlower/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/duong/cauliFlower /home/duong/cauliFlower /home/duong/cauliFlower/build /home/duong/cauliFlower/build /home/duong/cauliFlower/build/CMakeFiles/flower.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/flower.dir/depend
