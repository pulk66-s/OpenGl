#ifndef __TRIANGLE_HPP__
#define __TRIANGLE_HPP__

#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>

#include "../../Shaders/shader.hpp"

class Triangle {

private:
    GLfloat vertexDatas[9];
    GLfloat colorDatas[9];
    GLuint vertexbuffer;
    GLuint vertexArrayID;
    GLuint layoutID;
    GLuint colorBuffer;
    void initTriangle(void);

public:
    Triangle(void);
    Triangle(GLfloat vertex[9]);
    ~Triangle(void);
    void display(void);
    void setLayoutId(GLuint layouID);
    GLfloat *getCoords(void);

};

#endif