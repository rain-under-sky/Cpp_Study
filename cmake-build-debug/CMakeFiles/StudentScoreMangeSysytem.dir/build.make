# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/aomsir/MyStudy/C++/Code

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/aomsir/MyStudy/C++/Code/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/StudentScoreMangeSysytem.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/StudentScoreMangeSysytem.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/StudentScoreMangeSysytem.dir/flags.make

CMakeFiles/StudentScoreMangeSysytem.dir/StudentScoreMangeSysytem.cpp.o: CMakeFiles/StudentScoreMangeSysytem.dir/flags.make
CMakeFiles/StudentScoreMangeSysytem.dir/StudentScoreMangeSysytem.cpp.o: ../StudentScoreMangeSysytem.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/aomsir/MyStudy/C++/Code/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/StudentScoreMangeSysytem.dir/StudentScoreMangeSysytem.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/StudentScoreMangeSysytem.dir/StudentScoreMangeSysytem.cpp.o -c /Users/aomsir/MyStudy/C++/Code/StudentScoreMangeSysytem.cpp

CMakeFiles/StudentScoreMangeSysytem.dir/StudentScoreMangeSysytem.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/StudentScoreMangeSysytem.dir/StudentScoreMangeSysytem.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/aomsir/MyStudy/C++/Code/StudentScoreMangeSysytem.cpp > CMakeFiles/StudentScoreMangeSysytem.dir/StudentScoreMangeSysytem.cpp.i

CMakeFiles/StudentScoreMangeSysytem.dir/StudentScoreMangeSysytem.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/StudentScoreMangeSysytem.dir/StudentScoreMangeSysytem.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/aomsir/MyStudy/C++/Code/StudentScoreMangeSysytem.cpp -o CMakeFiles/StudentScoreMangeSysytem.dir/StudentScoreMangeSysytem.cpp.s

# Object files for target StudentScoreMangeSysytem
StudentScoreMangeSysytem_OBJECTS = \
"CMakeFiles/StudentScoreMangeSysytem.dir/StudentScoreMangeSysytem.cpp.o"

# External object files for target StudentScoreMangeSysytem
StudentScoreMangeSysytem_EXTERNAL_OBJECTS =

StudentScoreMangeSysytem: CMakeFiles/StudentScoreMangeSysytem.dir/StudentScoreMangeSysytem.cpp.o
StudentScoreMangeSysytem: CMakeFiles/StudentScoreMangeSysytem.dir/build.make
StudentScoreMangeSysytem: CMakeFiles/StudentScoreMangeSysytem.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/aomsir/MyStudy/C++/Code/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable StudentScoreMangeSysytem"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/StudentScoreMangeSysytem.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/StudentScoreMangeSysytem.dir/build: StudentScoreMangeSysytem

.PHONY : CMakeFiles/StudentScoreMangeSysytem.dir/build

CMakeFiles/StudentScoreMangeSysytem.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/StudentScoreMangeSysytem.dir/cmake_clean.cmake
.PHONY : CMakeFiles/StudentScoreMangeSysytem.dir/clean

CMakeFiles/StudentScoreMangeSysytem.dir/depend:
	cd /Users/aomsir/MyStudy/C++/Code/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/aomsir/MyStudy/C++/Code /Users/aomsir/MyStudy/C++/Code /Users/aomsir/MyStudy/C++/Code/cmake-build-debug /Users/aomsir/MyStudy/C++/Code/cmake-build-debug /Users/aomsir/MyStudy/C++/Code/cmake-build-debug/CMakeFiles/StudentScoreMangeSysytem.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/StudentScoreMangeSysytem.dir/depend
