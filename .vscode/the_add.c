#include <stdio.h>
int main() {
    int N;
    double sum = 0;
    scanf("%d", &N);
    for(int i=1; i<=N; i++){
        double reciprocal = 1.0 / i;
        sum+=reciprocal;
    }
    printf("Sum=%.6lf",sum);
    return 0;
}
