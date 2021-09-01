#include "main.hpp"

int main( void )
{
    Window win;
    win.create();
	GLuint programID = LoadShaders( "src/main/Shaders/TransformVertexShader.vertexshader", "src/main/Shaders/ColorFragmentShader.fragmentshader" );
    Camera cam(&win, &programID);

    cam.setPos(4, 3, -3);
    cam.setFOV(45);
    Cube c;
    while (win.update()) {
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		glUseProgram(programID);
        cam.update();
        c.display();
		glfwSwapBuffers(win.getWindow());
    }
	glDeleteProgram(programID);
	return (0);
}

