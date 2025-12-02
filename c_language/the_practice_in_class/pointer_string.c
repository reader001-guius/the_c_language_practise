#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int length(const char *s){
    int len=0;
    while(*(s+len)!='\0'){
        len++;
    }
    return len;
}
char* my_strcat(const char *s1, const char *s2){
    int len1=length(s1);
    int len2=length(s2);
    char *s3=(char*)malloc((len1+len2+1)*sizeof(char));
    for(int i=0;i<len1;i++){
        s3[i]=s1[i];
    }
    for(int j=0;j<=len2;j++){
        s3[len1+j]=s2[j];
    }
    return s3;
}
int main(){
    char str1[MAX], str2[MAX];
    scanf("%99s", str1);
    scanf("%99s", str2);
    printf("Length of first string: %d\n",length(str1));
    printf("Length of second string: %d\n",length(str2));
    printf("Copied string: %s\n",str1);
    printf("Concatenated string: %s\n",my_strcat(str1,str2));
    return 0;
    }
    