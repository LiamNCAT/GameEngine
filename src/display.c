#include <display.h>
#include <stdio.h>
#include <GLFW/glfw3.h>

GLFWwindow* window;

int start_display(int height, int width, const char* title){
	if (!glfwInit()){
		printf();
		return -1;
	}
	
	window = glfwCreateWindow(height, width, title, glfwGetPrimaryMonitor(), NULL);
	
	if (!window)
    {
        glfwTerminate();
		printf();
        return -1;
    }
	
	return 1;
}