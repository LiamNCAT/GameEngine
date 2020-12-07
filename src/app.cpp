#include "Ogre.h"

using namespace Ogre;

void GameApp::setup(){
	ApplicationContext::setup();
	
	
	dMan = new DisplayManager();
	SceneManager* sMan = dMan->init(1600, 900, "");
	
	rMan = new RenderManager(sMan);
	rMan->init();
}

GameApp::GameApp():ApplicationContext(""){
}

int main(){
	
}