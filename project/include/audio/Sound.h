#ifndef LIME_AUDIO_SOUND_H
#define LIME_AUDIO_SOUND_H


#include <hx/CFFI.h>
#include <utils/ByteArray.h>

#ifdef ANDROID
#include <android/log.h>
#endif


#ifdef ANDROID
#define LOG_SOUND(args,...) ELOG(args, ##__VA_ARGS__)
#else
#ifdef IPHONE
//#define LOG_SOUND(args,...) printf(args, ##__VA_ARGS__)
#define LOG_SOUND(args...) { }
#elif defined(TIZEN)
#include <FBase.h>
#define LOG_SOUND(args,...) AppLog(args, ##__VA_ARGS__)
#else
#define LOG_SOUND(args,...) printf(args, ##__VA_ARGS__)
#endif
#endif
//#define LOG_SOUND(args...)  { }


namespace lime {
	
	
	class Sound {
		
		
		public:
			
			Sound ();
			~Sound ();
			
			value Value ();
			
			int bitsPerSample;
			int channels;
			int sampleRate;
			ByteArray *data;
			
		private:
			
			value mValue;
		
		
	};
	
	
}


#endif