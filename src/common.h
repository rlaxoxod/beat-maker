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

#ifndef __BM_COMMON__
#define __BM_COMMON__
#include "stdlib.h"
#include "stdio.h"
#include "string.h"
#include "math.h"
#include "ctype.h"


#include "SDL2/SDL.h"

#include "defs.h"
#include "structs.h"
#include "pthread.h"
#include "thread.h"
#include "timetime.h"
#include "unistd.h"

extern float mytime;

extern void *time_function(void *data);
extern int instrument_number;
//extern void start_record(void);

// typedef struct {
//     void (*scale)(int, int); 
//     float timing;
// } information;

// information Song[6][40];//={{0,0.0}};

// extern int i,u;
#endif