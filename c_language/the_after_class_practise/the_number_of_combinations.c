#include <stdio.h>
double fact(int n){
    double num=1.0;
    for(int i=1;i<=n;i++){
        num*=i;  
    }
    return num;
}
int main(){
    int m,n;
    if(scanf("%d %d",&m,&n)!=2||m<=0||n<=0||m>n){
        printf("Wrong Input");
        return 0;
    }
    double result=fact(n)/(fact(m)*fact(n-m));
    printf("result = %.0f",result);
    return 0;
}
