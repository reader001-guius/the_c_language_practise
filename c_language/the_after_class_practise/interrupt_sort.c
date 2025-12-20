#include <stdio.h>
int main(){
    int arr[100];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int right=0;
    while(right<n){
    int min=right;
    int move;
    int temp;
    int bool_is=0;
    for(int i=right;i<n;i++){
        if(arr[min]>arr[i]){
            min=i;
        }}
    int k=right-1;
    temp=arr[min];
    for(;k>0;k--){
        if(arr[min]>arr[k]){
            move=k;
            break;
        }
    }
    if(right==0){
            move=0;
        }
    if(k==0){
        if(arr[min]>arr[0]){
            move=0;
        }
        else{
            move=0;
            bool_is=-1;
        }
    }
    for(int l=min;l>move;l--){
        arr[l]=arr[l-1];
    }
    if(bool_is==0){
    arr[move+1]=temp;
    }
    if(bool_is==-1){
        int tep=arr[0];
        arr[0]=temp;
        arr[1]=tep;
    }
    right++;
}
for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}
return 0;
}

    