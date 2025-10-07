//1-2/3+3/5-4/7+5/9-6/11+... = ?
#include <stdio.h>
int main() {
    int negative = 1;
    int n;
    double sum = 0.0;
    if(scanf("%d",&n)!=1||n<=0){
        printf("Invalid input\n");
        return 0;
    }
    for(int i=1,k=1;i<=n,k<=2*n; i++,k+=2) {
        sum+=(double)i/k*negative;
        negative*=-1;
    }
    printf("%.3f",sum);
    return 0;
}
        

