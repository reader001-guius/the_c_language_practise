#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    scanf("%s",str);
    char *p=str;
    int num=0;
    int count=0;
    for(int i=0;i<strlen(str);i++){
        if(*(p+i)>='a'&&*(p+i)<='z'||*(p+i)>='A'&&*(p+i)<='Z'){
            count+=1;}
        else if(*(p+i)>='0'&&*(p+i)<='9'){
            num+=1;
        }}
    printf("字母个数：%d\n",count);
    printf("数字个数：%d\n",num);
    return 0;
    }
