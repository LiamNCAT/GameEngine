#include <AL/al.h>
#include <AL/alc.h>

class AudioManager{
private:
	unsigned int buffer;
	unsigned int source;
	ALCdevice *device = nullptr;
	ALCcontext *ctx = nullptr;
	
public:
	AudioManager();
	~AudioManager();
	void load(string);
	void play();
	void stop();
}
