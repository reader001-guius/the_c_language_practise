#include <stdio.h>
#include<windows.h>
int main(){
    struct digital_clock
    {
        int hour;
        int minute;
        int second;
    };
    struct digital_clock clock={0,0,0};
    printf("时：分：秒\n");
    for(int i=0;i<1000000000;i++)
    {
        clock.second++;
        if(clock.second==60){
            clock.second=0;
            clock.minute++;}
        if(clock.minute==60){
            clock.minute=0;
            clock.hour++;}
        if(clock.hour==24){
            clock.hour=0;
            }
        Sleep(1000);
        printf("%02d:%02d:%02d\r",clock.hour,clock.minute,clock.second);
    }
    return 0;
}

    
    


