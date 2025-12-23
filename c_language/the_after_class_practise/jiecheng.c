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
        for(int i=0;i<n;i++){
            for(int j=1;j<=n-i;j++){
                mult=mult*j;
            }
            sum=sum+mult;
            mult=1;
        }
    printf("%d",sum);
    return 0;
}
}