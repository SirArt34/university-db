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
CMAKE_SOURCE_DIR = /home/rafal/Desktop/University-db/university-db

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/rafal/Desktop/University-db/university-db/build

# Include any dependencies generated for this target.
include CMakeFiles/UNIV-lib.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/UNIV-lib.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/UNIV-lib.dir/flags.make

CMakeFiles/UNIV-lib.dir/student.cpp.o: CMakeFiles/UNIV-lib.dir/flags.make
CMakeFiles/UNIV-lib.dir/student.cpp.o: ../student.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rafal/Desktop/University-db/university-db/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/UNIV-lib.dir/student.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/UNIV-lib.dir/student.cpp.o -c /home/rafal/Desktop/University-db/university-db/student.cpp

CMakeFiles/UNIV-lib.dir/student.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/UNIV-lib.dir/student.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rafal/Desktop/University-db/university-db/student.cpp > CMakeFiles/UNIV-lib.dir/student.cpp.i

CMakeFiles/UNIV-lib.dir/student.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/UNIV-lib.dir/student.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rafal/Desktop/University-db/university-db/student.cpp -o CMakeFiles/UNIV-lib.dir/student.cpp.s

# Object files for target UNIV-lib
UNIV__lib_OBJECTS = \
"CMakeFiles/UNIV-lib.dir/student.cpp.o"

# External object files for target UNIV-lib
UNIV__lib_EXTERNAL_OBJECTS =

libUNIV-lib.a: CMakeFiles/UNIV-lib.dir/student.cpp.o
libUNIV-lib.a: CMakeFiles/UNIV-lib.dir/build.make
libUNIV-lib.a: CMakeFiles/UNIV-lib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/rafal/Desktop/University-db/university-db/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libUNIV-lib.a"
	$(CMAKE_COMMAND) -P CMakeFiles/UNIV-lib.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/UNIV-lib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/UNIV-lib.dir/build: libUNIV-lib.a

.PHONY : CMakeFiles/UNIV-lib.dir/build

CMakeFiles/UNIV-lib.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/UNIV-lib.dir/cmake_clean.cmake
.PHONY : CMakeFiles/UNIV-lib.dir/clean

CMakeFiles/UNIV-lib.dir/depend:
	cd /home/rafal/Desktop/University-db/university-db/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/rafal/Desktop/University-db/university-db /home/rafal/Desktop/University-db/university-db /home/rafal/Desktop/University-db/university-db/build /home/rafal/Desktop/University-db/university-db/build /home/rafal/Desktop/University-db/university-db/build/CMakeFiles/UNIV-lib.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/UNIV-lib.dir/depend

