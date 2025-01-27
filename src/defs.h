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

#define MIN(a,b) (((a)<(b))?(a):(b))
#define MAX(a,b) (((a)>(b))?(a):(b))
#define STRNCPY(dest, src, n) strncpy(dest, src, n); dest[n - 1] = '\0'

#define SCREEN_WIDTH   1280
#define SCREEN_HEIGHT  720

#define MAX_SCORE_NAME_LENGTH  16
#define MAX_NAME_LENGTH        32
#define MAX_LINE_LENGTH        1024

#define FPS 60

#define MAX_KEYBOARD_KEYS 350




#define MAX_SND_CHANNELS 8



#define GLYPH_HEIGHT 28
#define GLYPH_WIDTH  18

#define L 0//100
#define L2 100

#define S 10.00


enum
{
	CH_ANY = -1,
	CH_PIANO
};

enum
{
	TEXT_LEFT,
	TEXT_CENTER,
	TEXT_RIGHT
};

enum
{
	SND_PIANO_3C,
	SND_PIANO_3C_SHARP,
	SND_PIANO_3D,
	SND_PIANO_3D_SHARP,
	SND_PIANO_3E,
	SND_PIANO_3F,
	SND_PIANO_3F_SHARP,
	SND_PIANO_3G,
	SND_PIANO_3G_SHARP,
	SND_PIANO_3A,
	SND_PIANO_3A_SHARP,
	SND_PIANO_3B,
	SND_PIANO_4C,
	SND_PIANO_4C_SHARP,
	SND_PIANO_4D,
	SND_PIANO_4D_SHARP,
	SND_PIANO_4E,
	SND_PIANO_4F,
	SND_PIANO_4F_SHARP,
	SND_PIANO_4G,
	SND_PIANO_4G_SHARP,
	SND_PIANO_4A,
	SND_PIANO_4A_SHARP,
	SND_PIANO_4B,
	SND_PIANO_5C,

	SND_PIANO_1C,
	SND_PIANO_1C_SHARP,
	SND_PIANO_1D,
	SND_PIANO_1D_SHARP,
	SND_PIANO_1E,
	SND_PIANO_1F,
	SND_PIANO_1F_SHARP,
	SND_PIANO_1G,
	SND_PIANO_1G_SHARP,
	SND_PIANO_1A,
	SND_PIANO_1A_SHARP,
	SND_PIANO_1B,
	SND_PIANO_2C,
	SND_PIANO_2C_SHARP,
	SND_PIANO_2D,
	SND_PIANO_2D_SHARP,
	SND_PIANO_2E,
	SND_PIANO_2F,
	SND_PIANO_2F_SHARP,
	SND_PIANO_2G,
	SND_PIANO_2G_SHARP,
	SND_PIANO_2A,
	SND_PIANO_2A_SHARP,
	SND_PIANO_2B,

	SND_STRING_2C,
	SND_STRING_2C_SHARP,
	SND_STRING_2D,
	SND_STRING_2D_SHARP,
	SND_STRING_2E,
	SND_STRING_2F,
	SND_STRING_2F_SHARP,
	SND_STRING_2G,
	SND_STRING_2G_SHARP,
	SND_STRING_2A,
	SND_STRING_2A_SHARP,
	SND_STRING_2B,
	SND_STRING_3C,

	SND_DRUM_KICK,
	SND_DRUM_SNARE,	
	SND_DRUM_OPEN_HIGHHAT,
	SND_DRUM_CLOSE_HIGHHAT,
	SND_DRUM_CRASH_CYMBAL,
	SND_DRUM_SMALL_TOM,
	SND_DRUM_LARGE_TOM,	
	SND_DRUM_RIDE_CYMBAL,
	SND_DRUM_FLOOR_TOM,	

	SND_ELECTRONIC_4C,
	SND_ELECTRONIC_4C_SHARP,
	SND_ELECTRONIC_4D,
	SND_ELECTRONIC_4D_SHARP,
	SND_ELECTRONIC_4E,
	SND_ELECTRONIC_4F,
	SND_ELECTRONIC_4F_SHARP,
	SND_ELECTRONIC_4G,
	SND_ELECTRONIC_4G_SHARP,
	SND_ELECTRONIC_4A,
	SND_ELECTRONIC_4A_SHARP,
	SND_ELECTRONIC_4B,
	SND_ELECTRONIC_5C,

	SND_MAX 
};


