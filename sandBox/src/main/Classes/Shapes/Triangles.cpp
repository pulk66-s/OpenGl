#include "Triangles.hpp"

Triangles::Triangles(void) {
    glGenVertexArrays(1, &this->VAO);
    glBindVertexArray(this->VAO);
}

Triangles::~Triangles(void) {
    glDeleteBuffers(1, &this->VAO);
	glDeleteBuffers(1, &this->colorsBuffer);
	glDeleteVertexArrays(1, &this->vertexBuffer);
}

Triangle Triangles::create(GLfloat coords[]) {
    Triangle created(coords);
    GLfloat defaultColors[] = {
        1, 1, 1,
        1, 1, 1,
        1, 1, 1
    };

    created.setIndex(this->triangles.size());
    for (int i = 0; i < 9; i++) {
        this->allCoords.push_back(coords[i]);
        this->allColors.push_back(defaultColors[i]);
    }
    this->triangles.push_back(created);
    this->updateBuffer();
    return (created);
}

Triangle Triangles::create(GLfloat coords[], GLfloat colors[]) {
    Triangle created(coords, colors);

    created.setIndex(this->triangles.size());
    for (int i = 0; i < TRIANGLE_SIZE; i++) {
        this->allColors.push_back(colors[i]);
        this->allCoords.push_back(coords[i]);
    }
    this->triangles.push_back(created);
    this->updateBuffer();
    return (created);
}

Triangle Triangles::create(void) {
    GLfloat coords[] = {
        1, 1, 0,
        -1, 1, 0,
        -1, -1, 0
    },
    colors[] = {
        1, 0, 0,
        1, 0, 0,
        1, 0, 0
    };
    Triangle created(coords, colors);

    created.setIndex(this->triangles.size());
    for (int i = 0; i < TRIANGLE_SIZE; i++) {
        this->allColors.push_back(colors[i]);
        this->allCoords.push_back(coords[i]);
    }
    this->triangles.push_back(created);
    this->updateBuffer();
    return (created);
}

void Triangles::draw(void) {
    glEnableVertexAttribArray(0);
    glBindBuffer(GL_ARRAY_BUFFER, this->vertexBuffer);
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 0,(void*)0);

	glEnableVertexAttribArray(1);
    glBindBuffer(GL_ARRAY_BUFFER, this->colorsBuffer);
    glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 0, (void*)0);

    glDrawArrays(GL_TRIANGLES, 0, this->allCoords.size() / 3);
    glDisableVertexAttribArray(0);
    glDisableVertexAttribArray(1);
}

void Triangles::updateBuffer(void) {
    int nbCoords = this->allCoords.size();
    GLfloat coords[nbCoords], colors[nbCoords];

    for (int i = 0; i < nbCoords; i++) {
        coords[i] = this->allCoords[i];
        colors[i] = this->allColors[i];
    }
    glGenBuffers(1, &this->vertexBuffer);
    glBindBuffer(GL_ARRAY_BUFFER, this->vertexBuffer);
    glBufferData(GL_ARRAY_BUFFER, sizeof(coords), coords, GL_STATIC_DRAW);

	glGenBuffers(1, &this->colorsBuffer);
	glBindBuffer(GL_ARRAY_BUFFER, this->colorsBuffer);
	glBufferData(GL_ARRAY_BUFFER, sizeof(colors), colors, GL_STATIC_DRAW);
}

void Triangles::update(Triangle t) {
    int realIndex = -1, tIndex = t.getIndex();
    GLfloat *colors = t.getColors(), *coords = t.getCoords();

    for (Triangle triangle : this->triangles) {
        if (tIndex == triangle.getIndex()) {
            realIndex = triangle.getIndex();
            break;
        }
    }
    this->triangles[realIndex] = t;
    for (int i = 0; i < 9; i++) {
        this->allColors[realIndex * 9 + i] = colors[i];
        this->allCoords[realIndex * 9 + i] = coords[i];
    }
    this->updateBuffer();
}

Triangle Triangles::getTriangle(int index) {
    for (Triangle t : this->triangles) {
        if (t.getIndex() == index) {
            return (t);
        }
    }
    return (NULL);
}