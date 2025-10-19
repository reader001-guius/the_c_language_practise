#include <stdio.h>
int main() {
    int N;
    double sum = 0.0;
    if(scanf("%d", &N) != 1 || N <= 0) {
        printf("Wrong Input");
        return 0;
    }
    for(int i=1; i<=N; i++){
        double reciprocal = 1.0 / i;
        sum+=reciprocal;
    }
    printf("sum = %.6f",sum);
    return 0;
}
