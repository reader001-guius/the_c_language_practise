#include <stdio.h>
#include <string.h>
int main(){
    int n;
    scanf("%d",&n);
    char arr[100][100];
    char* point[100];
    for(int i=0;i<n;i++){
        scanf("%s",arr[i]);
        point[i]=arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
           if(strcmp(point[j],point[j+1])>0){
            char* temp=point[j];
            point[j]=point[j+1];
            point[j+1]=temp;
           } 
        }
    }
    for(int i=0;i<n;i++){
        printf("%s\n",point[i]);
    }
    return 0;
}