class DisplayManager{
private:
	RenderWindow* ogreWindow;
public:
	void init(int, int, string);
	void update();
	void close();
}