# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

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
CMAKE_SOURCE_DIR = /home/user/F/git/exercism/cpp/prime-factors

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/user/F/git/exercism/cpp/prime-factors

# Utility rule file for test_prime-factors.

# Include the progress variables for this target.
include CMakeFiles/test_prime-factors.dir/progress.make

CMakeFiles/test_prime-factors: prime-factors
	./prime-factors

test_prime-factors: CMakeFiles/test_prime-factors
test_prime-factors: CMakeFiles/test_prime-factors.dir/build.make

.PHONY : test_prime-factors

# Rule to build all files generated by this target.
CMakeFiles/test_prime-factors.dir/build: test_prime-factors

.PHONY : CMakeFiles/test_prime-factors.dir/build

CMakeFiles/test_prime-factors.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/test_prime-factors.dir/cmake_clean.cmake
.PHONY : CMakeFiles/test_prime-factors.dir/clean

CMakeFiles/test_prime-factors.dir/depend:
	cd /home/user/F/git/exercism/cpp/prime-factors && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/user/F/git/exercism/cpp/prime-factors /home/user/F/git/exercism/cpp/prime-factors /home/user/F/git/exercism/cpp/prime-factors /home/user/F/git/exercism/cpp/prime-factors /home/user/F/git/exercism/cpp/prime-factors/CMakeFiles/test_prime-factors.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/test_prime-factors.dir/depend

