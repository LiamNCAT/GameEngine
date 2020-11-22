class RenderingManager{
private:
	SceneManager* mSceneMgr = nullptr;
	
	Camera* mCamera = nullptr;
	SceneNode* camNode = nullptr;
	
	Light* light = nullptr;
	SceneNode* lightNode = nullptr;
	
	TerrainGlobalOptions* mTerrainGlobals = nullptr;
	TerrainGroup* mTerrainGroup = nullptr;
	
	void defineTerain(int, int);
	void getTerrainImage(int, int, string);
	
public:
	RenderingManager(SceneManager*);
	void init();
	void updateCamera(bool, bool, int);
	void blendTerrainMaps();
}