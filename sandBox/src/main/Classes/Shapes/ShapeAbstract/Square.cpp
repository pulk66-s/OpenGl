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
            this->coords[i] = coord2[i];
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
            coords2[i - 9] = colors[i];
            colors2[i - 9] = colors[i];
        } else {
            coords1[i] = colors[i];
            colors1[i] = colors[i];
        }
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
