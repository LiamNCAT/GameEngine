#include <OgreInput.h>

using namespace OgreBites;
using namespace Ogre;

class GameInputListener: public InputListener{
public:
	virtual void frameRendered (const FrameEvent &evt);
	virtual bool keyPressed (const KeyboardEvent &evt);
	virtual bool keyReleased (const KeyboardEvent &evt);
	virtual bool mouseMoved (const MouseMotionEvent &evt);
	virtual bool mousePressed (const MouseButtonEvent &evt);
	virtual bool mouseReleased (const MouseButtonEvent &evt);
	virtual bool mouseWheelRolled (const MouseWheelEvent &evt);
}