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

extern void cleanup(void);
extern void initSDL(void);
extern void initSounds(void);
extern void initFonts(void);

extern void initBackground(void);
extern void initTitle(void);
extern void select_Background(void);
extern void select_instrument(void);

extern SDL_Texture *loadTexture(char *filename);
extern void prepareScene(void);
extern void presentScene(void);
extern void blit(SDL_Texture *texture, int x, int y);
extern void doInput(void);

extern void lowpiano_sound(void);
extern void highpiano_sound(void);
extern void string_sound(void);
extern void drum_sound(void);


App app;
Entity piano;