#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int sum=0;
    int cir=1;
    int whether=0;
    int i;
    while(cir<n){
    for(i=cir;sum<n;i++){
        sum=sum+i;
        }
        if(sum==n){
            whether=1;
            break;
        }
    else{
    cir++;
    sum=0;
    }
}
if(whether==1){
    printf("%d=",n);
    int j;
    for(j=cir;j<i-1;j++){
        printf("%d+",j);
    }
    if(j==i-1){
        printf("%d",j);
    }
}
else{
    printf("%d:NOANSWER",n);
}
return 0;
}