#include "Squares.hpp"

Squares::Squares(void) {
    glGenVertexArrays(1, &this->VAO);
    glBindVertexArray(this->VAO);
}

Square Squares::create(void) {
    Square created = Square();
    GLfloat *coords = created.getCoords(), *colors = created.getColors();

    created.setIndex(this->squares.size());
    this->squares.push_back(created);
    for (int i = 0; i < SQUARE_SIZE; i++) {
        this->allColors.push_back(colors[i]);
        this->allCoords.push_back(coords[i]);
    }
    this->updateBuffer();
    return (created);
}

void Squares::updateBuffer(void) {
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

void Squares::draw(void) {
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

Squares::~Squares(void) {
    glDeleteBuffers(1, &this->VAO);
	glDeleteBuffers(1, &this->colorsBuffer);
	glDeleteVertexArrays(1, &this->vertexBuffer);
}