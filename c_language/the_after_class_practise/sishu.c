#include <stdio.h>
int sushu(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return 1;
        }
    }
    return 0;
}
int main(){
    int n;
    scanf("%d",&n);
    if(sushu(n)==0){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
}