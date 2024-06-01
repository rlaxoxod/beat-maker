/*
Copyright (C) 2015-2018 Parallel Realities

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.

*/

#include "common.h"

extern void blitRect(SDL_Texture *texture, SDL_Rect *src, int x, int y);


extern void keyboard2_background(void);
extern void drawkeyboard2(void);

extern void drawText(int x, int y, int r, int g, int b, int align, char *format, ...);

extern SDL_Texture *loadTexture(char *filename);
extern void play_drum(void);
extern int instrument_number;
extern void highpiano_sound(void);
extern void lowpiano_sound(void);

extern void string_sound(void);
extern void bass_sound(void);
extern void electronic_sound(void);
//extern void synthesizer_sound(void);

extern void instrument_selection(void);
extern void *record(void);
extern int i;
extern App app;
