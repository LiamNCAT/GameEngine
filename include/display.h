#include <OgreRoot.h>
#include <OgreWindowEventUtilities.h>
#include <string>
using namespace Ogre;

class DisplayManager:WindowEventListener, FrameListener{
private:
	Root* mRoot;
	RenderWindow* mWindow;
	SceneManager* mSceneMgr;
	Camera* mCamera;
public:
	void init(int, int, string);
	void update();
	void close();
}