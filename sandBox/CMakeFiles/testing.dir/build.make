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
CMAKE_SOURCE_DIR = /home/me-an-intellectuel/Bureau/Perso/OpenGl/sandBox

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/me-an-intellectuel/Bureau/Perso/OpenGl/sandBox

# Include any dependencies generated for this target.
include CMakeFiles/testing.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/testing.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/testing.dir/flags.make

CMakeFiles/testing.dir/src/main/main.cpp.o: CMakeFiles/testing.dir/flags.make
CMakeFiles/testing.dir/src/main/main.cpp.o: src/main/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/me-an-intellectuel/Bureau/Perso/OpenGl/sandBox/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/testing.dir/src/main/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/testing.dir/src/main/main.cpp.o -c /home/me-an-intellectuel/Bureau/Perso/OpenGl/sandBox/src/main/main.cpp

CMakeFiles/testing.dir/src/main/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/testing.dir/src/main/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/me-an-intellectuel/Bureau/Perso/OpenGl/sandBox/src/main/main.cpp > CMakeFiles/testing.dir/src/main/main.cpp.i

CMakeFiles/testing.dir/src/main/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/testing.dir/src/main/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/me-an-intellectuel/Bureau/Perso/OpenGl/sandBox/src/main/main.cpp -o CMakeFiles/testing.dir/src/main/main.cpp.s

CMakeFiles/testing.dir/src/main/Shaders/shader.cpp.o: CMakeFiles/testing.dir/flags.make
CMakeFiles/testing.dir/src/main/Shaders/shader.cpp.o: src/main/Shaders/shader.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/me-an-intellectuel/Bureau/Perso/OpenGl/sandBox/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/testing.dir/src/main/Shaders/shader.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/testing.dir/src/main/Shaders/shader.cpp.o -c /home/me-an-intellectuel/Bureau/Perso/OpenGl/sandBox/src/main/Shaders/shader.cpp

CMakeFiles/testing.dir/src/main/Shaders/shader.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/testing.dir/src/main/Shaders/shader.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/me-an-intellectuel/Bureau/Perso/OpenGl/sandBox/src/main/Shaders/shader.cpp > CMakeFiles/testing.dir/src/main/Shaders/shader.cpp.i

CMakeFiles/testing.dir/src/main/Shaders/shader.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/testing.dir/src/main/Shaders/shader.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/me-an-intellectuel/Bureau/Perso/OpenGl/sandBox/src/main/Shaders/shader.cpp -o CMakeFiles/testing.dir/src/main/Shaders/shader.cpp.s

CMakeFiles/testing.dir/src/main/Classes/Window.cpp.o: CMakeFiles/testing.dir/flags.make
CMakeFiles/testing.dir/src/main/Classes/Window.cpp.o: src/main/Classes/Window.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/me-an-intellectuel/Bureau/Perso/OpenGl/sandBox/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/testing.dir/src/main/Classes/Window.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/testing.dir/src/main/Classes/Window.cpp.o -c /home/me-an-intellectuel/Bureau/Perso/OpenGl/sandBox/src/main/Classes/Window.cpp

CMakeFiles/testing.dir/src/main/Classes/Window.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/testing.dir/src/main/Classes/Window.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/me-an-intellectuel/Bureau/Perso/OpenGl/sandBox/src/main/Classes/Window.cpp > CMakeFiles/testing.dir/src/main/Classes/Window.cpp.i

CMakeFiles/testing.dir/src/main/Classes/Window.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/testing.dir/src/main/Classes/Window.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/me-an-intellectuel/Bureau/Perso/OpenGl/sandBox/src/main/Classes/Window.cpp -o CMakeFiles/testing.dir/src/main/Classes/Window.cpp.s

CMakeFiles/testing.dir/src/main/Classes/Camera.cpp.o: CMakeFiles/testing.dir/flags.make
CMakeFiles/testing.dir/src/main/Classes/Camera.cpp.o: src/main/Classes/Camera.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/me-an-intellectuel/Bureau/Perso/OpenGl/sandBox/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/testing.dir/src/main/Classes/Camera.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/testing.dir/src/main/Classes/Camera.cpp.o -c /home/me-an-intellectuel/Bureau/Perso/OpenGl/sandBox/src/main/Classes/Camera.cpp

CMakeFiles/testing.dir/src/main/Classes/Camera.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/testing.dir/src/main/Classes/Camera.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/me-an-intellectuel/Bureau/Perso/OpenGl/sandBox/src/main/Classes/Camera.cpp > CMakeFiles/testing.dir/src/main/Classes/Camera.cpp.i

CMakeFiles/testing.dir/src/main/Classes/Camera.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/testing.dir/src/main/Classes/Camera.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/me-an-intellectuel/Bureau/Perso/OpenGl/sandBox/src/main/Classes/Camera.cpp -o CMakeFiles/testing.dir/src/main/Classes/Camera.cpp.s

CMakeFiles/testing.dir/src/main/Classes/Colors.cpp.o: CMakeFiles/testing.dir/flags.make
CMakeFiles/testing.dir/src/main/Classes/Colors.cpp.o: src/main/Classes/Colors.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/me-an-intellectuel/Bureau/Perso/OpenGl/sandBox/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/testing.dir/src/main/Classes/Colors.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/testing.dir/src/main/Classes/Colors.cpp.o -c /home/me-an-intellectuel/Bureau/Perso/OpenGl/sandBox/src/main/Classes/Colors.cpp

CMakeFiles/testing.dir/src/main/Classes/Colors.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/testing.dir/src/main/Classes/Colors.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/me-an-intellectuel/Bureau/Perso/OpenGl/sandBox/src/main/Classes/Colors.cpp > CMakeFiles/testing.dir/src/main/Classes/Colors.cpp.i

CMakeFiles/testing.dir/src/main/Classes/Colors.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/testing.dir/src/main/Classes/Colors.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/me-an-intellectuel/Bureau/Perso/OpenGl/sandBox/src/main/Classes/Colors.cpp -o CMakeFiles/testing.dir/src/main/Classes/Colors.cpp.s

CMakeFiles/testing.dir/src/main/Classes/File.cpp.o: CMakeFiles/testing.dir/flags.make
CMakeFiles/testing.dir/src/main/Classes/File.cpp.o: src/main/Classes/File.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/me-an-intellectuel/Bureau/Perso/OpenGl/sandBox/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/testing.dir/src/main/Classes/File.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/testing.dir/src/main/Classes/File.cpp.o -c /home/me-an-intellectuel/Bureau/Perso/OpenGl/sandBox/src/main/Classes/File.cpp

CMakeFiles/testing.dir/src/main/Classes/File.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/testing.dir/src/main/Classes/File.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/me-an-intellectuel/Bureau/Perso/OpenGl/sandBox/src/main/Classes/File.cpp > CMakeFiles/testing.dir/src/main/Classes/File.cpp.i

CMakeFiles/testing.dir/src/main/Classes/File.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/testing.dir/src/main/Classes/File.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/me-an-intellectuel/Bureau/Perso/OpenGl/sandBox/src/main/Classes/File.cpp -o CMakeFiles/testing.dir/src/main/Classes/File.cpp.s

CMakeFiles/testing.dir/src/main/Classes/Object.cpp.o: CMakeFiles/testing.dir/flags.make
CMakeFiles/testing.dir/src/main/Classes/Object.cpp.o: src/main/Classes/Object.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/me-an-intellectuel/Bureau/Perso/OpenGl/sandBox/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/testing.dir/src/main/Classes/Object.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/testing.dir/src/main/Classes/Object.cpp.o -c /home/me-an-intellectuel/Bureau/Perso/OpenGl/sandBox/src/main/Classes/Object.cpp

CMakeFiles/testing.dir/src/main/Classes/Object.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/testing.dir/src/main/Classes/Object.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/me-an-intellectuel/Bureau/Perso/OpenGl/sandBox/src/main/Classes/Object.cpp > CMakeFiles/testing.dir/src/main/Classes/Object.cpp.i

CMakeFiles/testing.dir/src/main/Classes/Object.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/testing.dir/src/main/Classes/Object.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/me-an-intellectuel/Bureau/Perso/OpenGl/sandBox/src/main/Classes/Object.cpp -o CMakeFiles/testing.dir/src/main/Classes/Object.cpp.s

CMakeFiles/testing.dir/src/main/Classes/Shapes/Triangles.cpp.o: CMakeFiles/testing.dir/flags.make
CMakeFiles/testing.dir/src/main/Classes/Shapes/Triangles.cpp.o: src/main/Classes/Shapes/Triangles.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/me-an-intellectuel/Bureau/Perso/OpenGl/sandBox/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/testing.dir/src/main/Classes/Shapes/Triangles.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/testing.dir/src/main/Classes/Shapes/Triangles.cpp.o -c /home/me-an-intellectuel/Bureau/Perso/OpenGl/sandBox/src/main/Classes/Shapes/Triangles.cpp

CMakeFiles/testing.dir/src/main/Classes/Shapes/Triangles.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/testing.dir/src/main/Classes/Shapes/Triangles.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/me-an-intellectuel/Bureau/Perso/OpenGl/sandBox/src/main/Classes/Shapes/Triangles.cpp > CMakeFiles/testing.dir/src/main/Classes/Shapes/Triangles.cpp.i

CMakeFiles/testing.dir/src/main/Classes/Shapes/Triangles.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/testing.dir/src/main/Classes/Shapes/Triangles.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/me-an-intellectuel/Bureau/Perso/OpenGl/sandBox/src/main/Classes/Shapes/Triangles.cpp -o CMakeFiles/testing.dir/src/main/Classes/Shapes/Triangles.cpp.s

CMakeFiles/testing.dir/src/main/Classes/Shapes/Squares.cpp.o: CMakeFiles/testing.dir/flags.make
CMakeFiles/testing.dir/src/main/Classes/Shapes/Squares.cpp.o: src/main/Classes/Shapes/Squares.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/me-an-intellectuel/Bureau/Perso/OpenGl/sandBox/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/testing.dir/src/main/Classes/Shapes/Squares.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/testing.dir/src/main/Classes/Shapes/Squares.cpp.o -c /home/me-an-intellectuel/Bureau/Perso/OpenGl/sandBox/src/main/Classes/Shapes/Squares.cpp

CMakeFiles/testing.dir/src/main/Classes/Shapes/Squares.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/testing.dir/src/main/Classes/Shapes/Squares.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/me-an-intellectuel/Bureau/Perso/OpenGl/sandBox/src/main/Classes/Shapes/Squares.cpp > CMakeFiles/testing.dir/src/main/Classes/Shapes/Squares.cpp.i

CMakeFiles/testing.dir/src/main/Classes/Shapes/Squares.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/testing.dir/src/main/Classes/Shapes/Squares.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/me-an-intellectuel/Bureau/Perso/OpenGl/sandBox/src/main/Classes/Shapes/Squares.cpp -o CMakeFiles/testing.dir/src/main/Classes/Shapes/Squares.cpp.s

CMakeFiles/testing.dir/src/main/Classes/Shapes/Cubes.cpp.o: CMakeFiles/testing.dir/flags.make
CMakeFiles/testing.dir/src/main/Classes/Shapes/Cubes.cpp.o: src/main/Classes/Shapes/Cubes.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/me-an-intellectuel/Bureau/Perso/OpenGl/sandBox/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/testing.dir/src/main/Classes/Shapes/Cubes.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/testing.dir/src/main/Classes/Shapes/Cubes.cpp.o -c /home/me-an-intellectuel/Bureau/Perso/OpenGl/sandBox/src/main/Classes/Shapes/Cubes.cpp

CMakeFiles/testing.dir/src/main/Classes/Shapes/Cubes.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/testing.dir/src/main/Classes/Shapes/Cubes.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/me-an-intellectuel/Bureau/Perso/OpenGl/sandBox/src/main/Classes/Shapes/Cubes.cpp > CMakeFiles/testing.dir/src/main/Classes/Shapes/Cubes.cpp.i

CMakeFiles/testing.dir/src/main/Classes/Shapes/Cubes.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/testing.dir/src/main/Classes/Shapes/Cubes.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/me-an-intellectuel/Bureau/Perso/OpenGl/sandBox/src/main/Classes/Shapes/Cubes.cpp -o CMakeFiles/testing.dir/src/main/Classes/Shapes/Cubes.cpp.s

CMakeFiles/testing.dir/src/main/Classes/Shapes/ShapeAbstract/Triangle.cpp.o: CMakeFiles/testing.dir/flags.make
CMakeFiles/testing.dir/src/main/Classes/Shapes/ShapeAbstract/Triangle.cpp.o: src/main/Classes/Shapes/ShapeAbstract/Triangle.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/me-an-intellectuel/Bureau/Perso/OpenGl/sandBox/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/testing.dir/src/main/Classes/Shapes/ShapeAbstract/Triangle.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/testing.dir/src/main/Classes/Shapes/ShapeAbstract/Triangle.cpp.o -c /home/me-an-intellectuel/Bureau/Perso/OpenGl/sandBox/src/main/Classes/Shapes/ShapeAbstract/Triangle.cpp

CMakeFiles/testing.dir/src/main/Classes/Shapes/ShapeAbstract/Triangle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/testing.dir/src/main/Classes/Shapes/ShapeAbstract/Triangle.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/me-an-intellectuel/Bureau/Perso/OpenGl/sandBox/src/main/Classes/Shapes/ShapeAbstract/Triangle.cpp > CMakeFiles/testing.dir/src/main/Classes/Shapes/ShapeAbstract/Triangle.cpp.i

CMakeFiles/testing.dir/src/main/Classes/Shapes/ShapeAbstract/Triangle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/testing.dir/src/main/Classes/Shapes/ShapeAbstract/Triangle.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/me-an-intellectuel/Bureau/Perso/OpenGl/sandBox/src/main/Classes/Shapes/ShapeAbstract/Triangle.cpp -o CMakeFiles/testing.dir/src/main/Classes/Shapes/ShapeAbstract/Triangle.cpp.s

CMakeFiles/testing.dir/src/main/Classes/Shapes/ShapeAbstract/Cube.cpp.o: CMakeFiles/testing.dir/flags.make
CMakeFiles/testing.dir/src/main/Classes/Shapes/ShapeAbstract/Cube.cpp.o: src/main/Classes/Shapes/ShapeAbstract/Cube.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/me-an-intellectuel/Bureau/Perso/OpenGl/sandBox/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/testing.dir/src/main/Classes/Shapes/ShapeAbstract/Cube.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/testing.dir/src/main/Classes/Shapes/ShapeAbstract/Cube.cpp.o -c /home/me-an-intellectuel/Bureau/Perso/OpenGl/sandBox/src/main/Classes/Shapes/ShapeAbstract/Cube.cpp

CMakeFiles/testing.dir/src/main/Classes/Shapes/ShapeAbstract/Cube.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/testing.dir/src/main/Classes/Shapes/ShapeAbstract/Cube.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/me-an-intellectuel/Bureau/Perso/OpenGl/sandBox/src/main/Classes/Shapes/ShapeAbstract/Cube.cpp > CMakeFiles/testing.dir/src/main/Classes/Shapes/ShapeAbstract/Cube.cpp.i

CMakeFiles/testing.dir/src/main/Classes/Shapes/ShapeAbstract/Cube.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/testing.dir/src/main/Classes/Shapes/ShapeAbstract/Cube.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/me-an-intellectuel/Bureau/Perso/OpenGl/sandBox/src/main/Classes/Shapes/ShapeAbstract/Cube.cpp -o CMakeFiles/testing.dir/src/main/Classes/Shapes/ShapeAbstract/Cube.cpp.s

CMakeFiles/testing.dir/src/main/Classes/Shapes/ShapeAbstract/Square.cpp.o: CMakeFiles/testing.dir/flags.make
CMakeFiles/testing.dir/src/main/Classes/Shapes/ShapeAbstract/Square.cpp.o: src/main/Classes/Shapes/ShapeAbstract/Square.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/me-an-intellectuel/Bureau/Perso/OpenGl/sandBox/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/testing.dir/src/main/Classes/Shapes/ShapeAbstract/Square.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/testing.dir/src/main/Classes/Shapes/ShapeAbstract/Square.cpp.o -c /home/me-an-intellectuel/Bureau/Perso/OpenGl/sandBox/src/main/Classes/Shapes/ShapeAbstract/Square.cpp

CMakeFiles/testing.dir/src/main/Classes/Shapes/ShapeAbstract/Square.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/testing.dir/src/main/Classes/Shapes/ShapeAbstract/Square.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/me-an-intellectuel/Bureau/Perso/OpenGl/sandBox/src/main/Classes/Shapes/ShapeAbstract/Square.cpp > CMakeFiles/testing.dir/src/main/Classes/Shapes/ShapeAbstract/Square.cpp.i

CMakeFiles/testing.dir/src/main/Classes/Shapes/ShapeAbstract/Square.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/testing.dir/src/main/Classes/Shapes/ShapeAbstract/Square.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/me-an-intellectuel/Bureau/Perso/OpenGl/sandBox/src/main/Classes/Shapes/ShapeAbstract/Square.cpp -o CMakeFiles/testing.dir/src/main/Classes/Shapes/ShapeAbstract/Square.cpp.s

# Object files for target testing
testing_OBJECTS = \
"CMakeFiles/testing.dir/src/main/main.cpp.o" \
"CMakeFiles/testing.dir/src/main/Shaders/shader.cpp.o" \
"CMakeFiles/testing.dir/src/main/Classes/Window.cpp.o" \
"CMakeFiles/testing.dir/src/main/Classes/Camera.cpp.o" \
"CMakeFiles/testing.dir/src/main/Classes/Colors.cpp.o" \
"CMakeFiles/testing.dir/src/main/Classes/File.cpp.o" \
"CMakeFiles/testing.dir/src/main/Classes/Object.cpp.o" \
"CMakeFiles/testing.dir/src/main/Classes/Shapes/Triangles.cpp.o" \
"CMakeFiles/testing.dir/src/main/Classes/Shapes/Squares.cpp.o" \
"CMakeFiles/testing.dir/src/main/Classes/Shapes/Cubes.cpp.o" \
"CMakeFiles/testing.dir/src/main/Classes/Shapes/ShapeAbstract/Triangle.cpp.o" \
"CMakeFiles/testing.dir/src/main/Classes/Shapes/ShapeAbstract/Cube.cpp.o" \
"CMakeFiles/testing.dir/src/main/Classes/Shapes/ShapeAbstract/Square.cpp.o"

# External object files for target testing
testing_EXTERNAL_OBJECTS =

testing: CMakeFiles/testing.dir/src/main/main.cpp.o
testing: CMakeFiles/testing.dir/src/main/Shaders/shader.cpp.o
testing: CMakeFiles/testing.dir/src/main/Classes/Window.cpp.o
testing: CMakeFiles/testing.dir/src/main/Classes/Camera.cpp.o
testing: CMakeFiles/testing.dir/src/main/Classes/Colors.cpp.o
testing: CMakeFiles/testing.dir/src/main/Classes/File.cpp.o
testing: CMakeFiles/testing.dir/src/main/Classes/Object.cpp.o
testing: CMakeFiles/testing.dir/src/main/Classes/Shapes/Triangles.cpp.o
testing: CMakeFiles/testing.dir/src/main/Classes/Shapes/Squares.cpp.o
testing: CMakeFiles/testing.dir/src/main/Classes/Shapes/Cubes.cpp.o
testing: CMakeFiles/testing.dir/src/main/Classes/Shapes/ShapeAbstract/Triangle.cpp.o
testing: CMakeFiles/testing.dir/src/main/Classes/Shapes/ShapeAbstract/Cube.cpp.o
testing: CMakeFiles/testing.dir/src/main/Classes/Shapes/ShapeAbstract/Square.cpp.o
testing: CMakeFiles/testing.dir/build.make
testing: /usr/lib/x86_64-linux-gnu/libGL.so
testing: /usr/lib/x86_64-linux-gnu/libGLU.so
testing: external/glfw-3.1.2/src/libglfw3.a
testing: external/libGLEW_1130.a
testing: /usr/lib/x86_64-linux-gnu/librt.so
testing: /usr/lib/x86_64-linux-gnu/libm.so
testing: /usr/lib/x86_64-linux-gnu/libX11.so
testing: /usr/lib/x86_64-linux-gnu/libXrandr.so
testing: /usr/lib/x86_64-linux-gnu/libXinerama.so
testing: /usr/lib/x86_64-linux-gnu/libXi.so
testing: /usr/lib/x86_64-linux-gnu/libXxf86vm.so
testing: /usr/lib/x86_64-linux-gnu/libXcursor.so
testing: /usr/lib/x86_64-linux-gnu/librt.so
testing: /usr/lib/x86_64-linux-gnu/libm.so
testing: /usr/lib/x86_64-linux-gnu/libX11.so
testing: /usr/lib/x86_64-linux-gnu/libXrandr.so
testing: /usr/lib/x86_64-linux-gnu/libXinerama.so
testing: /usr/lib/x86_64-linux-gnu/libXi.so
testing: /usr/lib/x86_64-linux-gnu/libXxf86vm.so
testing: /usr/lib/x86_64-linux-gnu/libXcursor.so
testing: /usr/lib/x86_64-linux-gnu/libGL.so
testing: /usr/lib/x86_64-linux-gnu/libGLU.so
testing: CMakeFiles/testing.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/me-an-intellectuel/Bureau/Perso/OpenGl/sandBox/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Linking CXX executable testing"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/testing.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/testing.dir/build: testing

.PHONY : CMakeFiles/testing.dir/build

CMakeFiles/testing.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/testing.dir/cmake_clean.cmake
.PHONY : CMakeFiles/testing.dir/clean

CMakeFiles/testing.dir/depend:
	cd /home/me-an-intellectuel/Bureau/Perso/OpenGl/sandBox && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/me-an-intellectuel/Bureau/Perso/OpenGl/sandBox /home/me-an-intellectuel/Bureau/Perso/OpenGl/sandBox /home/me-an-intellectuel/Bureau/Perso/OpenGl/sandBox /home/me-an-intellectuel/Bureau/Perso/OpenGl/sandBox /home/me-an-intellectuel/Bureau/Perso/OpenGl/sandBox/CMakeFiles/testing.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/testing.dir/depend

