#include "Cube.hpp"

#include <iostream>
Cube::Cube(void) {
    GLfloat coords[CUBE_SIZE / 18][SQUARE_SIZE] = {
        {1, 1, -1, -1, 1, -1, -1, -1, -1, 1, 1, -1, -1, -1, -1, 1, -1, -1},
        {1, 1, 1, -1, 1, 1, -1, -1, 1, 1, 1, 1, -1, -1, 1, 1, -1, 1},
        {1, 1, 1, 1, -1, 1, 1, 1, -1, 1, 1, -1, 1, -1, -1, 1, -1, 1},
        {-1, 1, 1, -1, -1, 1, -1, 1, -1, -1, 1, -1, -1, -1, -1, -1, -1, 1},
        {1, 1, 1, 1, 1, -1, -1, 1, -1, 1, 1, 1, -1, 1, 1, -1, 1, -1},
        {1, -1, 1, 1, -1, -1, -1, -1, -1, 1, -1, 1, -1, -1, 1, -1, -1, -1}
    };

    for (int i = 0; i < CUBE_SIZE / 18; i++) {
        this->faces[i] = Square(coords[i]);
        for (int j = 0; j < SQUARE_SIZE; j++) {
            this->colors[i * SQUARE_SIZE + j] = 1;
            std::cout << i * SQUARE_SIZE + j << " " << this->colors[i * SQUARE_SIZE + j] << "\n";
            this->coords[i * SQUARE_SIZE + j] = coords[i][j];
        }
    }
}

void Cube::setCoords(GLfloat coords[CUBE_SIZE]) {
    for (int i = 0; i < CUBE_SIZE / 18; i++) {
        GLfloat c[SQUARE_SIZE];

        for (int j = 0; j < SQUARE_SIZE; j++) {
            c[j] = coords[SQUARE_SIZE * i + j];
        }
        this->faces[i].setCoords(c);
    }
}

#include <iostream>
GLfloat *Cube::getCoords(void) {
    return (this->coords);
}

GLfloat *Cube::getColors(void) {
    return (this->colors);
}

void Cube::setIndex(int index) {
    this->index = index;
}

int Cube::getIndex(void) {
    return (this->index);
}