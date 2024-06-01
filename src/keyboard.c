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

#include "keyboard.h"

static void logic(void);
static void draw(void);
static int reveal = 0;

void play_keyboard(void)
{
	keyboard_background();
	app.delegate.logic = logic;
	app.delegate.draw = draw;
	
}

static void logic(void)
{
	
	
   	if (instrument_number == 1)
       {
           //printf("%d\n", instrument_number);
           highpiano_sound();
       }

    if (instrument_number == 2)
       {
           lowpiano_sound();
       }
    
    


	if (app.keyboard[SDL_SCANCODE_BACKSPACE])
	{
		instrument_selection();//go back to instrument selection
	}

    if (app.keyboard[SDL_SCANCODE_SPACE])
	{
		end_stage();//pause RECORD
	}

}

static void draw(void)
{
	
	drawkeyboard();
	
    //drawText(SCREEN_WIDTH / 2, 600, 255, 255, 255, TEXT_CENTER, "PRESS SPACE TO SELECT INSTRUMENT!");

    //drawText(SCREEN_WIDTH / 2, 10, 255, 255, 255, TEXT_CENTER, "PRESS ENTER TO PAUSE RECORD!");
}