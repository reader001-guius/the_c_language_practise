#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int zhen1[10][10];
    int zhen2[10][10];
    int zhen3[10][10];
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&zhen1[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&zhen2[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            sum=0;
            for(int k=0;k<n;k++){
                sum+=zhen1[i][k]*zhen2[k][j];                
            }
            zhen3[i][j]=sum;         
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%10d",zhen3[i][j]);
        }
        printf("\n");
    }
    return 0;
}