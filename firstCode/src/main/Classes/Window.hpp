#ifndef __WINDOW_HPP__
#define __WINDOW_HPP__

#include <iostream>
#include <GL/glew.h>
#include <GLFW/glfw3.h>

class Window {

private:
    GLclampf winColors[4];
    int winW, winH;
    const char *winTitle;
    bool initWindow(void);

public:
    GLFWwindow *window;
    Window(void);
    ~Window(void);
    bool create(void);
    bool create(int w, int h);
    bool create(int w, int h, const char *title);
    bool create(int w, int h, const char *title, GLclampf windColors[4]);
    bool update(void);
    void display(void);

};

#endif