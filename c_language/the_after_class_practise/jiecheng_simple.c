#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    if(n<1||n>10){
        printf("error");
        return 0;
    }
    else{
        int mult=1;
        int sum=0;
        for(int i=1;i<=n;i++){
            mult=mult*i;
            sum=sum+mult;
        }
        printf("%d",sum);
        return 0;
}
}