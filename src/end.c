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

#include "end.h"

static void logic(void);
static void draw(void);
static int reveal = 0;

void end_stage(void)
{
	end_background();
	app.delegate.logic = logic;
	app.delegate.draw = draw;
	
}

static void logic(void)
{
	
	
   	if (app.keyboard[SDL_SCANCODE_SPACE])
       {
          initTitle();
       }


    

}

static void draw(void)
{
	
	drawend();
	
    drawText(SCREEN_WIDTH / 2, 600, 255, 255, 255, TEXT_CENTER, "PRESS SPACE TO PLAY AGAIN!");

    //drawText(SCREEN_WIDTH / 2, 10, 255, 255, 255, TEXT_CENTER, "PRESS ENTER TO PAUSE RECORD!");
}