#include "Cubes.hpp"

Cubes::Cubes(void) {
    glGenVertexArrays(1, &this->VAO);
    glBindVertexArray(this->VAO);
}

Cubes::~Cubes(void) {
    glDeleteBuffers(1, &this->VAO);
	glDeleteBuffers(1, &this->colorsBuffer);
	glDeleteVertexArrays(1, &this->vertexBuffer);
}

Cube Cubes::create(void) {
    Cube created = Cube();
    GLfloat *cCoords = created.getCoords(), *cColors = created.getColors();

    created.setIndex(this->cubes.size());
    for (int i = 0; i < CUBE_SIZE; i++) {
        this->allColors.push_back(cColors[i]);
        this->allCoords.push_back(cCoords[i]);
    }
    this->cubes.push_back(created);
    this->updateBuffer();
    return (created);
}

void Cubes::updateBuffer(void) {
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

void Cubes::update(Cube cube) {
    int vectorIndex = -1;
    GLfloat *coords = cube.getCoords(), *colors = cube.getColors();

    for (Cube c : this->cubes) {
        vectorIndex++;
        if (c.getIndex() == cube.getIndex()) {
            break;
        }
    }
    for (int i = 0; i < CUBE_SIZE; i++) {
        this->allCoords[vectorIndex * CUBE_SIZE + i] = coords[i];
        this->allColors[vectorIndex * CUBE_SIZE + i] = colors[i];
    }
    this->updateBuffer();
}

void Cubes::draw(void) {
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