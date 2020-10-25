typedef enum
{
	ev_keydown,
	ev_keyup,
	ev_mouse,
	ev_joystick,
	ev_none
} event_type;

typedef struct{
	event_type type;
	int		data1;		// keys / mouse/joystick buttons
    int		data2;		// mouse/joystick x move
    int		data3;		// mouse/joystick y move
} event;

int init_callbacks(GLFWwindow*);

void key_callback(GLFWwindow*, int, int, int, int);

//void joy_callback(GLFWwindow*, );

void joystick_callback(int, int);

void cur_pos_callback(GLFWwindow*, double, double);

void mouse_callback(GLFWwindow*, int, int, int);