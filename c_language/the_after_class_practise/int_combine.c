#include <stdio.h>
#include <math.h>
int main(){
    unsigned short x,y;
    scanf("%hu %hu",&x,&y);
    int arr1[20],arr2[20];
    for(int i=0;i<16;i++){
        arr1[i]=x%2;
        x=x/2;
        }
    for(int j=0;j<16;j++){
        arr2[j]=y%2;
        y=y/2;
        }
   for(int k=0;k<8;k++){
        arr1[k]=arr2[k+8];
        }
        int sum=0;
   for(int l=0;l<16;l++){
        int n=arr1[l]*pow(2,l);
        sum=sum+n;
        }
        printf("%d",sum);
        return 0;
    }   