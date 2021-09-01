#ifndef __CUBES_HPP__
#define __CUBES_HPP__

#include <vector>

#include "ShapeAbstract/Square.hpp"

class Squares {

private:
    GLuint VAO, vertexBuffer, colorsBuffer;
    std::vector<Square> squares;
    std::vector<GLfloat> allCoords, allColors;
    void updateBuffer(void);

public:
    Squares(void);
    ~Squares(void);
    Square create(void);
    Square create(GLfloat coords[SQUARE_SIZE]);
    Square create(GLfloat coords[SQUARE_SIZE], GLfloat colors[SQUARE_SIZE]);
    void update(Square square);
    void draw(void);

};

#endif