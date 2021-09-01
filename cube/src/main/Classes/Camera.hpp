#ifndef __CAMERA_HPP__
#define __CAMERA_HPP__

#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>

#include "Window.hpp"

class Camera {

private:
    GLuint matrixID;
    glm::mat4 projection;
    glm::mat4 camView;
    glm::mat4 matrixMovement;
    glm::vec3 camPosition;
    float FOVDegrees;
    float winRatio;

public:
    Camera(Window *win, GLuint *shaderId);
    void update(void);
    void move(float x, float y, float z);
    void rotate(float degrees);
    void setFOV(float FOVdegrees);
    void setPos(float x, float y, float z);

};

#endif