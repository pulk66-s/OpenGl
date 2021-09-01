#include "Camera.hpp"

/*
** CONSTRUCTOR / DESTRUCTOR
*/

Camera::Camera(Window *win, GLuint *shaderId) {
    this->matrixID = glGetUniformLocation(*shaderId, "MVP");
    this->winRatio = win->getWinRatio();
    this->camPosition = glm::vec3(0, 0, -1);
    this->FOVDegrees = 45;
	this->camView = glm::lookAt(this->camPosition, glm::vec3(0, 0, 0), glm::vec3(0, 0, 0));
    this->projection = glm::perspective(glm::radians(this->FOVDegrees), 4.0f / 3.0f , 0.1f, 100.0f);
    this->matrixMovement = this->projection * this->camView * glm::mat4(1);
}

/*
** UTILS
*/

void Camera::setFOV(float FOVDegrees) {
    this->FOVDegrees = FOVDegrees;
}

void Camera::update(void) {
	this->camView = glm::lookAt(this->camPosition, glm::vec3(0, 0, 0), glm::vec3(0, 1, 0));
    this->projection = glm::perspective(glm::radians(this->FOVDegrees), 4.0f / 3.0f , 0.1f, 100.0f);
    this->matrixMovement = this->projection * this->camView * glm::mat4(1);
    glUniformMatrix4fv(this->matrixID, 1, GL_FALSE, &this->matrixMovement[0][0]);
}

void Camera::move(float x, float y, float z) {
    glm::vec3 camPos = this->camPosition;

    this->camPosition = glm::vec3(camPos[0] + x, camPos[1] + y, camPos[2] + z);
}

/*
** GETTER / SETTER
*/

void Camera::setPos(float x, float y, float z) {
    this->camPosition = glm::vec3(x, y, z); 
}