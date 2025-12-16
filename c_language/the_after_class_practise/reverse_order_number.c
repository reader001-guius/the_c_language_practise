#include <stdio.h>
#include <math.h>
int main(){
    int n;
    scanf("%d",&n);
    int n0=n;
    int arr[100];
    int i=0;
    while(n0!=0){
        arr[i]=n0%10;
        i++;
        n0=n0/10;
    }
    int sum=0;
    for(int j=0;j<i;j++){
        sum=sum+arr[j]*pow(10,i-j-1);
    }
    if(sum%n==0){
        printf("%d*%d=%d",n,sum/n,sum);
    }
    else{
        printf("%d %d",n,sum);
        }
        return 0;
}