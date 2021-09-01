#ifndef __TRIANGLE_HPP__
#define __TRIANGLE_HPP__

#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>

#include "../../Shaders/shader.hpp"

class Triangle {

private:
    GLfloat vertexDatas[9];
    GLuint vertexbuffer;
    GLuint vertexArrayID;
    GLuint matrixID;
    glm::mat4 transformation;
    bool transformed;
    void initTriangle(void);

public:
    Triangle(void);
    Triangle(GLfloat vertex[9]);
    ~Triangle(void);
    void display(void);

};

#endif