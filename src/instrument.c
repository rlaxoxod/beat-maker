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

#include "instrument.h"

static void logic(void);
static void draw(void);
static int reveal = 0;

int instrument_number = 0;

void instrument_selection(void)
{
	instrument_background();
	app.delegate.logic = logic;
	app.delegate.draw = draw;
	
	memset(app.keyboard, 0, sizeof(int) * MAX_KEYBOARD_KEYS);
}

static void logic(void)
{
	
	if (reveal < SCREEN_HEIGHT)
	{
		reveal++;
	}
	
	if (app.keyboard[SDL_SCANCODE_1])
	{
		instrument_number = 1;
		//printf("it is %d", instrument_number);
		play_keyboard();//go to highpiano
		//instrument_number = 1;
	}

	if (app.keyboard[SDL_SCANCODE_2])
	{
		play_keyboard();//go to lowpiano
		instrument_number = 2;		
	}	
    
    if (app.keyboard[SDL_SCANCODE_3])
	{
		play_keyboard2();//go to string		
		instrument_number = 3;
	}	

    if (app.keyboard[SDL_SCANCODE_4])
	{
		play_drum();//go to drum
		instrument_number = 4;	
	}	



    if (app.keyboard[SDL_SCANCODE_5])
	{
		play_keyboard2();//go to electronic	
		instrument_number = 6;
	}	

    

	if (app.keyboard[SDL_SCANCODE_BACKSPACE])
	{
		mode_selection();
	}	
	
}

static void draw(void)
{
	drawinstrument();
	//drawText(SCREEN_WIDTH / 2, 10, 255, 255, 255, TEXT_CENTER, "PRESS SPACE TO PAUSE RECORD!");
	drawText(SCREEN_WIDTH / 2, 10, 255, 255, 255, TEXT_CENTER, "PRESS BACKSPACE TO SELECT MODE!");
}