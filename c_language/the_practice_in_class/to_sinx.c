#include <stdio.h>
#include <math.h>
int main(){
    double sum=0;
    int n;
    double x,term;
    scanf("%lf %d",&x,&n);
    sum=x;
    term=x;
    for(int i=1;i<n;i++){
        term=(double)term*x*x*(-1.0)/(double)((2*i+1)*(2*i));
        sum+=term;     
    }
    printf("%.8lf",sum);
    return 0;
}