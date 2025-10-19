//compute the sum of sfactorials of1!+2!+3!+⋯
#include <stdio.h>

int main() {
    int n;
    if(scanf("%d",&n)!=1){
        printf("Invalid input\n");
        return 0;
    }
    unsigned long long sum=0;
    unsigned long long factorial=1;
    for(int i=1;i<=n;i++){
        factorial*=i;
        sum+=factorial;
    } 
    printf("%lu",sum);
    return 0; 
}
