#include "Colors.hpp"

GLfloat *Colors::convertColors(float r, float g, float b) {
    GLfloat *color = new GLfloat[9];
    GLfloat defaultColor[] = {r, g, b};

    for (int i = 0; i < 9; i++) {
        color[i] = defaultColor[i % 3];
    }
    return (color);
}

Colors::Colors() {
    this->colorsValue = {
        {"red", this->convertColors(1, 0, 0)},
        {"green", this->convertColors(0, 1, 0)},
        {"blue", this->convertColors(0, 0, 1)},
        {"white", this->convertColors(1, 1, 1)},
        {"black", this->convertColors(0, 0, 0)},
        {"yellow", this->convertColors(1, 1, 0)},
        {"pink", this->convertColors(1, 0, 1)},
        {"cyan", this->convertColors(0, 1, 1)},
    };
}

GLfloat *Colors::getColor(std::string colorName) {
    std::map<std::string, GLfloat *>::iterator it;

    for (it = this->colorsValue.begin(); it != this->colorsValue.end(); it++) {
        if (colorName == it->first) {
            return (it->second);
        }
    }
    return (this->colorsValue["white"]);
}

void Colors::setColor(std::string name, float r, float g, float b) {
    this->colorsValue.insert({name, this->convertColors(r, g, b)});
}