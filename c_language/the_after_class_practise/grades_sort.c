#include <stdio.h>
void sort_scores(int scores[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            if(scores[j]>scores[j+1]){
                int temp=scores[j];
                scores[j]=scores[j+1];
                scores[j+1]=temp;
            }
        }
    }
}
int find_scores(int scores[],int n,int target){
    int is_true=0;
    for(int i=0;i<n;i++){
        if(scores[i]==target){
            is_true=1;
            break;
        }}
        return is_true;
}
int main(){
    int n;
    scanf("%d",&n);
    int scores[100];
    for(int i=0;i<n;i++){
        scanf("%d",&scores[i]);
    }
    int target;
    scanf("%d",&target);
    sort_scores(scores,n);
    for(int i=0;i<n;i++){
        printf("%d ",scores[i]);
    }
    printf("\n");
    int is_true=find_scores(scores,n,target);
    if(is_true==1){
        printf("true");
    }
    else{
        printf("false");
    }
    return 0;
}