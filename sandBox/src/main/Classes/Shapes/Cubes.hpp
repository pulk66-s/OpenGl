#ifndef __CUBES_HPP__
#define __CUBES_HPP__

#include <vector>

#include "ShapeAbstract/Cube.hpp"

class Cubes {

private:
    GLuint VAO, vertexBuffer, colorsBuffer;
    std::vector<Cube> cubes;
    std::vector<GLfloat> allCoords, allColors;
    void updateBuffer(void);

public:
    Cubes(void);
    ~Cubes(void);
    Cube create(void);
    void update(Cube cube);
    void draw(void);
    std::vector<Cube> getCubes(void);

};

#endif