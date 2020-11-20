class RenderingManager{
private:
	SceneManager* mSceneMgr;
	Camera* mCamera;
	Light* light;
	SceneNode* lightNode;
public:
	RenderingManager(SceneManager*);
	void init();
	void update_camera(int, int, int);

}