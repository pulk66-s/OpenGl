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
CMAKE_SOURCE_DIR = /home/me-an-intellectuel/Bureau/Perso/OpenGl/multipleTriangles

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/me-an-intellectuel/Bureau/Perso/OpenGl/multipleTriangles

# Include any dependencies generated for this target.
include external/glfw-3.1.2/tests/CMakeFiles/events.dir/depend.make

# Include the progress variables for this target.
include external/glfw-3.1.2/tests/CMakeFiles/events.dir/progress.make

# Include the compile flags for this target's objects.
include external/glfw-3.1.2/tests/CMakeFiles/events.dir/flags.make

external/glfw-3.1.2/tests/CMakeFiles/events.dir/events.c.o: external/glfw-3.1.2/tests/CMakeFiles/events.dir/flags.make
external/glfw-3.1.2/tests/CMakeFiles/events.dir/events.c.o: external/glfw-3.1.2/tests/events.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/me-an-intellectuel/Bureau/Perso/OpenGl/multipleTriangles/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object external/glfw-3.1.2/tests/CMakeFiles/events.dir/events.c.o"
	cd /home/me-an-intellectuel/Bureau/Perso/OpenGl/multipleTriangles/external/glfw-3.1.2/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/events.dir/events.c.o   -c /home/me-an-intellectuel/Bureau/Perso/OpenGl/multipleTriangles/external/glfw-3.1.2/tests/events.c

external/glfw-3.1.2/tests/CMakeFiles/events.dir/events.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/events.dir/events.c.i"
	cd /home/me-an-intellectuel/Bureau/Perso/OpenGl/multipleTriangles/external/glfw-3.1.2/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/me-an-intellectuel/Bureau/Perso/OpenGl/multipleTriangles/external/glfw-3.1.2/tests/events.c > CMakeFiles/events.dir/events.c.i

external/glfw-3.1.2/tests/CMakeFiles/events.dir/events.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/events.dir/events.c.s"
	cd /home/me-an-intellectuel/Bureau/Perso/OpenGl/multipleTriangles/external/glfw-3.1.2/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/me-an-intellectuel/Bureau/Perso/OpenGl/multipleTriangles/external/glfw-3.1.2/tests/events.c -o CMakeFiles/events.dir/events.c.s

external/glfw-3.1.2/tests/CMakeFiles/events.dir/__/deps/getopt.c.o: external/glfw-3.1.2/tests/CMakeFiles/events.dir/flags.make
external/glfw-3.1.2/tests/CMakeFiles/events.dir/__/deps/getopt.c.o: external/glfw-3.1.2/deps/getopt.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/me-an-intellectuel/Bureau/Perso/OpenGl/multipleTriangles/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object external/glfw-3.1.2/tests/CMakeFiles/events.dir/__/deps/getopt.c.o"
	cd /home/me-an-intellectuel/Bureau/Perso/OpenGl/multipleTriangles/external/glfw-3.1.2/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/events.dir/__/deps/getopt.c.o   -c /home/me-an-intellectuel/Bureau/Perso/OpenGl/multipleTriangles/external/glfw-3.1.2/deps/getopt.c

external/glfw-3.1.2/tests/CMakeFiles/events.dir/__/deps/getopt.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/events.dir/__/deps/getopt.c.i"
	cd /home/me-an-intellectuel/Bureau/Perso/OpenGl/multipleTriangles/external/glfw-3.1.2/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/me-an-intellectuel/Bureau/Perso/OpenGl/multipleTriangles/external/glfw-3.1.2/deps/getopt.c > CMakeFiles/events.dir/__/deps/getopt.c.i

external/glfw-3.1.2/tests/CMakeFiles/events.dir/__/deps/getopt.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/events.dir/__/deps/getopt.c.s"
	cd /home/me-an-intellectuel/Bureau/Perso/OpenGl/multipleTriangles/external/glfw-3.1.2/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/me-an-intellectuel/Bureau/Perso/OpenGl/multipleTriangles/external/glfw-3.1.2/deps/getopt.c -o CMakeFiles/events.dir/__/deps/getopt.c.s

# Object files for target events
events_OBJECTS = \
"CMakeFiles/events.dir/events.c.o" \
"CMakeFiles/events.dir/__/deps/getopt.c.o"

# External object files for target events
events_EXTERNAL_OBJECTS =

external/glfw-3.1.2/tests/events: external/glfw-3.1.2/tests/CMakeFiles/events.dir/events.c.o
external/glfw-3.1.2/tests/events: external/glfw-3.1.2/tests/CMakeFiles/events.dir/__/deps/getopt.c.o
external/glfw-3.1.2/tests/events: external/glfw-3.1.2/tests/CMakeFiles/events.dir/build.make
external/glfw-3.1.2/tests/events: external/glfw-3.1.2/src/libglfw3.a
external/glfw-3.1.2/tests/events: /usr/lib/x86_64-linux-gnu/librt.so
external/glfw-3.1.2/tests/events: /usr/lib/x86_64-linux-gnu/libm.so
external/glfw-3.1.2/tests/events: /usr/lib/x86_64-linux-gnu/libX11.so
external/glfw-3.1.2/tests/events: /usr/lib/x86_64-linux-gnu/libXrandr.so
external/glfw-3.1.2/tests/events: /usr/lib/x86_64-linux-gnu/libXinerama.so
external/glfw-3.1.2/tests/events: /usr/lib/x86_64-linux-gnu/libXi.so
external/glfw-3.1.2/tests/events: /usr/lib/x86_64-linux-gnu/libXxf86vm.so
external/glfw-3.1.2/tests/events: /usr/lib/x86_64-linux-gnu/libXcursor.so
external/glfw-3.1.2/tests/events: /usr/lib/x86_64-linux-gnu/libGL.so
external/glfw-3.1.2/tests/events: external/glfw-3.1.2/tests/CMakeFiles/events.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/me-an-intellectuel/Bureau/Perso/OpenGl/multipleTriangles/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable events"
	cd /home/me-an-intellectuel/Bureau/Perso/OpenGl/multipleTriangles/external/glfw-3.1.2/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/events.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
external/glfw-3.1.2/tests/CMakeFiles/events.dir/build: external/glfw-3.1.2/tests/events

.PHONY : external/glfw-3.1.2/tests/CMakeFiles/events.dir/build

external/glfw-3.1.2/tests/CMakeFiles/events.dir/clean:
	cd /home/me-an-intellectuel/Bureau/Perso/OpenGl/multipleTriangles/external/glfw-3.1.2/tests && $(CMAKE_COMMAND) -P CMakeFiles/events.dir/cmake_clean.cmake
.PHONY : external/glfw-3.1.2/tests/CMakeFiles/events.dir/clean

external/glfw-3.1.2/tests/CMakeFiles/events.dir/depend:
	cd /home/me-an-intellectuel/Bureau/Perso/OpenGl/multipleTriangles && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/me-an-intellectuel/Bureau/Perso/OpenGl/multipleTriangles /home/me-an-intellectuel/Bureau/Perso/OpenGl/multipleTriangles/external/glfw-3.1.2/tests /home/me-an-intellectuel/Bureau/Perso/OpenGl/multipleTriangles /home/me-an-intellectuel/Bureau/Perso/OpenGl/multipleTriangles/external/glfw-3.1.2/tests /home/me-an-intellectuel/Bureau/Perso/OpenGl/multipleTriangles/external/glfw-3.1.2/tests/CMakeFiles/events.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : external/glfw-3.1.2/tests/CMakeFiles/events.dir/depend

