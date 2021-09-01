#include "main.hpp"

int main(void) {
    Window win;
	win.setWinColor(0.0f, 0.0f, 0.4f, 0.0f);
    win.create();
	GLuint programID = LoadShaders( "src/main/Shaders/SimpleTransform.vertexshader", "src/main/Shaders/SingleColor.fragmentshader" );
    Camera cam(&win, &programID);
	GLfloat g_vertex_buffer_data[] = { 
		-1.0f, -1.0f, 0.0f,
		 1.0f, -1.0f, 0.0f,
		 0.0f,  1.0f, 0.0f,
	};
    Triangle t(g_vertex_buffer_data);

    while (win.update()) {
		glClear(GL_COLOR_BUFFER_BIT);
		glUseProgram(programID);
		cam.move(0, 0, -0.1);
		cam.update();
		t.display();
		glfwSwapBuffers(win.getWindow());
    }
	glDeleteProgram(programID);
	return (0);
}

