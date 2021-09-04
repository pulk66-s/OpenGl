#ifndef __CUBE_HPP__
#define __CUBE_HPP__

#include <vector>

#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>

#include "Square.hpp"

#define CUBE_SIZE 108

class Cube {

private:
    Square faces[CUBE_SIZE / 18];
    int index;
    GLfloat coords[CUBE_SIZE], colors[CUBE_SIZE];

public:
    Cube(void);
    void move(float x, float y, float z);
    void setCoords(GLfloat coords[CUBE_SIZE]);
    GLfloat *getCoords(void);
    void setColors(GLfloat colors[CUBE_SIZE]);
    GLfloat *getColors(void);
    int getIndex(void);
    void setIndex(int index);

};

#endif