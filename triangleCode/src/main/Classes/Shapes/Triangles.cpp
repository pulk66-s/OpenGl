#include "Triangles.hpp"

Triangles::Triangles(void) {
	glGenVertexArrays(1, &this->VertexArrayID);
	glBindVertexArray(this->VertexArrayID);
}

#include <iostream>
void Triangles::create(void) {
    Triangle created;

    this->triangles.push_back(created);
    this->coords = created.getCoords();
    glGenBuffers(1, &this->vertexBuffer);
	glBindBuffer(GL_ARRAY_BUFFER, this->vertexBuffer);
    for (int i = 0; i < 9; i++) {
        std::cout << this->coords[i] << " ";
    }
    std::cout << "\n";
	glBufferData(GL_ARRAY_BUFFER, sizeof(this->coords), this->coords, GL_STATIC_DRAW);
}

void Triangles::draw(void) {
    glEnableVertexAttribArray(0);

    glBindBuffer(GL_ARRAY_BUFFER, this->vertexBuffer);
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 0, (void*)0);
    glDrawArrays(GL_TRIANGLES, 0, 3);

	glDisableVertexAttribArray(0);
}