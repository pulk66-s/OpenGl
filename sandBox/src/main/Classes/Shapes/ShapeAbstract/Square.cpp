#include "Square.hpp"

Square::Square(void) {
    GLfloat coord1[] = {
        1, 1, 0,
        -1, 1, 0,
        -1, -1, 0
    },
    coord2[] = {
        1, 1, 0,
        1, -1, 0,
        -1, -1, 0
    };

    this->triangles[0] = Triangle(coord1);
    this->triangles[1] = Triangle(coord2);
    this->index = -1;
    GLfloat *tColors = this->triangles[0].getColors(),
            *tColors2 = this->triangles[1].getColors();

    for (int i = 0; i < SQUARE_SIZE; i++) {
        if (i >= 9) {
            this->colors[i] = tColors2[i - 9];
            this->coords[i] = coord2[i - 9];
        } else {
            this->colors[i] = tColors[i];
            this->coords[i] = coord1[i];
        }
    }
}

Square::Square(GLfloat coords[SQUARE_SIZE]) {
    GLfloat *colors = this->triangles[0].getColors(),
            *colors2 = this->triangles[1].getColors();
    GLfloat coords1[SQUARE_SIZE / 2], coords2[SQUARE_SIZE / 2];

    for (int i = 0; i < SQUARE_SIZE; i++) {
        if (i >= 9) {
            this->colors[i] = colors2[i - 9];
            coords2[i - 9] = coords[i];
        } else {
            this->colors[i] = colors[i];
            coords1[i] = coords[i];
        }
        this->coords[i] = coords[i];
    }
    this->triangles[0] = Triangle(coords1);
    this->triangles[1] = Triangle(coords2);
    this->index = -1;
}

Square::Square(GLfloat coords[SQUARE_SIZE], GLfloat colors[SQUARE_SIZE]) {
    GLfloat colors1[SQUARE_SIZE / 2], colors2[SQUARE_SIZE / 2];
    GLfloat coords1[SQUARE_SIZE / 2], coords2[SQUARE_SIZE / 2];

    for (int i = 0; i < SQUARE_SIZE; i++) {
        if (i >= 9) {
            coords2[i - 9] = coords[i];
            colors2[i - 9] = colors[i];
        } else {
            coords1[i] = coords[i];
            colors1[i] = colors[i];
        }
        this->colors[i] = colors[i];
        this->coords[i] = coords[i];
    }
    this->triangles[0] = Triangle(coords1, colors1);
    this->triangles[1] = Triangle(coords2, colors2);
}

void Square::setIndex(int index) {
    this->index = index;
}

int Square::getIndex(void) {
    return (this->index);
}

Triangle *Square::getTriangles(void) {
    return (this->triangles);
}

GLfloat *Square::getCoords(void) {
    return (this->coords);
}

GLfloat *Square::getColors(void) {
    return (this->colors);
}

void Square::move(GLfloat x, GLfloat y, GLfloat z) {
    this->triangles[0].move(x, y, z);
    this->triangles[1].move(x, y, z);
    GLfloat *coords1 = this->triangles[0].getCoords(),
            *coords2 = this->triangles[1].getCoords();

    for (int i = 0; i < SQUARE_SIZE; i++) {
        if (i >= 9) {
            this->coords[i] = coords2[i - 9];
        } else {
            this->coords[i] = coords1[i];
        }
    }
}

void Square::setColors(GLfloat r, GLfloat g, GLfloat b) {
    GLfloat colors[] = {r, g, b};

    this->triangles[0].setColors(colors);
    this->triangles[1].setColors(colors);
    for (int i = 0; i < SQUARE_SIZE; i++) {
        this->colors[i] = colors[i % 3];
    }
}

void Square::setCoords(GLfloat coords[SQUARE_SIZE]) {
    for (int i = 0; i < SQUARE_SIZE; i++) {
        this->coords[i] = coords[i];
    }
}

void Square::setColors(GLfloat colors[SQUARE_SIZE]) {
    GLfloat coords1[9], coords2[9];

    for (int i = 0; i < SQUARE_SIZE; i++) {
        if (i >= 9) {
            coords2[i - 9] = colors[i];
        } else {
            coords1[i] = colors[i];
        }
        this->colors[i] = colors[i];
    }
    this->triangles[0].setColors(coords1);
    this->triangles[1].setColors(coords2);
}