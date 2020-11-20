#include <OISEvents.h>
#include <OISInputManager.h>
#include <OISKeyboard.h>
#include <OISMouse.h>

using namespace OIS;

class EventManager{
private:
	InputManager* g_InputManager = nullptr; //Our Input System
	#ifdef WIN32
	Keyboard* g_kb = nullptr;			   //Keyboard Device
	Mouse* g_m = nullptr;			   //Mouse Device
	#else
	JoyStick* g_joys[4] = { nullptr, nullptr, nullptr, nullptr }; //This demo supports up to 4 controllers
	#endif
public:
	
}