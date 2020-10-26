#include <AL/al.h>
#include <AL/alc.h>

class AudioManager{
private:
	unsigned int buffer;
	unsigned int source;
	
public:
	AudioManager();
	~AudioManager();
	void load(string);
	void play();
	void stop();
}
