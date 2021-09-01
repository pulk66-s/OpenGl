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
        glfwTerminate();
        return (false);
    }
    glfwMakeContextCurrent(window);
   	if (glewInit() != GLEW_OK) {
		fprintf(stderr, "Failed to initialize GLEW\n");
		getchar();
		glfwTerminate();
		return (false);
	}
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
	glfwSetInputMode(this->window, GLFW_STICKY_KEYS, GL_TRUE);
    glfwPollEvents();
    if (glfwGetKey(this->window, GLFW_KEY_ESCAPE) || glfwWindowShouldClose(window)) {
        return (false);
    }
    return (true);
}

void Window::display(void) {
}

/*
** GETTER / SETTER
*/