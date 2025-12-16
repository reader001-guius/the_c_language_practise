#include <stdio.h>
#include <string.h>
int substrnum(char *str,char *substr){
    int n=0;
    int j=0;
    for(int i=0;str[i]!='\0';i++){
        int h=i;
        j=0;
        while(str[h]==substr[j]){
            j++; 
            h++;
            if(substr[j]=='\0'){
                n++;
                break;
                i=h-1;
            }
        }
    }
    return n;
}
int main(){
    char str[100],substr[100];   
    fgets(str,100,stdin);
    int len=strlen(str);
    if(str[len-1]=='\n'){
        str[len-1]='\0';
    }
    fgets(substr,100,stdin);
    int len2=strlen(substr);
    if(substr[len2-1]=='\n'){
        substr[len2-1]='\0';
    }
    int count=substrnum(str,substr);
    printf("match times=%d\n",count);
    return 0;
}