#include "display.h"


#include <OgreSceneManager.h>
#include <OgreRenderWindow.h>

SceneManager* DisplayManager::init(string title){
	mWindow = mRoot->initialise(true, title);
	
	TextureManager::getSingleton().setDefaultNumMipmaps(5);
	ResourceGroupManager::getSingleton().initialiseAllResourceGroups();
	
	return mRoot->createSceneManager(ST_GENERIC);
}

void DisplayManager::close(){
	
}

DisplayManager::DisplayManager(){
	mRoot = new Root();
}