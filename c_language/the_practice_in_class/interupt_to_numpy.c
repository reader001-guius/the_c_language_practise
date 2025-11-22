#include<stdio.h>
int main(){
    int arr[11]= {1,4,6,9,13,16,19,28,40,100};
    int n;
    scanf("%d",&n);
    int i=0;
    while(n>arr[i]){
        i++;
        if(i==10){
            break;
        }
    }
    if(i==10){
        arr[10]=n;
    }
    else{
    for(int f=9;f>=i;f--){
        arr[f+1]=arr[f];
}
    arr[i]=n;}
    for(int j=0;j<11;j++){
        printf("%d ",arr[j]);
    }
    return 0;
}