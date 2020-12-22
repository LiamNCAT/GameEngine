#include <AL/al.h>
#include <AL/alc.h>
#include <iostream>

using namespace std;

class AudioManager{
private:
	unsigned int buffer;
	unsigned int source;
	
	ALCdevice *device = nullptr;
	ALCcontext *ctx = nullptr;
	
	ofstream audLog;
	
public:
	AudioManager();
	~AudioManager();
	void load(string);
	void play();
	void stop();
}
