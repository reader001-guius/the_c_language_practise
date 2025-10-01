#include <stdio.h>
int main() {
    int n;
    double sum=0.0;
    scanf("%d", &n);
    if (n%2 == 0 )
    {
        printf("Wrong Input");
        } 
    else 
    {
        for(int i=1;i<=n;i+=2)
        {
            double reciprocal=1.0/i;
            sum+=reciprocal;
        }
    }
    printf("Sum=%.6lf",sum);
    return 0;
}

