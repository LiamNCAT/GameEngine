#include <OgreEntity.h>
#include <OgreCamera.h>
#include <OgreViewport.h>
#include <render.h>

#define TERRAIN_FILE_PREFIX 
#define TERRAIN_FILE_SUFFIX
#define TERRAIN_SIZE
#define TERRAIN_WORLD_SIZE

using namespace Ogre;

RenderManager::RenderManager(SceneManager* sm){
	mSceneMgr = sm;
	mTerrainGlobals = new TerrainGlobalOptions();
	mTerrainGroup = new TerrainGroup(mSceneMgr, Terrain::ALIGN_X_Z, TERRAIN_SIZE, TERRAIN_WORLD_SIZE);
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
	camNode->setPosition(x,y,z);
}

void RenderManager::defineTerrain(int x, int y){
	string filename = mTerrainGroup->generateFilename(x,y);
	 if (ResourceGroupManager::getSingleton().resourceExists(mTerrainGroup->getResourceGroup(), filename))
	{
		mTerrainGroup->defineTerrain(x, y);
	}
	else
	{
		Image img;
		getTerrainImage(x % 2 != 0, y % 2 != 0, img);
		mTerrainGroup->defineTerrain(x, y, &img);
		mTerrainsImported = true;
	}	
}

void RenderManager::getTerrainImage(int x, int y, Image img){
	img.load("terrain.png", mTerrainGroup->getResourceGroup());
	if (flipX)
		img.flipAroundY();
	if (flipY)
		img.flipAroundX();
}