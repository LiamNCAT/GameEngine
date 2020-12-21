#include "Ogre.h"

using namespace Ogre;

void GameApp::setup(){
	ApplicationContext::setup();
	
	
	dMan = new DisplayManager();
	SceneManager* sMan = dMan->init("HorrorGame");
	
	rMan = new RenderManager(sMan);
	rMan->init();
	
	
}

GameApp::GameApp():ApplicationContext("HorrorGame"){
}

int main(){
	
}