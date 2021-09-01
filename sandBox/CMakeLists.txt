# CMake entry point
cmake_minimum_required (VERSION 3.0)
project (Testing)
include (CTest)

find_package(OpenGL REQUIRED)

# Compile external dependencies 
add_subdirectory (external)

if(INCLUDE_DISTRIB)
	add_subdirectory(distrib)
endif(INCLUDE_DISTRIB)

include_directories(
	external/glfw-3.1.2/include/
	external/glm-0.9.7.1/
	external/glew-1.13.0/include/
	.
)

set(ALL_LIBS
	${OPENGL_LIBRARY}
	glfw
	GLEW_1130
)

add_definitions(
	-DTW_STATIC
	-DTW_NO_LIB_PRAGMA
	-DTW_NO_DIRECT3D
	-DGLEW_STATIC
	-D_CRT_SECURE_NO_WARNINGS
)

add_executable(testing 
	src/main/main.cpp
	src/main/Shaders/shader.cpp
	src/main/Classes/Window.cpp
	src/main/Classes/Camera.cpp
	src/main/Classes/Colors.cpp
	src/main/Classes/Shapes/Triangles.cpp
	src/main/Classes/Shapes/Squares.cpp
	src/main/Classes/Shapes/ShapeAbstract/Triangle.cpp
	src/main/Classes/Shapes/ShapeAbstract/Square.cpp
)
target_link_libraries(testing
	${ALL_LIBS}
)
set_target_properties(testing PROPERTIES XCODE_ATTRIBUTE_CONFIGURATION_BUILD_DIR "${CMAKE_CURRENT_SOURCE_DIR}/testing/")
