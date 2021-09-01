#include "main.hpp"

int main(void) {
	Window win;
	GLclampf colors[4];

	for (int i = 0; i < 4; i++) {
		colors[i] = 255;
	}
	win.create(2048, 1024, "This is a testing window", colors);
	while (win.update()) {
		std::cout << "update\n";
	}
	std::cout << "end\n";
	return (0);
}