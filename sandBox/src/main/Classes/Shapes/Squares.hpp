#ifndef __CUBES_HPP__
#define __CUBES_HPP__

#include <vector>

#include "ShapeAbstract/Square.hpp"

class Squares {

private:
    GLuint VAO, vertexBuffer, colorsBuffer;
    std::vector<Square> squares;
    std::vector<GLfloat> allCoords, allColors;

public:
    Squares(void);
    ~Squares(void);
    Square create(void);
    void updateBuffer(void);
    void draw(void);

};

#endif