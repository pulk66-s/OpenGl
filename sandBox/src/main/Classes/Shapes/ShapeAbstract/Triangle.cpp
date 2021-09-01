#include "Triangle.hpp"

Triangle::Triangle(void) {
    GLfloat defaultCoords[] = {
        -1, -1, 0,
        1, -1, 0,
        0, 1, 0
    },
    defaultColors[] = {
        1, 1, 1,
        1, 1, 1,
        1, 1, 1
    };

    for (int i = 0; i < 9; i++) {
        this->colors[i] = defaultColors[i];
        this->coords[i] = defaultCoords[i];
    }
    this->index = -1;
}

Triangle::Triangle(GLfloat coords[]) {
    GLfloat defaultColors[] = {
        1, 1, 1,
        1, 1, 1,
        1, 1, 1
    };

    for (int i = 0; i < 9; i++) {
        this->colors[i] = defaultColors[i];
        this->coords[i] = coords[i];
    }
}

Triangle::Triangle(GLfloat coords[], GLfloat colors[]) {
    for (int i = 0; i < 9; i++) {
        this->colors[i] = colors[i];
        this->coords[i] = coords[i];
    }
}

GLfloat *Triangle::getColors(void) {
    return (this->colors);
}

void Triangle::setIndex(int index) {
    this->index = index;
}

void Triangle::move(float x, float y, float z) {
    GLfloat movement[] = {x, y, z};

    for (int i = 0; i < 9; i++) {
        this->coords[i] += movement[i % 3];
    }
}

int Triangle::getIndex(void) {
    return (this->index);
}

GLfloat *Triangle::getCoords(void) {
    return (this->coords);
}

void Triangle::setCoords(GLfloat coords[]) {
    for (int i = 0; i < 9; i++) {
        this->coords[i] = coords[i];
    }
}

void Triangle::setColors(GLfloat colors[]) {
    for (int i = 0; i < 9; i++) {
        this->colors[i] = colors[i];
    }
}