#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[10][10];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int num=0;
    for(int i=1;i<n-1;i++){
        for(int j=1;j<n-1;j++){
            int m=i;
            int h=j;
            if(arr[m][h]==0){
                while(arr[m][h]!=1){
                    m--;
                    if(m==0){
                        break;
                    }
                }
                if(arr[m][h]==1){
                    m=i;
                    while(arr[m][h]!=1){
                        m++;
                        if(m==n-1){
                            break;
                        }
                    }
                    if(arr[m][h]==1){
                        m=i;
                        while(arr[m][h]!=1){
                            h--;
                            if(h==0){
                                break;
                            }
                        }
                        if(arr[m][h]==1){
                            h=j;
                            while(arr[m][h]!=1){
                                h++;
                                if(h==n-1){
                                    break;
                                }
                            }
                            if(arr[m][h]==1){
                                num++;
                            }
                        }
                    }
                }
            }
        }
    }
    printf("%d",num);
    return 0;
}