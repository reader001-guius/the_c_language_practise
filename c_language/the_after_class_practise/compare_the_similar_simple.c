#include <stdio.h>
int main(){
    char arr[100];
    if(scanf("%s",arr)==0){
        printf("error");
        return 0;
    }
    for(int i=0;arr[i]!='\0';i++){
        if(arr[i]>='A'&&arr[i]<='Z'){
            arr[i]=(arr[i]-'A'+4)%26+'A';
        }
        else if(arr[i]>='a'&&arr[i]<='z'){
            arr[i]=(arr[i]-'a'+4)%26+'a';
        }
        else{
            printf("error");
            return 0;
        }
        }
        printf("%.20s",arr);
        return 0;
    }
