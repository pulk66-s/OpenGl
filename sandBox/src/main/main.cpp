#include "main.hpp"

int main(void) {
    Window win;
    win.setWinColor(0, 0, 0.4, 0);
    if (!win.create()) {
        return (1);
    }
    GLuint shaderId = LoadShaders("src/main/Shaders/SimpleTransform.vertexshader", "src/main/Shaders/SingleColor.fragmentshader");
    Camera cam(&win, &shaderId);
    cam.setPos(3, 0, 3);

    Cubes c;

    Cube c1 = c.create();
    GLfloat *coords = c1.getCoords(), *colors = c1.getColors();
    for (int i = 0; i < CUBE_SIZE; i++) {
        std::cout << coords[i] << " " << colors[i] << "\n";
    }
    do {
		glClear(GL_COLOR_BUFFER_BIT);
		glUseProgram(shaderId);
        cam.update();
        c.draw();
		glfwSwapBuffers(win.getWindow());
    } while (win.update());

    glDeleteProgram(shaderId);
    return (0);
}