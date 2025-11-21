#include <stdio.h>
int main(){
    int n,m;
    int great[10];
    int great_n[10];
    int great_m[10];
    int k=0;
    scanf("%d %d",&n,&m);
    int arr[10][10];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<n;i++){
    int temp[10];
    int d=0;
    int max=arr[i][0];
    for(int j=0;j<m;j++){ 
        if(arr[i][j]>max){
            max=arr[i][j];
        }}
    for(int j=0;j<m;j++){
        if(arr[i][j]==max){
            temp[d]=j;
            d++;
        }}
    for(int t=0;t<d;t++){
    int max_1=arr[i][temp[t]];
    for(int j=0;j<n;j++){ 
        if(arr[j][temp[t]]>max_1){
            max_1=arr[j][temp[t]];
        }}
    if(arr[i][temp[t]]==max_1){
        great[k]=arr[i][temp[t]];
        great_n[k]=i;
        great_m[k]=temp[t];
        k++;
        }
    }}
    for(int i=0;i<k;i++){
        printf("%d %d %d\n",great[i],great_n[i]+1,great_m[i]+1);
            }
    return 0;
        }
