#ifndef __BM_THREAD__
#define __BM_THREAD__
#include "common.h"
#include "SDL2/SDL_mixer.h"
typedef struct {
    
    int scale ;
    float timing;
} information;

information Song[7][40];//={{0,0.0}};
extern int i,u;

extern void highpiano_sound(void);
extern void lowpiano_sound(void);
extern void string_sound(void);
extern void drum_sound(void);
extern void bass_sound(void);

extern void instrument_selection(void);
extern int instrument_number;
extern void record_selection(void);

extern void *playsound(int, int);

extern App app;
#endif