#include <stdio.h>
int loop(int x){
    int sum=0;
    int m=x;
    while(x>0){
    int a=x%10;
    sum=sum*10+a;
    x=x/10;
}
    if (sum==m)
        return 1;
    else
        return 0;}
    
int main() {
   int a,b;
   scanf("%d %d",&a,&b);
   for(int i=a;i<=b;i++){
       if(loop(i)==1)
           printf("%d\n",i);
       
    }
    return 0;}