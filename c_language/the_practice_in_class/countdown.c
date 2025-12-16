#include <stdio.h>
#include <math.h>
int main(){
    int n;
    scanf("%d",&n);
    int temp=n;
    int num=0;
    while(temp!=0){
        temp=temp/10;
        num++;
    }
    int sum=n;
    int arr[100]; 
    for(int i=0;i<=num;i++){
        arr[i]=temp;
        sum=sum-temp*pow(10,num-i);
        temp=sum;
        while(temp!=0){
            temp=temp%10;
    }}
    int ni=0;
    for(int i=0;i<=num;i++){
        ni=ni+arr[i]*pow(10,i);
    }
    if(ni>=n&&ni%n==0){
        printf("%d*%d=%d",n,ni/n,ni);
    }
    else{
        printf("%d %d",n,ni);
    }
    return 0;
}
        
        
