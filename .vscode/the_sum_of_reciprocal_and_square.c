#include <stdio.h>
double square_sum(int m,int n){
    double sum=0;
    for(int i=m;i<=n;i++){
        sum+=i*i;
    }
    return sum;
    }
double reciprocal_sum(int m,int n){
    double sum=0;
    for(int i=m;i<=n;i++){
        sum+=1.0/i;
    }
    return sum;
}
int main(){
    int m,n;
    if(scanf("%d %d",&m,&n)!=2||m<=0||n<=0||m>n){
        printf("Wrong Input");
        return 0;
    }
    double sum=square_sum(m,n)+reciprocal_sum(m,n);
    printf("sum = %.6f",sum);
    return 0;
}

