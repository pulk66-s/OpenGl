#ifndef __TRIANGLE_HPP__
#define __TRIANGLE_HPP__

#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>

#define TRIANGLE_SIZE 9

class Triangle {

private:
    int index;
    GLfloat coords[9], colors[9];

public:
    Triangle(void);
    Triangle(GLfloat coords[]);
    Triangle(GLfloat coords[], GLfloat colors[]);
    void move(float x, float y, float z);
    GLfloat *getColors(void);
    GLfloat *getCoords(void);
    void setColors(GLfloat colors[]);
    void setCoords(GLfloat coords[]);
    void setIndex(int index);
    int getIndex(void);

};

#endif