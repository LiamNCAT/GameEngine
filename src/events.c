#include <events.h>
#include <GLFW/glfw3.h>

int init_callbacks(GLFWwindow* window){
	#ifdef __WIN32
		glfwSetKeyCallback(window, key_callback);
		glfwSetCursorPosCallback(window, cur_pos_callback);
	#endif
	
}

void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods){
	
}

void cur_pos_callback(GLFWwindow* window, double posx, double posy){
	
}

