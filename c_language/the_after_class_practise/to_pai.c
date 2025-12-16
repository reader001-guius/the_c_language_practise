#include <stdio.h>
int main(){
    double e;
    scanf("%lf",&e);
    double n1=1.0;
    int n=1;
    double sum=0.0;
    while(1){
        n1=4*1.0/(2.0*n-1.0);
        if(n%2==0){
            sum=sum-n1;
        }
        else{
            sum=sum+n1;
        }      
        if(n1<=e){
            break;
        }
         n++;
    }
    printf("%d",n);
    return 0;
}