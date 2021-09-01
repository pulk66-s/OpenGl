#ifndef __COLORS_HPP__
#define __COLORS_HPP__

#include <map>
#include <vector>
#include <string>
#include <stdlib.h>
#include <iostream>

#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>

class Colors {

private:
    std::map<std::string, GLfloat *> colorsValue;
    GLfloat *convertColors(float r, float g, float b);

public:
    Colors(void);
    GLfloat *getColor(std::string colorName);
    void setColor(std::string name, float r, float g, float b);

};

#endif