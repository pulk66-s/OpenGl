#ifndef __FILE_HPP__
#define __FILE_HPP__

#include <string>
#include <fstream>
#include <iostream>

class File {

private:
    std::string content;

public:
    File(void);
    File(std::string path);
    std::string getContent(void);

};

#endif