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

#include "keyboard2_record.h"

static void logic(void);
static void draw(void);
static int reveal = 0;

void play_keyboard2_record(void)
{
	keyboard2_background();
	app.delegate.logic = logic;
	app.delegate.draw = draw;
	app.delegate.record = record();
}

static void logic(void)
{
	
    if (instrument_number == 3)
       {
           string_sound();
       }


    if (instrument_number == 6)
       {
           electronic_sound();
       }   
    
    if(mytime>=(20.0*i-10.0)){
		record_selection();
	}


}

static void draw(void)
{
	
	drawkeyboard2();
	
    //drawText(SCREEN_WIDTH / 2, 600, 255, 255, 255, TEXT_CENTER, "PRESS SPACE TO SELECT INSTRUMENT!");

    //drawText(SCREEN_WIDTH / 2, 10, 255, 255, 255, TEXT_CENTER, "PRESS ENTER TO PAUSE RECORD!");
}