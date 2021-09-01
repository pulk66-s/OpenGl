#ifndef __CUBE_HPP__
#define __CUBE_HPP__

#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>

#include "Triangle.hpp"

#define SQUARE_SIZE 18

class Square {

private:
    int index;
    Triangle triangles[2];
    GLfloat coords[SQUARE_SIZE], colors[SQUARE_SIZE];

public:
    Square(void);
    Square(GLfloat coords[SQUARE_SIZE]);
    Square(GLfloat coords[SQUARE_SIZE], GLfloat colors[SQUARE_SIZE]);
    void move(float x, float y, float z);
    int getIndex(void);
    void setIndex(int index);
    Triangle *getTriangles(void);
    GLfloat *getCoords(void);
    void setCoords(GLfloat coords[SQUARE_SIZE]);
    GLfloat *getColors(void);
    void setColors(GLfloat r, GLfloat g, GLfloat b);

};

#endif