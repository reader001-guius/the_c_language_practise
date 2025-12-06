#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char arr[100][100];
    int temp[100];
    int tem;
    int n=0;
    while(fgets(arr[n],sizeof(arr[n]),stdin)!=NULL&&arr[n][0]!='\n'){      
            temp[n]=n;
            n++;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n-1-i;j++){
                if(strcmp(arr[temp[j]],arr[temp[j+1]])>0){
                    tem=temp[j];
                    temp[j]=temp[j+1];
                    temp[j+1]=tem;
                }
            }            
        }
        for(int k=0;k<n;k++){
            printf("%s",arr[temp[k]]);
        }
    return 0;
    }
    
