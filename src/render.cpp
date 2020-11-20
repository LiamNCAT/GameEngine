#include <OgreEntity.h>
#include <OgreCamera.h>
#include <OgreViewport.h>
#include <render.h>

RenderManager::RenderManager(SceneManager* sm){
	mSceneMgr = sm;
}

void RenderManager::init(){
	light = mSceneMgr->createLight("MainLight");
	lightNode = mSceneMgr->getRootSceneNode()->createChildSceneNode();
	
	lightNode->attachObject(light);
	
	camNode = mSceneMgr->getRootSceneNode()->createChildSceneNode();
	
	mCamera = mSceneMgr->createCamera("cam");
	mCamera->setNearClipDistance(5); // specific to this sample
    mCamera->setAutoAspectRatio(true);
	
    camNode->attachObject(mCamera);
    camNode->setPosition(0, 0, 140);	
}

void RenderManager::updateCamera(int x, int y, int z){
	
}