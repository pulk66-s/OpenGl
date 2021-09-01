#ifndef __TRIANGES_HPP__
#define __TRIANGES_HPP__

#include <iostream>
#include <vector>

#include "ShapeAbstract/Triangle.hpp"

class Triangles {

private:
    std::vector<Triangle> triangles;
    std::vector<GLfloat> allCoords;
    std::vector<GLfloat> allColors;
    GLuint VAO, vertexBuffer, colorsBuffer;
    void updateBuffer(void);

public:
    Triangles(void);
    ~Triangles(void);
    Triangle create();
    Triangle create(GLfloat coords[]);
    Triangle create(GLfloat coords[], GLfloat colors[]);
    Triangle getTriangle(int index);
    void draw(void);
    void update(Triangle t);

};

#endif