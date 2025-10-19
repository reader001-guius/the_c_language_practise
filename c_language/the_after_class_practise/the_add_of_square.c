//compute the sum of squares of first n natural numbers
#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    if(scanf("%d",&n)!=1||n<=0){
        printf("Invalid input\n");
        return 0;
    }
    double sum=0.0;
    for(double i=1;i<=n;i++){
        sum+=sqrt(i);
    }
    printf("sum = %.2f",sum);
    return 0;   
}
