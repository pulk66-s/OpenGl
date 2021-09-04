#include "Object.hpp"

void Object::initBlocs(void) {
    int i = -1;
    std::vector<std::string> blocsInfos;
    Colors colors;

    for (std::string l : this->lines) {
        i++;
        if (i != 0) {
            std::string delim = ", ";
            int pos = 0;

            while ((pos = l.find(delim)) != std::string::npos) {
                blocsInfos.push_back(l.substr(0, pos));
                l.erase(0, pos + delim.length());
            }
            blocsInfos.push_back(l.substr(0, pos));
        } else {
            this->setName(this->lines[0]);
        }
    }
    GLfloat coords[3];
    int index = 0;

    for (std::string info : blocsInfos) {
        if (index % 4 == 3) {
            Cube c = this->blocs.create();
            GLfloat *reqColor = colors.getColor(info);

            GLfloat genColors[CUBE_SIZE];
            for (int i = 0; i < CUBE_SIZE; i++) {
                genColors[i] = reqColor[i % 3];
            }
            c.move(coords[0], coords[1], coords[2]);
            c.setColors(genColors);
            this->blocs.update(c);
        } else {
            coords[index % 4] = std::stof(info);
        }
        index++;
    }
}

Object::Object(std::string path) {
    this->file = File(path);
    std::string content = this->file.getContent();
    std::string delim = "\n";
    int pos = 0;

    while ((pos = content.find(delim)) != std::string::npos) {
        this->lines.push_back(content.substr(0, pos));
        content.erase(0, pos + delim.length());
    }
    this->initBlocs();
}

void Object::setName(std::string name) {
    this->name = name;
}

std::string Object::getName(void) {
    return (this->name);
}

void Object::draw(void) {
    this->blocs.draw();
}