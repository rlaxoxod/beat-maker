
#include "timetime.h"


float mytime=0.00;
/*
void sleep(unsigned long useconds);
int usleep(useconds usec);
*/

void  *time_function(void *data)  // 함수의 리턴 밸류도 void*, argument도 void*입니다.
{                                                  // argument는 하나만 되므로 union이나 struct를
    int id;                                       // void* 로 type casting하셔서 넣으시면 됩니다.
    //int i = 0;                                   // 이것도 함수랑 마찬가지라 전역변수는 그대로 쓸 수 있습니다.
    id = *((int *)data);

    while(1)
    {
        // printf("%d : %f\n", id,mytime );    //나중에 지울 것
        usleep(10000);
        mytime=mytime+0.01;
        
        if(mytime>125.0){
          
            return 0;
        }
    }
}

