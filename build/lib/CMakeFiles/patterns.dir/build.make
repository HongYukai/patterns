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
CMAKE_SOURCE_DIR = /home/hongyk/patterns

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/hongyk/patterns/build

# Include any dependencies generated for this target.
include lib/CMakeFiles/patterns.dir/depend.make

# Include the progress variables for this target.
include lib/CMakeFiles/patterns.dir/progress.make

# Include the compile flags for this target's objects.
include lib/CMakeFiles/patterns.dir/flags.make

lib/CMakeFiles/patterns.dir/single.cpp.o: lib/CMakeFiles/patterns.dir/flags.make
lib/CMakeFiles/patterns.dir/single.cpp.o: ../lib/single.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hongyk/patterns/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lib/CMakeFiles/patterns.dir/single.cpp.o"
	cd /home/hongyk/patterns/build/lib && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/patterns.dir/single.cpp.o -c /home/hongyk/patterns/lib/single.cpp

lib/CMakeFiles/patterns.dir/single.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/patterns.dir/single.cpp.i"
	cd /home/hongyk/patterns/build/lib && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hongyk/patterns/lib/single.cpp > CMakeFiles/patterns.dir/single.cpp.i

lib/CMakeFiles/patterns.dir/single.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/patterns.dir/single.cpp.s"
	cd /home/hongyk/patterns/build/lib && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hongyk/patterns/lib/single.cpp -o CMakeFiles/patterns.dir/single.cpp.s

# Object files for target patterns
patterns_OBJECTS = \
"CMakeFiles/patterns.dir/single.cpp.o"

# External object files for target patterns
patterns_EXTERNAL_OBJECTS =

lib/libpatterns.a: lib/CMakeFiles/patterns.dir/single.cpp.o
lib/libpatterns.a: lib/CMakeFiles/patterns.dir/build.make
lib/libpatterns.a: lib/CMakeFiles/patterns.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/hongyk/patterns/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libpatterns.a"
	cd /home/hongyk/patterns/build/lib && $(CMAKE_COMMAND) -P CMakeFiles/patterns.dir/cmake_clean_target.cmake
	cd /home/hongyk/patterns/build/lib && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/patterns.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lib/CMakeFiles/patterns.dir/build: lib/libpatterns.a

.PHONY : lib/CMakeFiles/patterns.dir/build

lib/CMakeFiles/patterns.dir/clean:
	cd /home/hongyk/patterns/build/lib && $(CMAKE_COMMAND) -P CMakeFiles/patterns.dir/cmake_clean.cmake
.PHONY : lib/CMakeFiles/patterns.dir/clean

lib/CMakeFiles/patterns.dir/depend:
	cd /home/hongyk/patterns/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/hongyk/patterns /home/hongyk/patterns/lib /home/hongyk/patterns/build /home/hongyk/patterns/build/lib /home/hongyk/patterns/build/lib/CMakeFiles/patterns.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lib/CMakeFiles/patterns.dir/depend

