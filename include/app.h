#include "OgreApplicationContext.h"
#include "audio.h"
#include "render.h"
#include "display.h"

using namespace Ogre;

class GameApp: public ApplicationContext{
public:
	void setup();
	GameApp();
	virtual ~GameApp();
	
private:
	DisplayManager* dMan = nullptr;
	RenderManager* rMan = nullptr;
	AudioManager* aMan = nullptr;

}