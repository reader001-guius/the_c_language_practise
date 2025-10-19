//output the leap years between 2004 and the given year (inclusive).
#include <stdio.h>
int main(){
 int year;
 scanf("%d",&year);
 if(year<=2000||year>2100){
 printf("Invalid year!");
return 0;
 }
 if(year<=2004){
    printf("None");
    return 0;
 }
 for(int i=2004;i<=year;i+=4){
    if(i%100==0&&i%400!=0)
    continue;
    printf("%d\n",i);
 }
return 0;
}