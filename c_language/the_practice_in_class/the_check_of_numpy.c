#include <stdio.h>
int main(){
    int n;
    int number[40];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&number[i]);
    }
    int f;
    int number_2[40];
    scanf("%d",&f);
    for(int h=0;h<f;h++){
        scanf("%d",&number_2[h]);
    }
    int number_3[40];
    int a=0;
     for(int i=0;i<n;i++){
        int true=0;
           for(int h=0;h<f;h++){
            if(number_2[h]==number[i]){
                true=1;
                break;
            }}
            if(true==0){
            number_3[a]=number[i];
            a++;}
           }
           int t=0;
        for(int i=0;i<a;i++){
            for(int j=0;j<a-1-i;j++){
            if(number_3[j]>number_3[j+1]){
            t=number_3[j+1];
            number_3[j+1]=number_3[j];
            number_3[j]=t;}    
    }}
    for(int i=0;i<a;i++){
        printf("%d ",number_3[i]);
    }
    return 0;
}