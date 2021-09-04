#include "File.hpp"

File::File(std::string path) {
    std::ifstream file(path);
    std::string line;

    if (file.is_open()) {
        while (getline(file, line)) {
            this->content += line + "\n";
        }
        file.close();
    } else {
        std::cout << "file not opened\n";
    }
}

File::File(void) {
    
}

std::string File::getContent(void) {
    return (this->content);
}