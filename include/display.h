#include <OgreRoot.h>
#include <OgreWindowEventUtilities.h>
#include <string>
using namespace Ogre;

class DisplayManager{
private:
	Root* mRoot;
	RenderWindow* mWindow;
	
public:
	SceneManager* init(int, int, string);
	void update();
	void close();
}