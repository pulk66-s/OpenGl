#ifndef __CUBE_HPP__
#define __CUBE_HPP__

#include <iostream>

#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>

#define VERTEX_SIZE 108

class Cube {

private:
    GLfloat g_color_buffer_data[VERTEX_SIZE];
    GLfloat g_vertex_buffer_data[VERTEX_SIZE];
    GLuint vertexArrayID;
    GLuint vertexbuffer;
	GLuint colorbuffer;

public:
    Cube(void);
    ~Cube(void);
    void display(void);
    void move(GLfloat x, GLfloat y, GLfloat z);
    void setColor(GLfloat r, GLfloat g, GLfloat b);

};

#endif