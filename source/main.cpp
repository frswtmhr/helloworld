#include <GL/glew.h>
#include <GLFW/glfw3.h>

int main(){
	glfwInit();
	GLFWwindow *window;
	window = glfwCreateWindow(800, 600, "Hello World!", NULL, NULL);
	glfwMakeContextCurrent(window);
	glewExperimental = true;
	glewInit();
	
	while(glfwWindowShouldClose(window) == 0){
		glfwSwapBuffers(window);
		glfwPollEvents();
	}
}
