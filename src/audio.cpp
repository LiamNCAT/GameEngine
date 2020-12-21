#include <audio.h>
#include <inttypes.h>
#include <limits.h>
#include "sndfile.h"

AudioManager::AudioManager(){
	device = alcOpenDevice(NULL);
	ctx = alcCreateContext(device, NULL);
	
}

void AudioManager::load(string filename){
	ALenum err, format;
    ALuint buffer;
	
    SNDFILE *sndfile;
    SF_INFO sfinfo;
	
	short *membuf;
    sf_count_t num_frames;
    ALsizei num_bytes;
	
	sndfile = sf_open(filename.__cstr, SFM_READ, &sfinfo);
	if(!sndfile){
		//log the error
	}
	if(sfinfo.frames < 1 || sfinfo.frames > (sf_count_t)(INT_MAX/sizeof(short))/sfinfo.channels){
		//log the error
	}
	
	format = AL_NONE;
    if(sfinfo.channels == 1)
        format = AL_FORMAT_MONO16;
    else if(sfinfo.channels == 2)
        format = AL_FORMAT_STEREO16;
    else if(sfinfo.channels == 3)
    {
        if(sf_command(sndfile, SFC_WAVEX_GET_AMBISONIC, NULL, 0) == SF_AMBISONIC_B_FORMAT)
            format = AL_FORMAT_BFORMAT2D_16;
    }
    else if(sfinfo.channels == 4)
    {
        if(sf_command(sndfile, SFC_WAVEX_GET_AMBISONIC, NULL, 0) == SF_AMBISONIC_B_FORMAT)
            format = AL_FORMAT_BFORMAT3D_16;
    }
	
	if(!format){
	//log the error	
	}
	
	membuf = malloc((size_t)(sfinfo.frames * sfinfo.channels) * sizeof(short));

    num_frames = sf_readf_short(sndfile, membuf, sfinfo.frames);
    if(num_frames < 1){
		
	}
	
	num_bytes = (ALsizei)(num_frames * sfinfo.channels) * (ALsizei)sizeof(short);

    /* Buffer the audio data into a new buffer object, then free the data and
     * close the file.
     */
    buffer = 0;
    alGenBuffers(1, &buffer);
    alBufferData(buffer, format, membuf, num_bytes, sfinfo.samplerate);

    free(membuf);
    sf_close(sndfile);

    /* Check if an error occured, and clean up if so. */
    err = alGetError();
}

void AudioManager::play(){
	
	
	
}

void AudioManager::stop(){
	
}

AudioManager::~AudioManager(){
	alcDestroyContext(ctx);
    alcCloseDevice(device);
}