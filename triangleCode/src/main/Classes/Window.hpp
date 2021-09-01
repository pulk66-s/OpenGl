#ifndef __WINDOW_HPP__
#define __WINDOW_HPP__

#include <iostream>

#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>

class Window {

private:
    GLclampf winColors[4];
    int winW, winH;
    const char *winTitle;
    bool initWindow(void);
    GLFWwindow *window;

public:
    Window(void);
    ~Window(void);
    bool create(void);
    bool create(int w, int h);
    bool create(int w, int h, const char *title);
    bool create(int w, int h, const char *title, GLclampf windColors[4]);
    bool update(void);
    void setWinColor(GLclampf r, GLclampf g, GLclampf b, GLclampf a);
    GLFWwindow *getWindow(void);

};

#endif