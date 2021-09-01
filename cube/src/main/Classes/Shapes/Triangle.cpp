#include "Triangle.hpp"

/*
** PRIVATE UTILS
*/

void Triangle::initTriangle(void) {
 	glGenVertexArrays(1, &this->vertexArrayID);
	glBindVertexArray(this->vertexArrayID);
    glGenBuffers(1, &this->vertexbuffer);
	glBindBuffer(GL_ARRAY_BUFFER, this->vertexbuffer);
	glBufferData(GL_ARRAY_BUFFER, sizeof(this->vertexDatas), this->vertexDatas, GL_STATIC_DRAW);
}

/*
** CONSTRUCTOR / DESTRUCTOR
*/

Triangle::Triangle(void) {
    GLfloat values[] = {
        -1,-1, 0,
        1, -1, 0,
        -1, 1, 0
    };

    for (int i = 0; i < 9; i++) {
        this->vertexDatas[i] = values[i];
    }
    this->initTriangle();
}

Triangle::Triangle(GLfloat vertex[9]) {
    for (int i = 0; i < 9; i++) {
        this->vertexDatas[i] = vertex[i];
    }
    this->initTriangle();
}

Triangle::~Triangle(void) {
	glDeleteBuffers(1, &this->vertexbuffer);
	glDeleteVertexArrays(1, &this->vertexArrayID);
}

/*
** UTILS
*/

void Triangle::display(void) {
    glEnableVertexAttribArray(0);
    glBindBuffer(GL_ARRAY_BUFFER, this->vertexbuffer);
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 0, (void*)0);
    glDrawArrays(GL_TRIANGLES, 0, 3);
    glDisableVertexAttribArray(0);
}

/*
** GETTER / SETTER
*/

GLfloat *Triangle::getVertex(void) {
    return (this->vertexDatas);
}