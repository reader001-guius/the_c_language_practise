#include <stdio.h>
int main(){
    int n,k;
    int pot=1;
    double sum = 1.0;
    if(scanf("%d", &n) != 1 || n <= 0){
        printf("Wrong Input");
        return 0;
    }
    for(int i = 1; i < n; i++){
        k=3*i+1;
        pot=pot*-1;
        sum+=pot*1.0/k;
    }
    printf("sum = %.3f", sum);
    return 0;       
}