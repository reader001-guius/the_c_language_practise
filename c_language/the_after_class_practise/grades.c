#include <stdio.h>
void sort_scores(int scores[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(scores[j]>scores[j+1]){
                int temp=scores[j];
                scores[j]=scores[j+1];
                scores[j+1]=temp;
            }
        }
    }
}
int find_score(int scores[],int n,int target){
    for(int i=0;i<n;i++){
        while(scores[i]<target){
            i++;
        }
        if(scores[i]==target){
            return 1;
        }
        else{
            return 0;
        }
    }
}
int main(){
    int n;
    int arr[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int target;
    scanf("%d",&target);
    sort_scores(arr,n);
    for(int j=0;j<n;j++){
        printf("%d",arr[j]);
    }
    printf("\n");
    int num=find_score(arr,n,target);
    if(num==1){
        printf("true");
    }
    else{
        printf("false");
    }
    return 0;
}