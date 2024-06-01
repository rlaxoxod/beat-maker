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

#include "main.h"

void *nothing(void){};

int main(int argc, char *argv[])
{
	// sleep(10);
	
	long then;
	float remainder;
	
	memset(&app, 0, sizeof(App));
	
	initSDL();
	
	atexit(cleanup);

	initSounds();
	initFonts();

	//initBackground();

	initTitle();

	//select_Background();

	//select_instrument();

	then = SDL_GetTicks();
	
	remainder = 0;



	

	
	while (1)
	{
		prepareScene();
		
		doInput();
		
		app.delegate.logic();
		app.delegate.draw();
		app.delegate.record = nothing(); /////void *nothing(void){};
		
		
		presentScene();
		
		SDL_Delay(16);
	}

	return 0;
}
