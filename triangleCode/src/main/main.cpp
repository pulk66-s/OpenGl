#include "main.hpp"

int main(void) {
    Window win;
    GLuint shaderID;
    
    win.setWinColor(0, 0, 0.5, 0);
    win.create();
    shaderID = LoadShaders("src/main/Shaders/SimpleVertexShader.vertexshader", "src/main/Shaders/SimpleFragmentShader.fragmentshader");
    Triangles t;
    t.create();
    do {
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
        glUseProgram(shaderID);
        t.draw();
        glfwSwapBuffers(win.getWindow());
    } while (win.update());
    std::cout << "End\n";
    return (0);
}