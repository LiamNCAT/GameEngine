#include <OgreRoot.h>
#include <OgreWindowEventUtilities.h>
#include <string>
using namespace Ogre;

class DisplayManager{
private:
	Root* mRoot = nullptr;
	RenderWindow* mWindow = nullptr;
public:
	SceneManager* init(int, int, string);
	void update();
	void close();
}