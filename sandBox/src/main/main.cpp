#include "main.hpp"

int main(void) {
    Window win;
    win.setWinColor(0, 0, 0.4, 0);
    if (!win.create()) {
        return (1);
    }
    GLuint shaderId = LoadShaders("src/main/Shaders/SimpleTransform.vertexshader", "src/main/Shaders/SingleColor.fragmentshader");
    Camera cam(&win, &shaderId);
    cam.setPos(3, 4, 6);

    Object o("Object/firstObject.txt");

    do {
		glClear(GL_COLOR_BUFFER_BIT);
		glUseProgram(shaderId);
        cam.update();
        o.draw();
		glfwSwapBuffers(win.getWindow());
    } while (win.update());

    glDeleteProgram(shaderId);
    return (0);
}