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
include CMakeFiles/paisheng.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/paisheng.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/paisheng.dir/flags.make

CMakeFiles/paisheng.dir/派生与继承/paisheng.cpp.o: CMakeFiles/paisheng.dir/flags.make
CMakeFiles/paisheng.dir/派生与继承/paisheng.cpp.o: ../派生与继承/paisheng.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/aomsir/MyStudy/C++/Code/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/paisheng.dir/派生与继承/paisheng.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/paisheng.dir/派生与继承/paisheng.cpp.o -c /Users/aomsir/MyStudy/C++/Code/派生与继承/paisheng.cpp

CMakeFiles/paisheng.dir/派生与继承/paisheng.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/paisheng.dir/派生与继承/paisheng.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/aomsir/MyStudy/C++/Code/派生与继承/paisheng.cpp > CMakeFiles/paisheng.dir/派生与继承/paisheng.cpp.i

CMakeFiles/paisheng.dir/派生与继承/paisheng.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/paisheng.dir/派生与继承/paisheng.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/aomsir/MyStudy/C++/Code/派生与继承/paisheng.cpp -o CMakeFiles/paisheng.dir/派生与继承/paisheng.cpp.s

# Object files for target paisheng
paisheng_OBJECTS = \
"CMakeFiles/paisheng.dir/派生与继承/paisheng.cpp.o"

# External object files for target paisheng
paisheng_EXTERNAL_OBJECTS =

paisheng: CMakeFiles/paisheng.dir/派生与继承/paisheng.cpp.o
paisheng: CMakeFiles/paisheng.dir/build.make
paisheng: CMakeFiles/paisheng.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/aomsir/MyStudy/C++/Code/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable paisheng"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/paisheng.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/paisheng.dir/build: paisheng

.PHONY : CMakeFiles/paisheng.dir/build

CMakeFiles/paisheng.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/paisheng.dir/cmake_clean.cmake
.PHONY : CMakeFiles/paisheng.dir/clean

CMakeFiles/paisheng.dir/depend:
	cd /Users/aomsir/MyStudy/C++/Code/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/aomsir/MyStudy/C++/Code /Users/aomsir/MyStudy/C++/Code /Users/aomsir/MyStudy/C++/Code/cmake-build-debug /Users/aomsir/MyStudy/C++/Code/cmake-build-debug /Users/aomsir/MyStudy/C++/Code/cmake-build-debug/CMakeFiles/paisheng.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/paisheng.dir/depend

