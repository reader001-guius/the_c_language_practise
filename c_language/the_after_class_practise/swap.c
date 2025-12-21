#include <stdio.h>
#include <string.h>
int main(){
    char arr[100];
    if(scanf("%s",arr)==0){
        printf("error");
    }
    for(int i=0;arr[i]!='\0';i++){
        if(!(arr[i]>='a'&&arr[i]<='z'||arr[i]>='A'&&arr[i]<='Z')){
            printf("error");
            return 0;
        }
        if(arr[i]>='w'||arr[i]>='W'&&arr[i]<='Z'){
            arr[i]=arr[i]-22;
        }
        else{
            arr[i]=arr[i]+4;
        }
    }
    char arr2[100];
    int len1=strlen(arr);
    if(len1<20){
        for(int i=0;i<len1;i++){
            arr2[i]=arr[i];
            if(i==len1-1){
                arr2[i+1]='\0';
            }
        }
    }
    else{
    for(int i=0;i<20;i++){
        arr2[i]=arr[i];
        if(i==19){
            arr2[i+1]='\0';
        }
    }}
    printf("%s",arr2);
    return 0;
}