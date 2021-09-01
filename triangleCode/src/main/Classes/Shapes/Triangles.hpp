#ifndef __TRIANGLES_HPP__
#define __TRIANGLES_HPP__

#include <vector>

#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>

#include "Triangle.hpp"

class Triangles {

private:
    std::vector<Triangle> triangles;
    // std::vector<GLfloat> coords;
    GLuint vertexBuffer;
    GLuint VertexArrayID;
    GLfloat *coords;

public:
    Triangles(void);
    void create(void);
    void draw(void);

};

#endif