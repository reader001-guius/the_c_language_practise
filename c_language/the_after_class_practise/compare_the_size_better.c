// This code is to compare the size of 3 numbers
#include <stdio.h>
int main(){
    int a,b,c,temp;
    if(scanf("%d %d %d",&a,&b,&c)!=3){
        printf("Input error");
        return 0;
    }
    if(a>b){
        temp=a;
        a=b;
        b=temp;
    }
    if(a>c){
        temp=a;
        a=c;
        c=temp;
    }
    if (b>c){
        temp=b;
        b=c;
        c=temp;
    }
    printf("%d->%d->%d",a,b,c);
    return 0;
}