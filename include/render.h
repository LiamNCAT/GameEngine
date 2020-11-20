class RenderingManager{
private:
	SceneManager* mSceneMgr = nullptr;
	Camera* mCamera = nullptr;
	Light* light = nullptr;
	SceneNode* lightNode = nullptr;
	SceneNode* camNode = nullptr;
	
public:
	RenderingManager(SceneManager*);
	void init();
	void updateCamera(int, int, int);

}