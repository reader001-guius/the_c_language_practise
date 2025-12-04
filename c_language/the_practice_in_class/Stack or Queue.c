#include <stdio.h>
int stack(int n,int arrin[100],int arrout[100]){
    int i=0;
    while(arrin[n-1-i]==arrout[i]){
        i++;
        if(i==n){
            return 1;
        }
    }
    return 0;
    }
int compare(int n,int arrin[100],int arrout[100]){
    int i=0;
    while(arrin[i]==arrout[i]){
        i++;
        if(i==n){
            return 1;
        }
    }
    return 0;
}
int main(){
    int n;
    int answer[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int m;
        scanf("%d",&m);
        int arrin[100];
        int arrout[100];
        for(int j=0;j<m;j++){
            scanf("%d",&arrin[j]);
        }
        for(int k=0;k<m;k++){
            scanf("%d",&arrout[k]);
        }
        if(compare(m,arrin,arrout)==1&&stack(m,arrin,arrout)==1){
            answer[i]=3;
        }
        else if(compare(m,arrin,arrout)==1){
            answer[i]=2;
        }
        else if(stack(m,arrin,arrout)==1){
            answer[i]=1;
        }
        else{
            answer[i]=0;
        }
    }
    for(int i=0;i<n;i++){
        if(answer[i]==3){
            printf("both\n");
        }
        else if(answer[i]==2){
            printf("queue\n");
        }
        else if(answer[i]==1){
            printf("stack\n");
        }
        else{
            printf("neither\n");
        }
    }
    return 0;
}

