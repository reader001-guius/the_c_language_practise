#include <stdio.h>
struct Date{
    int year;
    int month;
    int day;
};
int main(){
    int total1=0,total2=0;
    struct Date data1,data2;
    scanf("%d %d %d",&data1.year,&data1.month,&data1.day);
    scanf("%d %d %d",&data2.year,&data2.month,&data2.day);
    int num_runyear1=data1.year/4-data1.year/100+data1.year/400;
    int num_runyeaer2=data2.year/4-data2.year/100+data2.year/400;
    total1+=data1.year*365+num_runyear1;
    total2+=data2.year*365+num_runyeaer2;
    int months[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    for(int i=0;i<data1.month-1;i++){
        total1+=months[i];
    }
    for(int j=0;j<data2.month-1;j++){
        total2+=months[j];
    }
    if(data1.year%400==0||data1.year%4==0&&data1.year%100!=0){
        if(data1.month>2){
            total1+=1;
        }
    }
    if(data2.year%400==0||data2.year%4==0&&data2.year%100!=0){
        if(data2.month>2){
            total2+=1;
        }
    }
    total1+=data1.day;
    total2+=data2.day;
    int diff=total2-total1;
    printf("%d",diff);
    return 0;
}