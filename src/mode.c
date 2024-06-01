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

#include "mode.h"

static void logic(void);
static void draw(void);
static int reveal = 0;
//static int timeout;


//static int stageResetTimer;

void mode_selection(void)
{
	mode_background();
	app.delegate.logic = logic;
	app.delegate.draw = draw;
	
	memset(app.keyboard, 0, sizeof(int) * MAX_KEYBOARD_KEYS);
	//stageResetTimer = FPS * 3;
}

static void logic(void)
{
	
	if (reveal < SCREEN_HEIGHT)
	{
		reveal++;
	}
	
	if (app.keyboard[SDL_SCANCODE_1])
	{
		instrument_selection();
	}

	if (app.keyboard[SDL_SCANCODE_2])
	{
		start_record();//go to record
		record_selection();//go to instrument_record
	}	
}

static void draw(void)
{
	drawmode();
	
}