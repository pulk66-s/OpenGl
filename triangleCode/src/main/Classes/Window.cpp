#include "Window.hpp"

/*
** CONSTRUCTOR / DESTRUCTOR
*/

Window::Window(void) {
    for (int i = 0; i < 4; i++) {
        this->winColors[i] = 0;
    }
	if (!glfwInit()) {
        std::cout << "Failed to initialize GLFW\n";
        return;
	}
    glfwWindowHint(GLFW_SAMPLES, 4);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE); // To make MacOS happy; should not be needed
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
}

Window::~Window(void) {
    glfwTerminate();
}

/*
** PRIVATE UTILS
*/

bool Window::initWindow(void) {
    this->window = glfwCreateWindow(this->winW, this->winH, this->winTitle, NULL, NULL);
    if (window == NULL) {
        std::cout << "Failed to open GLFW Window\n";
        return (false);
    }
    glfwMakeContextCurrent(window);
	glewExperimental = true; // Needed for core profile
   	if (glewInit() != GLEW_OK) {
		std::cout << "Failed to initialize GLEW\n";
		return (false);
	}
	glClearColor(this->winColors[0], this->winColors[1], this->winColors[2], this->winColors[3]);
	glfwSetInputMode(this->window, GLFW_STICKY_KEYS, GL_TRUE);
    return (true);
}

/*
** UTILS
*/

bool Window::create(void) {
    this->winW = 1024;
    this->winH = 768;
    this->winTitle = "Default title";
    return (this->initWindow());
}

bool Window::create(int w, int h) {
    this->winW = w;
    this->winH = h;
    this->winTitle = "Default title";
    return (this->initWindow());
}

bool Window::create(int w, int h, const char *title) {
    this->winW = w;
    this->winH = h;
    this->winTitle = title;
    return (this->initWindow());
}

bool Window::create(int w, int h, const char *title, GLclampf winColors[4]) {
    this->winW = w;
    this->winH = h;
    this->winTitle = title;
    for (int i = 0; i < 4; i++) {
        this->winColors[i] = winColors[i];
    }
    return (this->initWindow());
}

bool Window::update(void) {
    glfwPollEvents();
    if (glfwGetKey(this->window, GLFW_KEY_ESCAPE) || glfwWindowShouldClose(this->window)) {
        return (false);
    }
    return (true);
}

/*
** GETTER / SETTER
*/

void Window::setWinColor(GLclampf r, GLclampf g, GLclampf b, GLclampf a) {
    this->winColors[0] = r;
    this->winColors[1] = g;
    this->winColors[2] = b;
    this->winColors[3] = a;
}

GLFWwindow *Window::getWindow(void) {
    return (this->window);
}