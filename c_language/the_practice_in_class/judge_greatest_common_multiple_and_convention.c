#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int c;
    if(a<b){
        c=a;
    }
    else{
        c=b;
    }
    while(a%c!=0 || b%c!=0  ){
        c--;
    }
    
    int f=a/c;
    int g=b/c;
    int h=c*f*g;
    printf("%d %d",c,h);
    return 0;
}