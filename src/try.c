

#include "try.h"


static void loadsound(void);
void *playsound(int, int);

static Mix_Music *music;


static Mix_Chunk *Instruments[SND_MAX];
//static Mix_Chunk *Instruments[SND_MAX_Instruments];

static Mix_Music *music;

void initSounds(void)
{
   memset(Instruments, 0, sizeof(Mix_Chunk*) * SND_MAX);
    //memset(Instruments, 0, sizeof(Mix_Chunk*) * SND_MAX_Instruments);
   
   music = NULL;
   
   loadsound();
    
}



void *playsound(int id, int channel)
{
   Mix_PlayChannel(channel, Instruments[id], 0);
   Mix_Volume(channel, 128);
}



void highpiano_sound(void){
    
    if(app.keyboard[SDL_SCANCODE_Q]){
            //SDL_Delay(L);
            playsound(SND_PIANO_3C, CH_PIANO);    //3C
            Song[i][u].scale=SND_PIANO_3C;
            Song[i][u].timing=mytime;     
            SDL_Delay(L2);
    }
    if(app.keyboard[SDL_SCANCODE_2]){
            //SDL_Delay(L);
            playsound(SND_PIANO_3C_SHARP, CH_PIANO);
            Song[i][u].scale=SND_PIANO_3C_SHARP;
            Song[i][u].timing=mytime;
            SDL_Delay(L2);
    }
    if(app.keyboard[SDL_SCANCODE_W]){
            //SDL_Delay(L);
            playsound(SND_PIANO_3D, CH_PIANO);
            Song[i][u].scale=SND_PIANO_3D;
            Song[i][u].timing=mytime;
            SDL_Delay(L2);
    }
    if(app.keyboard[SDL_SCANCODE_3]){
            //SDL_Delay(L);
            playsound(SND_PIANO_3D_SHARP, CH_PIANO);
            Song[i][u].scale=SND_PIANO_3D_SHARP;
            Song[i][u].timing=mytime;
            SDL_Delay(L2);
    }
    if(app.keyboard[SDL_SCANCODE_E]){
            //SDL_Delay(L);
            playsound(SND_PIANO_3E, CH_PIANO);
            Song[i][u].scale=SND_PIANO_3E;
            Song[i][u].timing=mytime;
            SDL_Delay(L2);
    }
    if(app.keyboard[SDL_SCANCODE_R]){
            //SDL_Delay(L);
            playsound(SND_PIANO_3F, CH_PIANO);
            Song[i][u].scale=SND_PIANO_3F;
            Song[i][u].timing=mytime;
            SDL_Delay(L2);
    }
    if(app.keyboard[SDL_SCANCODE_5]){
            //SDL_Delay(L);
            playsound(SND_PIANO_3F_SHARP, CH_PIANO);
            Song[i][u].scale=SND_PIANO_3F_SHARP;
            Song[i][u].timing=mytime;
            SDL_Delay(L2);
    }
    if(app.keyboard[SDL_SCANCODE_T]){
            //SDL_Delay(L);
            playsound(SND_PIANO_3G, CH_PIANO);
            Song[i][u].scale=SND_PIANO_3G;
            Song[i][u].timing=mytime;
            SDL_Delay(L2);
    }
    if(app.keyboard[SDL_SCANCODE_6]){
            //SDL_Delay(L);
            playsound(SND_PIANO_3G_SHARP, CH_PIANO);
            Song[i][u].scale=SND_PIANO_3G_SHARP;
            Song[i][u].timing=mytime;
            SDL_Delay(L2);
    }
    if(app.keyboard[SDL_SCANCODE_Y]){
            //SDL_Delay(L);
            playsound(SND_PIANO_3A, CH_PIANO);
            Song[i][u].scale=SND_PIANO_3A;
            Song[i][u].timing=mytime;
            SDL_Delay(L2);
    }
    if(app.keyboard[SDL_SCANCODE_7]){
            //SDL_Delay(L);
            playsound(SND_PIANO_3A_SHARP, CH_PIANO);
            Song[i][u].scale=SND_PIANO_3A_SHARP;
            Song[i][u].timing=mytime;
            SDL_Delay(L2);
    }
    if(app.keyboard[SDL_SCANCODE_U]){
            //SDL_Delay(L);
            playsound(SND_PIANO_3B, CH_PIANO);
            Song[i][u].scale=SND_PIANO_3B;
            Song[i][u].timing=mytime;
            SDL_Delay(L2);
    }
    if(app.keyboard[SDL_SCANCODE_I]){
            //SDL_Delay(L);
            playsound(SND_PIANO_4C, CH_PIANO); //4C
            Song[i][u].scale=SND_PIANO_4C;
            Song[i][u].timing=mytime;   
            SDL_Delay(L2);
    }    
    if(app.keyboard[SDL_SCANCODE_X]){
            //SDL_Delay(L);
            playsound(SND_PIANO_4C, CH_PIANO);
            Song[i][u].scale=SND_PIANO_4C;
            Song[i][u].timing=mytime;
            SDL_Delay(L2);
    }
    if(app.keyboard[SDL_SCANCODE_D]){
            //SDL_Delay(L);
            playsound(SND_PIANO_4C_SHARP, CH_PIANO);
            Song[i][u].scale=SND_PIANO_4C_SHARP;
            Song[i][u].timing=mytime;
            SDL_Delay(L2);
    }
    if(app.keyboard[SDL_SCANCODE_C]){
            //SDL_Delay(L);
            playsound(SND_PIANO_4D, CH_PIANO);
            Song[i][u].scale=SND_PIANO_4D;
            Song[i][u].timing=mytime;
            SDL_Delay(L2);
    }
    if(app.keyboard[SDL_SCANCODE_F]){
            //SDL_Delay(L);
            playsound(SND_PIANO_4D_SHARP, CH_PIANO);
            Song[i][u].scale=SND_PIANO_4D_SHARP;
            Song[i][u].timing=mytime;
            SDL_Delay(L2);
    }
    if(app.keyboard[SDL_SCANCODE_V]){
            //SDL_Delay(L);
            playsound(SND_PIANO_4E, CH_PIANO);
             Song[i][u].scale=SND_PIANO_4E;
            Song[i][u].timing=mytime;
            SDL_Delay(L2);
    }
    if(app.keyboard[SDL_SCANCODE_B]){
            //SDL_Delay(L);
            playsound(SND_PIANO_4F, CH_PIANO);
            Song[i][u].scale=SND_PIANO_4F;
            Song[i][u].timing=mytime;
            SDL_Delay(L2);
    }
    if(app.keyboard[SDL_SCANCODE_H]){
            //SDL_Delay(L);
            playsound(SND_PIANO_4F_SHARP, CH_PIANO);
            Song[i][u].scale=SND_PIANO_4F_SHARP;
            Song[i][u].timing=mytime;
            SDL_Delay(L2);
    }
    if(app.keyboard[SDL_SCANCODE_N]){
            //SDL_Delay(L);
            playsound(SND_PIANO_4G, CH_PIANO);
            Song[i][u].scale=SND_PIANO_4G;
            Song[i][u].timing=mytime;
            SDL_Delay(L2);
    }
    if(app.keyboard[SDL_SCANCODE_J]){
            //SDL_Delay(L);
            playsound(SND_PIANO_4G_SHARP, CH_PIANO);
            Song[i][u].scale=SND_PIANO_4G_SHARP;
            Song[i][u].timing=mytime;
            SDL_Delay(L2);
    }
    if(app.keyboard[SDL_SCANCODE_M]){
            //SDL_Delay(L);
            playsound(SND_PIANO_4A, CH_PIANO);
            Song[i][u].scale=SND_PIANO_4A;
            Song[i][u].timing=mytime;
            SDL_Delay(L2);
    }
    if(app.keyboard[SDL_SCANCODE_K]){
            //SDL_Delay(L);
            playsound(SND_PIANO_4A_SHARP, CH_PIANO);
            Song[i][u].scale=SND_PIANO_4A_SHARP;
            Song[i][u].timing=mytime;
            SDL_Delay(L2);
    }
    if(app.keyboard[SDL_SCANCODE_COMMA]){
            //SDL_Delay(L);
            playsound(SND_PIANO_4B, CH_PIANO);
            Song[i][u].scale=SND_PIANO_4B;
            Song[i][u].timing=mytime;
            SDL_Delay(L2);
    }

}


void lowpiano_sound(void){

    if(app.keyboard[SDL_SCANCODE_Q]){
            
            playsound(SND_PIANO_1C, CH_PIANO);      //1C
           Song[i][u].scale=SND_PIANO_1C; 
            Song[i][u].timing=mytime;  
            SDL_Delay(L);  
    }
    if(app.keyboard[SDL_SCANCODE_2]){
            
            playsound(SND_PIANO_1C_SHARP, CH_PIANO);
            Song[i][u].scale=SND_PIANO_1C_SHARP;
            Song[i][u].timing=mytime;
            SDL_Delay(L);
            
    }
    if(app.keyboard[SDL_SCANCODE_W]){
            
            playsound(SND_PIANO_1D, CH_PIANO);
            Song[i][u].scale=SND_PIANO_1D;
            Song[i][u].timing=mytime;
            SDL_Delay(L);
    }
    if(app.keyboard[SDL_SCANCODE_3]){
            
            playsound(SND_PIANO_1D_SHARP, CH_PIANO);
            Song[i][u].scale=SND_PIANO_1D_SHARP;
            Song[i][u].timing=mytime;
            SDL_Delay(L);
    }
    if(app.keyboard[SDL_SCANCODE_E]){
            
            playsound(SND_PIANO_1E, CH_PIANO);
            Song[i][u].scale=SND_PIANO_1E;
            Song[i][u].timing=mytime;
            SDL_Delay(L);
    }
    if(app.keyboard[SDL_SCANCODE_R]){
            
            playsound(SND_PIANO_1F, CH_PIANO);
            Song[i][u].scale=SND_PIANO_1F;
            Song[i][u].timing=mytime;
            SDL_Delay(L);
    }
    if(app.keyboard[SDL_SCANCODE_5]){
            
            playsound(SND_PIANO_1F_SHARP, CH_PIANO);
            Song[i][u].scale=SND_PIANO_1F_SHARP;
            Song[i][u].timing=mytime;
            SDL_Delay(L);
    }
    if(app.keyboard[SDL_SCANCODE_T]){
           
            playsound(SND_PIANO_1G, CH_PIANO);
            Song[i][u].scale=SND_PIANO_1G;
            Song[i][u].timing=mytime;
             SDL_Delay(L);
    }
    if(app.keyboard[SDL_SCANCODE_6]){
            
            playsound(SND_PIANO_1G_SHARP, CH_PIANO);
            Song[i][u].scale=SND_PIANO_1G_SHARP;
            Song[i][u].timing=mytime;
            SDL_Delay(L);
    }
    if(app.keyboard[SDL_SCANCODE_Y]){
            
            playsound(SND_PIANO_1A, CH_PIANO);
            Song[i][u].scale=SND_PIANO_1A;
            Song[i][u].timing=mytime;
            SDL_Delay(L);
    }
    if(app.keyboard[SDL_SCANCODE_7]){
            
            playsound(SND_PIANO_1A_SHARP, CH_PIANO);
            Song[i][u].scale=SND_PIANO_1A_SHARP;
            Song[i][u].timing=mytime;
            SDL_Delay(L);
    }
    if(app.keyboard[SDL_SCANCODE_U]){
            
            playsound(SND_PIANO_1B, CH_PIANO);
            Song[i][u].scale=SND_PIANO_1B;
            Song[i][u].timing=mytime;
            SDL_Delay(L);
    }
    if(app.keyboard[SDL_SCANCODE_I]){
            
            playsound(SND_PIANO_2C, CH_PIANO);    //2C
            Song[i][u].scale=SND_PIANO_2C;
            Song[i][u].timing=mytime;
            SDL_Delay(L);
    }    
    if(app.keyboard[SDL_SCANCODE_X]){
            
            playsound(SND_PIANO_2C, CH_PIANO);
            Song[i][u].scale=SND_PIANO_2C;
            Song[i][u].timing=mytime;
            SDL_Delay(L);
    }
    if(app.keyboard[SDL_SCANCODE_D]){
            
            playsound(SND_PIANO_2C_SHARP, CH_PIANO);
            Song[i][u].scale=SND_PIANO_2C_SHARP;
            Song[i][u].timing=mytime;
            SDL_Delay(L);
    }
    if(app.keyboard[SDL_SCANCODE_C]){
            
            playsound(SND_PIANO_2D, CH_PIANO);
            Song[i][u].scale=SND_PIANO_2D;
            Song[i][u].timing=mytime;
            SDL_Delay(L);
            
    }
    if(app.keyboard[SDL_SCANCODE_F]){
           
            playsound(SND_PIANO_2D_SHARP, CH_PIANO);
            Song[i][u].scale=SND_PIANO_2D_SHARP;
            Song[i][u].timing=mytime;
             SDL_Delay(L);
    }
    if(app.keyboard[SDL_SCANCODE_V]){
            
            playsound(SND_PIANO_2E, CH_PIANO);
            Song[i][u].scale=SND_PIANO_2E;
            Song[i][u].timing=mytime;
            SDL_Delay(L);
            
    }
    if(app.keyboard[SDL_SCANCODE_B]){
            
            playsound(SND_PIANO_2F, CH_PIANO);
            Song[i][u].scale=SND_PIANO_2F;
            Song[i][u].timing=mytime;
            SDL_Delay(L);

    }
    if(app.keyboard[SDL_SCANCODE_H]){
            
            playsound(SND_PIANO_2F_SHARP, CH_PIANO);
            Song[i][u].scale=SND_PIANO_2F_SHARP;
            Song[i][u].timing=mytime;
            SDL_Delay(L);
            
    }
    if(app.keyboard[SDL_SCANCODE_N]){
            
            playsound(SND_PIANO_2G, CH_PIANO);
            Song[i][u].scale=SND_PIANO_2G;
            Song[i][u].timing=mytime;
            SDL_Delay(L);
    }
    if(app.keyboard[SDL_SCANCODE_J]){
            
            playsound(SND_PIANO_2G_SHARP, CH_PIANO);
            Song[i][u].scale=SND_PIANO_2G_SHARP;
            Song[i][u].timing=mytime;
            SDL_Delay(L);
            
    }
    if(app.keyboard[SDL_SCANCODE_M]){
            
            playsound(SND_PIANO_2A, CH_PIANO);
            Song[i][u].scale=SND_PIANO_2A;
            Song[i][u].timing=mytime;
            SDL_Delay(L);
            
    }
    if(app.keyboard[SDL_SCANCODE_K]){
            
            playsound(SND_PIANO_2A_SHARP, CH_PIANO);
            Song[i][u].scale=SND_PIANO_2A_SHARP;
            Song[i][u].timing=mytime;
            SDL_Delay(L);
    }
    if(app.keyboard[SDL_SCANCODE_COMMA]){
            
            playsound(SND_PIANO_2B, CH_PIANO);
            Song[i][u].scale=SND_PIANO_2B;
            Song[i][u].timing=mytime;
            SDL_Delay(L);
            
    }
    if(app.keyboard[SDL_SCANCODE_PERIOD]){
            
            playsound(SND_PIANO_3C, CH_PIANO);
            Song[i][u].scale=SND_PIANO_3C;
            Song[i][u].timing=mytime;   
            SDL_Delay(L);
            
    }    

}

void string_sound(void){

    if(app.keyboard[SDL_SCANCODE_Q]){
            //SDL_Delay(L);
            playsound(SND_STRING_2C, CH_PIANO);    //1C
            Song[i][u].scale= SND_STRING_2C;  
            Song[i][u].timing=mytime;   
            SDL_Delay(L2);
    }
    if(app.keyboard[SDL_SCANCODE_2]){
            //SDL_Delay(L);
            playsound(SND_STRING_2C_SHARP, CH_PIANO);
            Song[i][u].scale= SND_STRING_2C_SHARP;
            Song[i][u].timing=mytime;   
            SDL_Delay(L2);
    }
    if(app.keyboard[SDL_SCANCODE_W]){
            //SDL_Delay(L);
            playsound(SND_STRING_2D, CH_PIANO);
            Song[i][u].scale= SND_STRING_2D;
            Song[i][u].timing=mytime;   
            SDL_Delay(L2);
    }
    if(app.keyboard[SDL_SCANCODE_3]){
            //SDL_Delay(L);
            playsound(SND_STRING_2D_SHARP, CH_PIANO);
            Song[i][u].scale= SND_STRING_2D_SHARP;
            Song[i][u].timing=mytime;   
            SDL_Delay(L2);
    }
    if(app.keyboard[SDL_SCANCODE_E]){
            //SDL_Delay(L);
            playsound(SND_STRING_2E, CH_PIANO);
            Song[i][u].scale= SND_STRING_2E;
            Song[i][u].timing=mytime;   
            SDL_Delay(L2);
    }
    if(app.keyboard[SDL_SCANCODE_R]){
            //SDL_Delay(L);
            playsound(SND_STRING_2F, CH_PIANO);
            Song[i][u].scale= SND_STRING_2F;
            Song[i][u].timing=mytime;   
            SDL_Delay(L2);
    }
    if(app.keyboard[SDL_SCANCODE_5]){
            //SDL_Delay(L);
            playsound(SND_STRING_2F_SHARP, CH_PIANO);
            Song[i][u].scale= SND_STRING_2F_SHARP;
            Song[i][u].timing=mytime;   
            SDL_Delay(L2);
    }
    if(app.keyboard[SDL_SCANCODE_T]){
            //SDL_Delay(L);
            playsound(SND_STRING_2G, CH_PIANO);
            Song[i][u].scale= SND_STRING_2G;
            Song[i][u].timing=mytime;   
            SDL_Delay(L2);
    }
    if(app.keyboard[SDL_SCANCODE_6]){
            //SDL_Delay(L);
            playsound(SND_STRING_2G_SHARP, CH_PIANO);
            Song[i][u].scale= SND_STRING_2G_SHARP;
            Song[i][u].timing=mytime;   
            SDL_Delay(L2);
    }
    if(app.keyboard[SDL_SCANCODE_Y]){
            //SDL_Delay(L);
            playsound(SND_STRING_2A, CH_PIANO);
            Song[i][u].scale= SND_STRING_2A;
            Song[i][u].timing=mytime;   
            SDL_Delay(L2);
    }
    if(app.keyboard[SDL_SCANCODE_7]){
            //SDL_Delay(L);
            playsound(SND_STRING_2A_SHARP, CH_PIANO);
            Song[i][u].scale= SND_STRING_2A_SHARP;
            Song[i][u].timing=mytime;   
            SDL_Delay(L2);
    }
    if(app.keyboard[SDL_SCANCODE_U]){
            //SDL_Delay(L);
            playsound(SND_STRING_2B, CH_PIANO);
            Song[i][u].scale= SND_STRING_2B;
            Song[i][u].timing=mytime;   
            SDL_Delay(L2);
    }
    if(app.keyboard[SDL_SCANCODE_I]){
            //SDL_Delay(L);
            playsound(SND_STRING_3C, CH_PIANO);    //3C
            Song[i][u].scale= SND_STRING_3C; 
            Song[i][u].timing=mytime;   
            SDL_Delay(L2);
    }  


    
}


void drum_sound(void){
    if(app.keyboard[SDL_SCANCODE_B]){
            //SDL_Delay(L);
            playsound(SND_DRUM_KICK, CH_PIANO);   
        //      Song[i][u].scale= playsound(SND_DRUM_KICK, CH_PIANO);
            Song[i][u].scale = SND_DRUM_KICK;
            Song[i][u].timing=mytime;  
            SDL_Delay(L2);
            //printf("%f\n",Song[i][u].timing);
            u++;
            
    }       

    if(app.keyboard[SDL_SCANCODE_C]){
            //SDL_Delay(L);
            playsound(SND_DRUM_SNARE, CH_PIANO);   
            Song[i][u].scale= SND_DRUM_SNARE;
            Song[i][u].timing=mytime;  
            SDL_Delay(L2);
            u++;
            //printf("%d\n",u);
    }           
    if(app.keyboard[SDL_SCANCODE_S]){
            //SDL_Delay(L);
            playsound(SND_DRUM_OPEN_HIGHHAT, CH_PIANO); 
            Song[i][u].scale= SND_DRUM_OPEN_HIGHHAT;
            Song[i][u].timing=mytime;    
            SDL_Delay(L2);
            u++;
            //printf("%d\n",u);
    }           
    if(app.keyboard[SDL_SCANCODE_D]){
            //SDL_Delay(L);
            playsound(SND_DRUM_CLOSE_HIGHHAT, CH_PIANO); 
            Song[i][u].scale= SND_DRUM_CLOSE_HIGHHAT;
            Song[i][u].timing=mytime;    
            SDL_Delay(L2);
            u++;
    }          
    if(app.keyboard[SDL_SCANCODE_E]){
            //SDL_Delay(L);
            playsound(SND_DRUM_CRASH_CYMBAL, CH_PIANO);
            Song[i][u].scale= SND_DRUM_CRASH_CYMBAL;
            Song[i][u].timing=mytime;     
            SDL_Delay(L2);
            u++;
    }          
    if(app.keyboard[SDL_SCANCODE_F]){
            //SDL_Delay(L);
            playsound(SND_DRUM_SMALL_TOM, CH_PIANO); 
            Song[i][u].scale=SND_DRUM_SMALL_TOM;
            Song[i][u].timing=mytime;    
            SDL_Delay(L2);
            u++;
    }          
    if(app.keyboard[SDL_SCANCODE_H]){
            //SDL_Delay(L);
            playsound(SND_DRUM_LARGE_TOM, CH_PIANO); 
            Song[i][u].scale= SND_DRUM_LARGE_TOM ;
            Song[i][u].timing=mytime;    
            SDL_Delay(L2);
            u++;
    }          
    if(app.keyboard[SDL_SCANCODE_U]){
            //SDL_Delay(L);
            playsound(SND_DRUM_RIDE_CYMBAL, CH_PIANO);
            Song[i][u].scale= SND_DRUM_RIDE_CYMBAL;
            Song[i][u].timing=mytime;      
            SDL_Delay(L2);
            u++;
    }          
    if(app.keyboard[SDL_SCANCODE_N]){
            //SDL_Delay(L);
            playsound(SND_DRUM_FLOOR_TOM, CH_PIANO);
            Song[i][u].scale= SND_DRUM_FLOOR_TOM;
            Song[i][u].timing=mytime;   
            SDL_Delay(L2);
            u++;
    }          

}       

void electronic_sound(void){
       
        if(app.keyboard[SDL_SCANCODE_Q]){
            //SDL_Delay(L);
            playsound(SND_ELECTRONIC_4C, CH_PIANO);
            Song[i][u].scale= SND_ELECTRONIC_4C;
            Song[i][u].timing=mytime;   
            SDL_Delay(L2);
            u++;
        }

        if(app.keyboard[SDL_SCANCODE_2]){
            //SDL_Delay(L);
            playsound(SND_ELECTRONIC_4C_SHARP, CH_PIANO);
            Song[i][u].scale= SND_ELECTRONIC_4C_SHARP;
            Song[i][u].timing=mytime;   
            SDL_Delay(L2);
            u++;
        }

        if(app.keyboard[SDL_SCANCODE_W]){
            //SDL_Delay(L);
            playsound(SND_ELECTRONIC_4D, CH_PIANO);
            Song[i][u].scale= SND_ELECTRONIC_4D;
            Song[i][u].timing=mytime;   
            SDL_Delay(L2);
            u++;
        }

        if(app.keyboard[SDL_SCANCODE_3]){
            //SDL_Delay(L);
            playsound(SND_ELECTRONIC_4D_SHARP, CH_PIANO);
            Song[i][u].scale= SND_ELECTRONIC_4D_SHARP;
            Song[i][u].timing=mytime;   
            SDL_Delay(L2);
            u++;
        }

        if(app.keyboard[SDL_SCANCODE_E]){
            //SDL_Delay(L);
            playsound(SND_ELECTRONIC_4E, CH_PIANO);
            Song[i][u].scale= SND_ELECTRONIC_4E;
            Song[i][u].timing=mytime;   
            SDL_Delay(L2);
            u++;
        }

        if(app.keyboard[SDL_SCANCODE_R]){
            //SDL_Delay(L);
            playsound(SND_ELECTRONIC_4F, CH_PIANO);
            Song[i][u].scale= SND_ELECTRONIC_4F;
            Song[i][u].timing=mytime;   
            SDL_Delay(L2);
            u++;
        }

        if(app.keyboard[SDL_SCANCODE_5]){
            //SDL_Delay(L);
            playsound(SND_ELECTRONIC_4F_SHARP, CH_PIANO);
            Song[i][u].scale= SND_ELECTRONIC_4F_SHARP;
            Song[i][u].timing=mytime;   
            SDL_Delay(L2);
            u++;
        }

        if(app.keyboard[SDL_SCANCODE_T]){
            //SDL_Delay(L);
            playsound(SND_ELECTRONIC_4G, CH_PIANO);
            Song[i][u].scale= SND_ELECTRONIC_4G;
            Song[i][u].timing=mytime;   
            SDL_Delay(L2);
            u++;
        }

        if(app.keyboard[SDL_SCANCODE_6]){
            //SDL_Delay(L);
            playsound(SND_ELECTRONIC_4G_SHARP, CH_PIANO);
            Song[i][u].scale= SND_ELECTRONIC_4G_SHARP;
            Song[i][u].timing=mytime;   
            SDL_Delay(L2);
            u++;
        }

        if(app.keyboard[SDL_SCANCODE_Y]){
            //SDL_Delay(L);
            playsound(SND_ELECTRONIC_4A, CH_PIANO);
            Song[i][u].scale= SND_ELECTRONIC_4A;
            Song[i][u].timing=mytime;   
            SDL_Delay(L2);
            u++;
        }

        if(app.keyboard[SDL_SCANCODE_7]){
            //SDL_Delay(L);
            playsound(SND_ELECTRONIC_4A_SHARP, CH_PIANO);
            Song[i][u].scale= SND_ELECTRONIC_4A_SHARP;
            Song[i][u].timing=mytime;   
            SDL_Delay(L2);
            u++;
        }

        if(app.keyboard[SDL_SCANCODE_U]){
            //SDL_Delay(L);
            playsound(SND_ELECTRONIC_4B, CH_PIANO);
            Song[i][u].scale= SND_ELECTRONIC_4B;
            Song[i][u].timing=mytime;   
            SDL_Delay(L2);
        }

        if(app.keyboard[SDL_SCANCODE_I]){
            //SDL_Delay(L);
            playsound(SND_ELECTRONIC_5C, CH_PIANO);
            Song[i][u].scale= SND_ELECTRONIC_5C;
            Song[i][u].timing=mytime;   
            SDL_Delay(L2);
            u++;
        }
}


static void loadsound(void)
{
    Instruments[SND_PIANO_3C] = Mix_LoadWAV("sounds/high piano/C3.wav");
    Instruments[SND_PIANO_3C_SHARP] = Mix_LoadWAV("sounds/high piano/C3#.wav"); //NONE
    Instruments[SND_PIANO_3D] = Mix_LoadWAV("sounds/high piano/D3.wav");
    Instruments[SND_PIANO_3D_SHARP] = Mix_LoadWAV("sounds/high piano/D4#.wav"); //NONE
    Instruments[SND_PIANO_3E] = Mix_LoadWAV("sounds/high piano/E3.wav");
    Instruments[SND_PIANO_3F] = Mix_LoadWAV("sounds/high piano/F3.wav");
    Instruments[SND_PIANO_3F_SHARP] = Mix_LoadWAV("sounds/high piano/F3#.wav"); //NONE
    Instruments[SND_PIANO_3G] = Mix_LoadWAV("sounds/high piano/G3.wav");
    Instruments[SND_PIANO_3G_SHARP] = Mix_LoadWAV("sounds/high piano/G3#.wav"); //NONE
    Instruments[SND_PIANO_3A] = Mix_LoadWAV("sounds/high piano/A3.wav");
    Instruments[SND_PIANO_3A_SHARP] = Mix_LoadWAV("sounds/high piano/A3#.wav"); //NONE
    Instruments[SND_PIANO_3B] = Mix_LoadWAV("sounds/high piano/B3.wav");

    Instruments[SND_PIANO_4C] = Mix_LoadWAV("sounds/high piano/C4.wav");
    Instruments[SND_PIANO_4C_SHARP] = Mix_LoadWAV("sounds/high piano/C4#.wav");
    Instruments[SND_PIANO_4D] = Mix_LoadWAV("sounds/high piano/D4.wav");
    Instruments[SND_PIANO_4D_SHARP] = Mix_LoadWAV("sounds/high piano/D4#.wav");
    Instruments[SND_PIANO_4E] = Mix_LoadWAV("sounds/high piano/E4.wav");
    Instruments[SND_PIANO_4F] = Mix_LoadWAV("sounds/high piano/F4.wav");
    Instruments[SND_PIANO_4F_SHARP] = Mix_LoadWAV("sounds/high piano/F4#.wav");
    Instruments[SND_PIANO_4G] = Mix_LoadWAV("sounds/high piano/G4.wav");
    Instruments[SND_PIANO_4G_SHARP] = Mix_LoadWAV("sounds/high piano/G4#.wav");
    Instruments[SND_PIANO_4A] = Mix_LoadWAV("sounds/high piano/A4.wav");
    Instruments[SND_PIANO_4A_SHARP] = Mix_LoadWAV("sounds/high piano/A4#.wav");
    Instruments[SND_PIANO_4B] = Mix_LoadWAV("sounds/high piano/B4.wav");
    Instruments[SND_PIANO_5C] = Mix_LoadWAV("sounds/high piano/C5.wav");
    
    





    Instruments[SND_PIANO_1C] = Mix_LoadWAV("sounds/low piano/C1.wav");
    Instruments[SND_PIANO_1C_SHARP] = Mix_LoadWAV("sounds/low piano/C1#.wav");
    Instruments[SND_PIANO_1D] = Mix_LoadWAV("sounds/low piano/D1.wav");
    Instruments[SND_PIANO_1D_SHARP] = Mix_LoadWAV("sounds/low piano/D1#.wav");
    Instruments[SND_PIANO_1E] = Mix_LoadWAV("sounds/low piano/E1.wav");
    Instruments[SND_PIANO_1F] = Mix_LoadWAV("sounds/low piano/F1.wav");
    Instruments[SND_PIANO_1F_SHARP] = Mix_LoadWAV("sounds/low piano/F1#.wav");
    Instruments[SND_PIANO_1G] = Mix_LoadWAV("sounds/low piano/G1.wav");
    Instruments[SND_PIANO_1G_SHARP] = Mix_LoadWAV("sounds/low piano/G1#.wav");
    Instruments[SND_PIANO_1A] = Mix_LoadWAV("sounds/low piano/A1.wav");
    Instruments[SND_PIANO_1A_SHARP] = Mix_LoadWAV("sounds/low piano/A1#.wav");
    Instruments[SND_PIANO_1B] = Mix_LoadWAV("sounds/low piano/B1.wav");
    
    Instruments[SND_PIANO_2C] = Mix_LoadWAV("sounds/low piano/C2.wav");
    Instruments[SND_PIANO_2C_SHARP] = Mix_LoadWAV("sounds/low piano/C2#.wav");
    Instruments[SND_PIANO_2D] = Mix_LoadWAV("sounds/low piano/D2.wav");
    Instruments[SND_PIANO_2D_SHARP] = Mix_LoadWAV("sounds/low piano/D2#.wav");
    Instruments[SND_PIANO_2E] = Mix_LoadWAV("sounds/low piano/E2.wav");
    Instruments[SND_PIANO_2F] = Mix_LoadWAV("sounds/low piano/F2.wav");
    Instruments[SND_PIANO_2F_SHARP] = Mix_LoadWAV("sounds/low piano/F2#.wav");
    Instruments[SND_PIANO_2G] = Mix_LoadWAV("sounds/low piano/G2.wav");
    Instruments[SND_PIANO_2G_SHARP] = Mix_LoadWAV("sounds/low piano/G2#.wav");
    Instruments[SND_PIANO_2A] = Mix_LoadWAV("sounds/low piano/A2.wav");        //NONE
    Instruments[SND_PIANO_2A_SHARP] = Mix_LoadWAV("sounds/low piano/A2#.wav"); //NONE
    Instruments[SND_PIANO_2B] = Mix_LoadWAV("sounds/low piano/B2.wav");        //NONE
      

    Instruments[SND_STRING_2C] = Mix_LoadWAV("sounds/String/C2.wav");       //소리파일 문제
    Instruments[SND_STRING_2C_SHARP] = Mix_LoadWAV("sounds/String/C2#.wav");
    Instruments[SND_STRING_2D] = Mix_LoadWAV("sounds/String/D2.wav");
    Instruments[SND_STRING_2D_SHARP] = Mix_LoadWAV("sounds/String/D2#.wav");
    Instruments[SND_STRING_2E] = Mix_LoadWAV("sounds/String/E2.wav");
    Instruments[SND_STRING_2F] = Mix_LoadWAV("sounds/String/F2.wav");
    Instruments[SND_STRING_2F_SHARP] = Mix_LoadWAV("sounds/String/F2#.wav");
    Instruments[SND_STRING_2G] = Mix_LoadWAV("sounds/String/G2.wav");
    Instruments[SND_STRING_2G_SHARP] = Mix_LoadWAV("sounds/String/G2#.wav");
    Instruments[SND_STRING_2A] = Mix_LoadWAV("sounds/String/A2.wav");
    Instruments[SND_STRING_2A_SHARP] = Mix_LoadWAV("sounds/String/A2#.wav");
    Instruments[SND_STRING_2B] = Mix_LoadWAV("sounds/String/B2.wav");
    Instruments[SND_STRING_3C] = Mix_LoadWAV("sounds/String/C3.wav");
    

    Instruments[SND_DRUM_KICK] = Mix_LoadWAV("sounds/Drum/Under_middle.wav");
    Instruments[SND_DRUM_SNARE] = Mix_LoadWAV("sounds/Drum/Under_left.wav");
    Instruments[SND_DRUM_OPEN_HIGHHAT] = Mix_LoadWAV("sounds/Drum/Middle_left_big.wav");
    Instruments[SND_DRUM_CLOSE_HIGHHAT] = Mix_LoadWAV("sounds/Drum/Middle_left_small.wav");
    Instruments[SND_DRUM_CRASH_CYMBAL] = Mix_LoadWAV("sounds/Drum/Top_left(1).wav");
    Instruments[SND_DRUM_SMALL_TOM] = Mix_LoadWAV("sounds/Drum/top2.wav");
    Instruments[SND_DRUM_LARGE_TOM] = Mix_LoadWAV("sounds/Drum/Top3.wav");
    Instruments[SND_DRUM_RIDE_CYMBAL] = Mix_LoadWAV("sounds/Drum/Top4.wav");
    Instruments[SND_DRUM_FLOOR_TOM] = Mix_LoadWAV("sounds/Drum/Under_right.wav");    


    Instruments[SND_ELECTRONIC_4C] = Mix_LoadWAV("sounds/Electronic/C4.wav");    
    Instruments[SND_ELECTRONIC_4C_SHARP] = Mix_LoadWAV("sounds/Electronic/C4#(1).wav");    
    Instruments[SND_ELECTRONIC_4D] = Mix_LoadWAV("sounds/Electronic/D4.wav");  
    Instruments[SND_ELECTRONIC_4D_SHARP] = Mix_LoadWAV("sounds/Electronic/D4#.wav");    
    Instruments[SND_ELECTRONIC_4E] = Mix_LoadWAV("sounds/Electronic/E4.wav");    
    Instruments[SND_ELECTRONIC_4F] = Mix_LoadWAV("sounds/Electronic/F4(1).wav");    
    Instruments[SND_ELECTRONIC_4F_SHARP] = Mix_LoadWAV("sounds/Electronic/F4#.wav");    
    Instruments[SND_ELECTRONIC_4G] = Mix_LoadWAV("sounds/Electronic/G4.wav");    
    Instruments[SND_ELECTRONIC_4G_SHARP] = Mix_LoadWAV("sounds/Electronic/G4#(1).wav");    
    Instruments[SND_ELECTRONIC_4A] = Mix_LoadWAV("sounds/Electronic/A4(1).wav");    
    Instruments[SND_ELECTRONIC_4A_SHARP] = Mix_LoadWAV("sounds/Electronic/A4#.wav");  
    Instruments[SND_ELECTRONIC_4B] = Mix_LoadWAV("sounds/Electronic/B4.wav");  
    Instruments[SND_ELECTRONIC_5C] = Mix_LoadWAV("sounds/Electronic/C5.wav");     
}