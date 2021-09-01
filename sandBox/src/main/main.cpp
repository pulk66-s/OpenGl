#include "main.hpp"

int main(void) {
    Window win;
    win.setWinColor(0, 0, 0.4, 0);
    if (!win.create()) {
        return (1);
    }
    GLuint shaderId = LoadShaders("src/main/Shaders/SimpleTransform.vertexshader", "src/main/Shaders/SingleColor.fragmentshader");
    Camera cam(&win, &shaderId);
    cam.setPos(0, 0, 3);

    Squares sq;
    GLfloat coords[] = {
        -1, 1, 0,
        -1, -1, 0,
        1, 1, 0,
        1, 1, 0,
        -1, -1, 0,
        1, -1, 0
    };
    GLfloat colors[] = {
        0, 1, 1,
        0, 1, 1,
        0, 1, 1,
        0, 1, 1,
        0, 1, 1,
        0, 1, 1,
    };

    Square s = sq.create(coords, colors);
    do {
		glClear(GL_COLOR_BUFFER_BIT);
		glUseProgram(shaderId);
        cam.update();
        sq.draw();
		glfwSwapBuffers(win.getWindow());
    } while (win.update());

    glDeleteProgram(shaderId);
    return (0);
}