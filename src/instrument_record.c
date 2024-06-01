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

#include "instrument_record.h"

static void logic(void);
static void draw(void);
static int reveal = 0;



void record_selection(void)
{
	instrument_background();
	app.delegate.logic = logic;
	app.delegate.draw = draw;
	app.delegate.record = record();
	
	memset(app.keyboard, 0, sizeof(int) * MAX_KEYBOARD_KEYS);
}

static void logic(void)
{
	
	if (reveal < SCREEN_HEIGHT)
	{
		reveal++;
	}
	
	if (mytime>60 && mytime<70)
	{
		
		instrument_number = 1;
        play_keyboard_record();
        i = 4;
	}
    if (mytime>80 && mytime<90)
	{
		instrument_number = 2;
		play_keyboard_record();//go to lowpiano
        i = 5;
	}

    
    if (mytime>20 && mytime<30)
	{
		play_keyboard2_record();//go to string		
		instrument_number = 3;
        i = 2;
	}	
    
    if (mytime>40 && mytime<50)
	{
		play_keyboard2_record();//go to string		
		instrument_number = 3;
        i = 3;
	}	

    if (mytime < 10.0)
	{
		play_drum_record();//go to drum	
		instrument_number = 4;
        i = 1;
		printf("%f\n",Song[1][u].timing);
	}	



    if (mytime>100 && mytime<110)
	{
		play_keyboard2_record();//go to electronic	
		instrument_number = 6;
        i = 6;
	}	

	if (app.keyboard[SDL_SCANCODE_KP_ENTER])
	{
		end_stage();
	}	
	
}

static void draw(void)
{
	drawinstrument();
	//drawText(SCREEN_WIDTH / 2, 10, 255, 255, 255, TEXT_CENTER, "PRESS SPACE TO PAUSE RECORD!");
	//drawText(SCREEN_WIDTH / 2, 650, 255, 255, 255, TEXT_CENTER, "PRESS ENTER TO SELECT MODE!");
}