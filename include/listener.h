#include <OgreInput.h>

using namespace OgreBites;

class GameInputListener: public InputListener{
public:
	virtual void frameRendered (const Ogre::FrameEvent &evt);
	virtual bool keyPressed (const KeyboardEvent &evt);
	virtual bool keyReleased (const KeyboardEvent &evt);
	virtual bool mouseMoved (const MouseMotionEvent &evt);
	virtual bool mousePressed (const MouseButtonEvent &evt);
	virtual bool mouseReleased (const MouseButtonEvent &evt);
	virtual bool mouseWheelRolled (const MouseWheelEvent &evt);

}