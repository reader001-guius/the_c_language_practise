#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char* str_bin(char* str1, char* str2) {
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	char* str3;
	str3 = (char*)malloc(len1 + len2+1);
	int i = 0;
	int k = 0;
	int m = 0;
	while(i<len1&&k<len2){
        if(str1[i]>=str2[k]){
            str3[m]=str2[k];
            m++;
            k++;
        }
        if(str1[i]<str2[k]){
            str3[m]=str1[i];
            i++;
            m++;
        }}
        if(i==len1){
            while(k<len2){
                str3[m]=str2[k];
                k++;
                m++;
            }
        }
        if(k==len2){
            while(i<len1){
                str3[m]=str1[i];
                m++;
                i++;
            }
        }
        str3[m]='\0';
	return str3;
}
int main() {
	char str1[100];
	char str2[100];
	scanf("%s", str1);
	scanf("%s", str2);
	char* str3 = str_bin(str1, str2);
	printf("%s", str3);
    free(str3);
	return 0;
}