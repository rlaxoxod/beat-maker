#include "thread.h"

int i=1;
int u=0;
int l=0;
int a=0;
void *record(void);


void *play_1(void *data)  
{   
    u=0;
     while(mytime<=20 && mytime>10){                                                           
         if(mytime >= ((10+Song[1][u].timing)-0.01) && mytime <= ((10+Song[1][u].timing)+0.01)){
            playsound(Song[1][u].scale,CH_PIANO);
            
            // usleep(10000);
            u++;
            if(u==0){
               return 0;
            } 
        }
     }
     u=0;
     while(mytime<=30&&mytime>20){                                                           
         if(mytime >= ((20+Song[1][u].timing)-0.01) && mytime <= ((20+Song[1][u].timing)+0.01)){
            playsound(Song[1][u].scale,CH_PIANO);
            
            // usleep(10000);
            u++;
            if(u==0){
               return 0;
            } 
        }
     }
     u=0;
     while(mytime<=40 && mytime>30){                                                           
        if(mytime >= ((30+Song[1][u].timing)-0.01) && mytime <= ((30+Song[1][u].timing)+0.01)){
            playsound(Song[1][u].scale,CH_PIANO);
            // usleep(10000);
            u++;
            if(u==0){
               return 0;
            } 
        }
     }
     u=0;
     while(mytime<=50 && mytime>40){                                                           
        if(mytime >= ((40+Song[1][u].timing)-0.01) && mytime <= ((40+Song[1][u].timing)+0.01)){
            playsound(Song[1][u].scale,CH_PIANO);
            // usleep(10000);
            u++;
            if(u==0){
               return 0;
            } 
        }

     }
     u=0;
     while(mytime<=60 && mytime>50){                                                           
        if(mytime >= ((50+Song[1][u].timing)-0.01) && mytime <= ((50+Song[1][u].timing)+0.01)){
            playsound(Song[1][u].scale,CH_PIANO);
            // usleep(10000);
            u++;
            if(u==0){
               return 0;
            } 
        }

     }
     u=0;
     while(mytime<=70 && mytime>60){                                                           
        if(mytime >= ((60+Song[1][u].timing)-0.01) && mytime <= ((60+Song[1][u].timing)+0.01)){
            playsound(Song[1][u].scale,CH_PIANO);
            // usleep(10000);
            u++;
            if(u==0){
               return 0;
            } 
        }

     }
     while(mytime<=80 && mytime>70){                                                           
        if(mytime >= ((70+Song[1][u].timing)-0.01) && mytime <= ((70+Song[1][u].timing)+0.01)){
            playsound(Song[1][u].scale,CH_PIANO);
            // usleep(10000);
            u++;
            if(u==0){
               return 0;
            } 
        }
     }
    u=0;
     while(mytime<=90 && mytime>80){                                                           
        if(mytime >= ((80+Song[1][u].timing)-0.01) && mytime <= ((80+Song[1][u].timing)+0.01)){
            playsound(Song[1][u].scale,CH_PIANO);
            // usleep(10000);
            u++;
            if(u==0){
               return 0;
            } 
        }
     }
     u=0;
     while(mytime<=100 && mytime>90){                                                           
        if(mytime >= ((90+Song[1][u].timing)-0.01) && mytime <= ((90+Song[1][u].timing)+0.01)){
            playsound(Song[1][u].scale,CH_PIANO);
            // usleep(10000);
            u++;
            if(u==0){
               return 0;
            } 
        }

     }
    u=0;
    while(mytime<=110 && mytime>100){                                                           
        if(mytime >= ((100+Song[1][u].timing)-0.01) && mytime <= ((110+Song[1][u].timing)+0.01)){
            playsound(Song[1][u].scale,CH_PIANO);
            // usleep(10000);
            u++;
            if(u==0){
               return 0;
            } 
        }

     }

     u=0;
     while(mytime<=120 && mytime>110){                                                           
        if(mytime >= ((110+Song[1][u].timing)-0.01) && mytime <= ((110+Song[1][u].timing)+0.01)){
            playsound(Song[1][u].scale,CH_PIANO);
            // usleep(10000);
            u++;
            if(u==0){
               return 0;
            } 
        }

     }
}  
void *play_2(void *data)  
{   
    u=0;
    while(mytime<=40 && mytime>30){                                                          
        if(mytime >= ((10 + Song[2][u].timing) - 0.01) && mytime <= ((10+Song[2][u].timing) + 0.01)){
            playsound(Song[2][u].scale,CH_PIANO);    
            // usleep(10000);
            u++;
            if(u==0){
                while(mytime<=S);
            } 
        }
     }
    u=0;
    while(mytime<=50 && mytime>40){                                                          
        if(mytime >= ((20 + Song[2][u].timing) - 0.01) && mytime <= ((20+Song[2][u].timing) + 0.01)){
            playsound(Song[2][u].scale,CH_PIANO);    
            // usleep(10000);
            u++;
            if(u==0){
                while(mytime<=S);
            } 
        }
     }
     u=0;
    while(mytime<=60 && mytime>50){                                                          
        if(mytime >= ((30 + Song[2][u].timing) - 0.01) && mytime <= ((30+Song[2][u].timing) + 0.01)){
            playsound(Song[2][u].scale,CH_PIANO);    
            // usleep(10000);
            u++;
            if(u==0){
                while(mytime<=S);
            } 
        }
     }
    u=0;
    while(mytime<=70 && mytime>60){                                                          
        if(mytime >= ((40 + Song[2][u].timing) - 0.01) && mytime <= ((40+Song[2][u].timing) + 0.01)){
            playsound(Song[2][u].scale,CH_PIANO);    
            // usleep(10000);
            u++;
            if(u==0){
                while(mytime<=S);
            } 
        }
     }
    u=0;
    while(mytime<=80 && mytime>70){                                                          
        if(mytime >= ((50 + Song[2][u].timing) - 0.01) && mytime <= ((50+Song[2][u].timing) + 0.01)){
            playsound(Song[2][u].scale,CH_PIANO);    
            // usleep(10000);
            u++;
            if(u==0){
                while(mytime<=S);
            } 
        }
     }
    u=0;
    while(mytime<=90 && mytime>80){                                                          
        if(mytime >= ((60 + Song[2][u].timing) - 0.01) && mytime <= ((60+Song[2][u].timing) + 0.01)){
            playsound(Song[2][u].scale,CH_PIANO);    
            // usleep(10000);
            u++;
            if(u==0){
                while(mytime<=S);
            } 
        }
     }
    u=0;
    while(mytime<=100 && mytime>90){                                                          
        if(mytime >= ((70 + Song[2][u].timing) - 0.01) && mytime <= ((70+Song[2][u].timing) + 0.01)){
            playsound(Song[2][u].scale,CH_PIANO);    
            // usleep(10000);
            u++;
            if(u==0){
                while(mytime<=S);
            } 
        }
     }
    u=0;
    while(mytime<=110 && mytime>100){                                                          
        if(mytime >= ((80 + Song[2][u].timing) - 0.01) && mytime <= ((80+Song[2][u].timing) + 0.01)){
            playsound(Song[2][u].scale,CH_PIANO);    
            // usleep(10000);
            u++;
            if(u==0){
                while(mytime<=S);
            } 
        }
     }
    u=0;
    while(mytime<=120 && mytime>110){                                                          
        if(mytime >= ((90 + Song[2][u].timing) - 0.01) && mytime <= ((90+Song[2][u].timing) + 0.01)){
            playsound(Song[2][u].scale,CH_PIANO);    
            // usleep(10000);
            u++;
            if(u==0){
                while(mytime<=S);
            } 
        }
     }

}  
void *play_3(void *data)  
{   
    u=0;
    while(mytime<=60&&mytime>50){                                                           
         if(mytime >= ((10+Song[3][u].timing)-0.01) && mytime <= ((10+Song[3][u].timing)+0.01)){
            playsound(Song[3][u].scale,CH_PIANO);
            
            // usleep(10000);
            u++;
            if(u==0){
               return 0;
            } 
        }
    }
    u=0;
    while(mytime<=70&&mytime>60){                                                           
         if(mytime >= ((20+Song[3][u].timing)-0.01) && mytime <= ((20+Song[3][u].timing)+0.01)){
            playsound(Song[3][u].scale,CH_PIANO);
            
            // usleep(10000);
            u++;
            if(u==0){
               return 0;
            } 
        }
    }
    u=0;
    while(mytime<=80&&mytime>70){                                                           
         if(mytime >= ((30+Song[3][u].timing)-0.01) && mytime <= ((30+Song[3][u].timing)+0.01)){
            playsound(Song[3][u].scale,CH_PIANO);
            
            // usleep(10000);
            u++;
            if(u==0){
               return 0;
            } 
        }
    }
    u=0;
    while(mytime<=90&&mytime>80){                                                           
         if(mytime >= ((40+Song[3][u].timing)-0.01) && mytime <= ((40+Song[3][u].timing)+0.01)){
            playsound(Song[3][u].scale,CH_PIANO);
            
            // usleep(10000);
            u++;
            if(u==0){
               return 0;
            } 
        }
    }
    u=0;
    while(mytime<=100&&mytime>90){                                                           
         if(mytime >= ((50+Song[3][u].timing)-0.01) && mytime <= ((50+Song[3][u].timing)+0.01)){
            playsound(Song[3][u].scale,CH_PIANO);
            
            // usleep(10000);
            u++;
            if(u==0){
               return 0;
            } 
        }
    }
    u=0;
    while(mytime<=110&&mytime>100){                                                           
         if(mytime >= ((60+Song[3][u].timing)-0.01) && mytime <= ((60+Song[3][u].timing)+0.01)){
            playsound(Song[3][u].scale,CH_PIANO);
            
            // usleep(10000);
            u++;
            if(u==0){
               return 0;
            } 
        }
    }
    u=0;
    while(mytime<=120&&mytime>110){                                                           
         if(mytime >= ((70+Song[3][u].timing)-0.01) && mytime <= ((70+Song[3][u].timing)+0.01)){
            playsound(Song[3][u].scale,CH_PIANO);
            
            // usleep(10000);
            u++;
            if(u==0){
               return 0;
            } 
        }
    }
}  
void *play_4(void *data)  
{   
    u=0;
    while(mytime<=80&&mytime>70){                                                           
         if(mytime >= ((10+Song[4][u].timing)-0.01) && mytime <= ((10+Song[4][u].timing)+0.01)){
            playsound(Song[4][u].scale,CH_PIANO);
            
            // usleep(10000);
            u++;
            if(u==0){
               return 0;
            } 
        }
    }
    u=0;
    while(mytime<=90&&mytime>80){                                                           
         if(mytime >= ((20+Song[4][u].timing)-0.01) && mytime <= ((20+Song[4][u].timing)+0.01)){
            playsound(Song[4][u].scale,CH_PIANO);
            
            // usleep(10000);
            u++;
            if(u==0){
               return 0;
            } 
        }
    }
    u=0;
    while(mytime<=100&&mytime>90){                                                           
         if(mytime >= ((30+Song[4][u].timing)-0.01) && mytime <= ((30+Song[4][u].timing)+0.01)){
            playsound(Song[4][u].scale,CH_PIANO);
            
            // usleep(10000);
            u++;
            if(u==0){
               return 0;
            } 
        }
    }
    u=0;
    while(mytime<=110&&mytime>100){                                                           
         if(mytime >= ((40+Song[4][u].timing)-0.01) && mytime <= ((40+Song[4][u].timing)+0.01)){
            playsound(Song[4][u].scale,CH_PIANO);
            
            // usleep(10000);
            u++;
            if(u==0){
               return 0;
            } 
        }
    }
    u=0;
    while(mytime<=120&&mytime>110){                                                           
         if(mytime >= ((50+Song[4][u].timing)-0.01) && mytime <= ((50+Song[4][u].timing)+0.01)){
            playsound(Song[4][u].scale,CH_PIANO);
            
            // usleep(10000);
            u++;
            if(u==0){
               return 0;
            } 
        }
    }
}  
void *play_5(void *data)  
{   
    u=0;
    while(mytime<=100&&mytime>90){                                                           
         if(mytime >= ((10+Song[5][u].timing)-0.01) && mytime <= ((10+Song[5][u].timing)+0.01)){
            playsound(Song[5][u].scale,CH_PIANO);
            
            // usleep(10000);
            u++;
            if(u==0){
               return 0;
            } 
        }
    }
    u=0;
    while(mytime<=110&&mytime>100){                                                           
         if(mytime >= ((20+Song[1][u].timing)-0.01) && mytime <= ((20+Song[1][u].timing)+0.01)){
            playsound(Song[5][u].scale,CH_PIANO);
            
            // usleep(10000);
            u++;
            if(u==0){
               return 0;
            } 
        }
    }
    u=0;
    while(mytime<=120&&mytime>110){                                                           
         if(mytime >= ((30+Song[1][u].timing)-0.01) && mytime <= ((30+Song[1][u].timing)+0.01)){
            playsound(Song[5][u].scale,CH_PIANO);
            
            // usleep(10000);
            u++;
            if(u==0){
               return 0;
            } 
        }
    }    
}  
void *play_6(void *data)  
{   
    u=0;
    while(mytime<=120&&mytime>110){                                                           
         if(mytime >= ((10+Song[6][u].timing)-0.01) && mytime <= ((10+Song[6][u].timing)+0.01)){
            playsound(Song[6][u].scale,CH_PIANO);
            
            // usleep(10000);
            u++;
            if(u==0){
               return 0;
            } 
        }

    }
}  


void *start_record(void){

    //printf("before while %d\n", instrument_number);
    
    app.delegate.record = record();      
}

void *record(void){

    pthread_t p_thread[22];       //number of L
   int thr_id , thr_id_2;
   int status;
   int j,k;


    if(l==0){
        thr_id = pthread_create(&p_thread[0], NULL,time_function,(void *)&a); 
            if (thr_id < 0)
            {
                perror("thread create error : ");
                exit(0);
            } 
            printf("time thread %d is created\n",l);    
        l++;
    }
        
//1

//2   
        if(mytime<20 && 10<mytime){
            if(a==0){
            thr_id = pthread_create(&p_thread[l],NULL,play_1,(void *)&j);
            if (thr_id < 0)
            {
                perror("thread create error : ");
                exit(0);
            
            }
            printf("play 1 is created;\n"); 
            l++;
            a++;
            }
        }
//3
        if(mytime<30 && 20<mytime){
            if (a==1){
            thr_id = pthread_create(&p_thread[l],NULL,play_1,(void *)&j);
            if (thr_id < 0)
            {
                perror("thread create error : ");
                exit(0);
            }
            l++;
            a++;
            }
        }
//4       
        if(mytime<40 && 30<mytime){
            if(a==2){
            thr_id = pthread_create(&p_thread[l],NULL,play_1,(void *)&j);
            if (thr_id < 0)
            {
                perror("thread create error : ");
                exit(0);
            } 
            l++;
            thr_id = pthread_create(&p_thread[l],NULL,play_2,(void *)&j);
            if (thr_id < 0)
            {
                perror("thread create error : ");
                exit(0);
            } 
            l++;
            a++;
            }    
        }
//5
        if(mytime<50 && 40<mytime){
            if(a==3){
            thr_id = pthread_create(&p_thread[l],NULL,play_1,(void *)&j);
            if (thr_id < 0)
            {
                perror("thread create error : ");
                exit(0);
            } 
            l++;
            thr_id = pthread_create(&p_thread[l],NULL,play_2,(void *)&j);
            if (thr_id < 0)
            {
                perror("thread create error : ");
                exit(0);
            } 
            l++;
            a++;
            }
        }
 //6       
        if(mytime<60 && 50<mytime){
            if(a==4){
            thr_id = pthread_create(&p_thread[l],NULL,play_1,(void *)&j);
            if (thr_id < 0)
            {
                perror("thread create error : ");
                exit(0);
            } 
            l++;
            thr_id = pthread_create(&p_thread[l],NULL,play_2,(void *)&j);
            if (thr_id < 0)
            {
                perror("thread create error : ");
                exit(0);
            } 
            l++;
            thr_id = pthread_create(&p_thread[l],NULL,play_3,(void *)&j);
            if (thr_id < 0)
            {
                perror("thread create error : ");
                exit(0);
            } 
            l++;
            a++;
            }
        }
//7
        if(mytime<70 && 60<mytime){
        if (a==5){
            thr_id = pthread_create(&p_thread[l],NULL,play_1,(void *)&j);
            if (thr_id < 0)
            {
                perror("thread create error : ");
                exit(0);
            } 
            l++;
            thr_id = pthread_create(&p_thread[l],NULL,play_2,(void *)&j);
            if (thr_id < 0)
            {
                perror("thread create error : ");
                exit(0);
            } 
            l++;
            thr_id = pthread_create(&p_thread[l],NULL,play_3,(void *)&j);
            if (thr_id < 0)
            {
                perror("thread create error : ");
                exit(0);
            } 
            l++;
            a++;
        }
        }
//8
         if(mytime<80 && 70<mytime){
            if (a==6){
            thr_id = pthread_create(&p_thread[l],NULL,play_1,(void *)&j);
            if (thr_id < 0)
            {
                perror("thread create error : ");
                exit(0);
            } 
            l++;
            thr_id = pthread_create(&p_thread[l],NULL,play_2,(void *)&j);
            if (thr_id < 0)
            {
                perror("thread create error : ");
                exit(0);
            } 
            l++;
            thr_id = pthread_create(&p_thread[l],NULL,play_3,(void *)&j);
            if (thr_id < 0)
            {
                perror("thread create error : ");
                exit(0);
            } 
            l++;
            thr_id = pthread_create(&p_thread[l],NULL,play_4,(void *)&j);
            if (thr_id < 0)
            {
                perror("thread create error : ");
                exit(0);
            } 
            l++;
            a++;
            }
        }   
//9
        if(mytime<90 && 80<mytime){
            if(a==7){
            thr_id = pthread_create(&p_thread[l],NULL,play_1,(void *)&j);
            if (thr_id < 0)
            {
                perror("thread create error : ");
                exit(0);
            } 
            l++;
            thr_id = pthread_create(&p_thread[l],NULL,play_2,(void *)&j);
            if (thr_id < 0)
            {
                perror("thread create error : ");
                exit(0);
            } 
            l++;
            thr_id = pthread_create(&p_thread[l],NULL,play_3,(void *)&j);
            if (thr_id < 0)
            {
                perror("thread create error : ");
                exit(0);
            } 
            l++;
            thr_id = pthread_create(&p_thread[l],NULL,play_4,(void *)&j);
            if (thr_id < 0)
            {
                perror("thread create error : ");
                exit(0);
            } 
            l++;
            a++;
        }
        } 
//10        
        if(mytime<100 && 90<mytime){
            if(a==8){
            thr_id = pthread_create(&p_thread[l],NULL,play_1,(void *)&j);
            if (thr_id < 0)
            {
                perror("thread create error : ");
                exit(0);
            } 
            l++;
            thr_id = pthread_create(&p_thread[l],NULL,play_2,(void *)&j);
            if (thr_id < 0)
            {
                perror("thread create error : ");
                exit(0);
            } 
            l++;
            thr_id = pthread_create(&p_thread[l],NULL,play_3,(void *)&j);
            if (thr_id < 0)
            {
                perror("thread create error : ");
                exit(0);
            } 
            l++;
            thr_id = pthread_create(&p_thread[l],NULL,play_4,(void *)&j);
            if (thr_id < 0)
            {
                perror("thread create error : ");
                exit(0);
            } 
            l++;
            thr_id = pthread_create(&p_thread[l],NULL,play_5,(void *)&j);
            if (thr_id < 0)
            {
                perror("thread create error : ");
                exit(0);
            } 
            l++;
            a++;
        }
        }
//11
        if(mytime<110 && 100<mytime){
            if(a==9){
            thr_id = pthread_create(&p_thread[l],NULL,play_1,(void *)&j);
            if (thr_id < 0)
            {
                perror("thread create error : ");
                exit(0);
            } 
            l++;
            thr_id = pthread_create(&p_thread[l],NULL,play_2,(void *)&j);
            if (thr_id < 0)
            {
                perror("thread create error : ");
                exit(0);
            } 
            l++;
            thr_id = pthread_create(&p_thread[l],NULL,play_3,(void *)&j);
            if (thr_id < 0)
            {
                perror("thread create error : ");
                exit(0);
            } 
            l++;
            thr_id = pthread_create(&p_thread[l],NULL,play_4,(void *)&j);
            if (thr_id < 0)
            {
                perror("thread create error : ");
                exit(0);
            } 
            l++;
            thr_id = pthread_create(&p_thread[l],NULL,play_5,(void *)&j);
            if (thr_id < 0)
            {
                perror("thread create error : ");
                exit(0);
            } 
            l++;
            a++;
            }
        }
//12
        if(mytime<120 && 110<mytime){
            if(a==10){
            thr_id = pthread_create(&p_thread[l],NULL,play_1,(void *)&j);
            if (thr_id < 0)
            {
                perror("thread create error : ");
                exit(0);
            } 
            l++;
            thr_id = pthread_create(&p_thread[l],NULL,play_2,(void *)&j);
            if (thr_id < 0)
            {
                perror("thread create error : ");
                exit(0);
            } 
            l++;
            thr_id = pthread_create(&p_thread[l],NULL,play_3,(void *)&j);
            if (thr_id < 0)
            {
                perror("thread create error : ");
                exit(0);
            } 
            l++;
            thr_id = pthread_create(&p_thread[l],NULL,play_4,(void *)&j);
            if (thr_id < 0)
            {
                perror("thread create error : ");
                exit(0);
            } 
            l++;
            thr_id = pthread_create(&p_thread[l],NULL,play_5,(void *)&j);
            if (thr_id < 0)
            {
                perror("thread create error : ");
                exit(0);
            } 
            l++;
            thr_id = pthread_create(&p_thread[l],NULL,play_6,(void *)&j);
            if (thr_id < 0)
            {
                perror("thread create error : ");
                exit(0);
            } 
            l++;
            a++;
            }
        }
            
            
        
       
    }
    
   

   
