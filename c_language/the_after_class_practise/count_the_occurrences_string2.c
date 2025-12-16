#include <stdio.h>
#include <string.h>
int Substr(char *str,char *substr){
    if(substr==NULL||*substr=='\0'){
        return 0;
    }
    int count=0;
    char *p=str;
    while((p=strstr(p,substr))!=NULL){
        count++;
        p+=strlen(substr);
    }
    return count;
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
    int count=Substr(str,substr);
    printf("match times=%d\n",count);
    return 0;
}