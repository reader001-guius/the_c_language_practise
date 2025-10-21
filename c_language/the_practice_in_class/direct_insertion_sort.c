#include <stdio.h>
int main()
{
    int arr[50];
    for(int i=0;i<50;i++)
    scanf("%d",&arr[i]);

    
    
    for(int i=1;i<50;i++){
        
     
            for(int j=i;arr[j]<arr[j-1]&&j>0;j--){
            int temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;}
        }
    for(int t=0;t<50;t++){
        printf("%d ",arr[t]);
    }
    return 0;
}


