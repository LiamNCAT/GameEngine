#include <OISEvents.h>
#include <OISInputManager.h>
#include <OISKeyboard.h>
#include <OISMouse.h>

using namespace OIS;

typedef enum
{
	ev_keydown,
	ev_keyup,
	ev_mouse,
	ev_joystick,
	ev_none
} event_type;

struct event{
	event_type type;
	int		data1;		// keys / mouse/joystick buttons
    int		data2;		// mouse/joystick x move
    int		data3;		// mouse/joystick y move
};

class EventManager{
private:
	InputManager* mInputMgr;
	Keyboard* mKeyboard;
	Mouse* mMouse;
public:
	
}