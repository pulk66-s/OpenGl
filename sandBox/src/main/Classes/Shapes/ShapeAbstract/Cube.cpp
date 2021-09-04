#include "Cube.hpp"

#include <iostream>
Cube::Cube(void) {
    GLfloat coords[CUBE_SIZE / 18][SQUARE_SIZE] = {
        {0, 0, 0, 1, 0, 0, 0, -1, 0, 0, -1, 0, 1, 0, 0, 1, -1, 0},
        {0, 0, -1, 1, 0, -1, 0, -1, -1, 0, -1, -1, 1, 0, -1, 1, -1, -1},
        {0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, -1, 0, -1, -1},
        {1, 0, 0, 1, 0, -1, 1, -1, 0, 1, -1, 0, 1, 0, -1, 1, -1, -1},
        {0, 0, 0, 1, 0, 0, 0, 0, -1, 0, 0, -1, 1, 0, 0, 1, 0, -1},
        {0, -1, 0, 1, -1, 0, 0, -1, -1, 0, -1, -1, 1, -1, 0, 1, -1, -1}
    };

    for (int i = 0; i < CUBE_SIZE / 18; i++) {
        this->faces[i] = Square(coords[i]);
        for (int j = 0; j < SQUARE_SIZE; j++) {
            this->colors[i * SQUARE_SIZE + j] = 1;
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

void Cube::move(float x, float y, float z) {
    GLfloat moves[] = {x, y, z};

    for (int i = 0; i < CUBE_SIZE / 18; i++) {
        this->faces[i].move(x, y, z);
    }
    for (int i = 0; i < CUBE_SIZE; i++) {
        this->coords[i] += moves[i % 3];
    }
}

void Cube::setColors(GLfloat colors[CUBE_SIZE]) {
    for (int i = 0; i < CUBE_SIZE / 18; i++) {
        GLfloat faceColor[SQUARE_SIZE];

        for (int j = 0; j < SQUARE_SIZE; j++) {
            faceColor[j] = colors[i * SQUARE_SIZE + j]; 
        }
        this->faces[i].setColors(faceColor);
    }
    for (int i = 0; i < CUBE_SIZE; i++) {
        this->colors[i] = colors[i];
    }
}