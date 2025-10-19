//compute the sum of sfactorials of1!+2!+3!+⋯
#include<stdio.h>
int main()
{
    int n;
    if(scanf("%d",&n)!=1||n<=0){
        printf("Invalid input\n");
        return 0;
    }
    unsigned long int sum_2=0;
    for(int i=1;i<=n;i++){
        unsigned long int sum_1=1;
        for(int j=1;j<=i;j++){
          sum_1*=j;
        }
        sum_2+=sum_1;
    }
    printf("%lu",sum_2);
    return 0;
}