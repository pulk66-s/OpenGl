#ifndef __OBJECT_HPP__
#define __OBJECT_HPP__

#include <string>
#include <vector>

#include "File.hpp"
#include "Colors.hpp"
#include "Shapes/Cubes.hpp"

class Object {

private:
    Cubes blocs;
    std::vector<std::string> lines;
    std::string name;
    File file;
    void initBlocs(void);

public:
    Object(std::string path);
    void draw(void);
    void move(float x, float y, float z);
    void setName(std::string name);
    std::vector<Cube> getBlocs(void);
    std::string getName(void);

};

#endif