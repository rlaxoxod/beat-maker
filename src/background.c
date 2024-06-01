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

#include "background.h"

//static int backgroundX = 0;
//static int selectionX;
//static Star stars[MAX_STARS];
static SDL_Texture *background;
static SDL_Texture *mode;
static SDL_Texture *instrument;
static SDL_Texture *drum;
static SDL_Texture *keyboard;
static SDL_Texture *keyboard2;
static SDL_Texture *end;

void initBackground(void)
{
	background = loadTexture("gfx/background.png");
	
	//backgroundX = 0;
    
}

void mode_background(void)
{
    mode = loadTexture("gfx/mode.png");
    //backgroundX = 0;
}

void instrument_background(void)
{
    instrument = loadTexture("gfx/instrument.png");
}

void keyboard_background(void)
{
    keyboard = loadTexture("gfx/keyboard.png");
}

void keyboard2_background(void)
{
    keyboard2 = loadTexture("gfx/keyboard_1ocatve.png");
}


void drum_background(void)
{
	drum = loadTexture("gfx/drum.png");
}

void end_background(void)
{
	end = loadTexture("gfx/end.png");
}


void drawBackground(void)
{
	SDL_Rect dest;
	int x;
	 
	dest.y = 0;
	dest.w = SCREEN_WIDTH;
	dest.h = SCREEN_HEIGHT;
		
	SDL_RenderCopy(app.renderer, background, NULL, &dest);

}


void drawmode(void)
{
	SDL_Rect dest;
	int x;
	
    dest.x = x;
	dest.y = 0;
	dest.w = SCREEN_WIDTH;
	dest.h = SCREEN_HEIGHT;
		
	SDL_RenderCopy(app.renderer, mode, NULL, &dest);

}

void drawinstrument(void)
{
	SDL_Rect dest;
	int x;
	
    dest.x = x;
	dest.y = 0;
	dest.w = SCREEN_WIDTH;
	dest.h = SCREEN_HEIGHT;
		
	SDL_RenderCopy(app.renderer, instrument, NULL, &dest);

}

void drawdrum(void)
{
	SDL_Rect dest;
	int x;
	
    dest.x = x;
	dest.y = 0;
	dest.w = SCREEN_WIDTH;
	dest.h = SCREEN_HEIGHT;
		
	SDL_RenderCopy(app.renderer, drum, NULL, &dest);

}

void drawkeyboard(void)
{
	SDL_Rect dest;
	int x;
	
    dest.x = x;
	dest.y = 0;
	dest.w = SCREEN_WIDTH;
	dest.h = SCREEN_HEIGHT;
		
	SDL_RenderCopy(app.renderer, keyboard, NULL, &dest);

}

void drawkeyboard2(void)
{
	SDL_Rect dest;
	int x;
	
    dest.x = x;
	dest.y = 0;
	dest.w = SCREEN_WIDTH;
	dest.h = SCREEN_HEIGHT;
		
	SDL_RenderCopy(app.renderer, keyboard2, NULL, &dest);

}

void drawend(void)
{
	SDL_Rect dest;
	int x;
	
    dest.x = x;
	dest.y = 0;
	dest.w = SCREEN_WIDTH;
	dest.h = SCREEN_HEIGHT;
		
	SDL_RenderCopy(app.renderer, end, NULL, &dest);

}