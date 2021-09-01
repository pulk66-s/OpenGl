#include "Triangle.hpp"

/*
** PRIVATE UTILS
*/

void Triangle::initTriangle(void) {
 	glGenVertexArrays(1, &this->vertexArrayID);
	glBindVertexArray(this->vertexArrayID);
    //Triangle generation
    glGenBuffers(1, &this->vertexbuffer);
	glBindBuffer(GL_ARRAY_BUFFER, this->vertexbuffer);
	glBufferData(GL_ARRAY_BUFFER, sizeof(this->vertexDatas), this->vertexDatas, GL_STATIC_DRAW);
    this->layoutID = 0;
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
    GLfloat colors[] = {
        1, 0, 0,
        0, 1, 0,
        0, 0, 1
    };

    for (int i = 0; i < 9; i++) {
        this->vertexDatas[i] = values[i];
        this->colorDatas[i] = colors[i];
    }
    this->initTriangle();
}

Triangle::Triangle(GLfloat vertex[9]) {
    GLfloat colors[] = {
        1, 0, 0,
        0, 1, 0,
        0, 0, 1
    };

    for (int i = 0; i < 9; i++) {
        this->vertexDatas[i] = vertex[i];
        this->colorDatas[i] = colors[i];
    }
	glGenBuffers(1, &this->colorBuffer);
	glBindBuffer(GL_ARRAY_BUFFER, this->colorBuffer);
	glBufferData(GL_ARRAY_BUFFER, sizeof(this->colorDatas), this->colorDatas, GL_STATIC_DRAW);
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
    glVertexAttribPointer(this->layoutID, 3, GL_FLOAT, GL_FALSE, 0, (void*)0);
    glDrawArrays(GL_TRIANGLES, 0, 3);
	glDisableVertexAttribArray(0);
}

/*
** GETTER / SETTER
*/

void Triangle::setLayoutId(GLuint layoutID) {
    this->layoutID = layoutID;
}

GLfloat *Triangle::getCoords(void) {
    return (this->vertexDatas);
}