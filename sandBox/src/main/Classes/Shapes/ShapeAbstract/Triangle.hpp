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
    Triangle(GLfloat coords[TRIANGLE_SIZE]);
    Triangle(GLfloat coords[TRIANGLE_SIZE], GLfloat colors[TRIANGLE_SIZE]);
    void move(float x, float y, float z);
    GLfloat *getColors(void);
    GLfloat *getCoords(void);
    void setColors(GLfloat colors[TRIANGLE_SIZE]);
    void setCoords(GLfloat coords[TRIANGLE_SIZE]);
    void setIndex(int index);
    int getIndex(void);

};

#endif