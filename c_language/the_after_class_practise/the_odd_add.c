#include <stdio.h>
int main() {
    int n;
    double sum=0.0;
    if (scanf("%d", &n)!=1||n<=0 )
    {
        printf("Wrong Input");
        return 0;
        } 
    else 
    {
        for(int i=1;i<2*n+1;i+=2)
        {
            double reciprocal=1.0/i;
            sum+=reciprocal;
        }
    }
    printf("sum = %.6f",sum);
    return 0;
}

