#include <stdio.h>
#include <string.h>
void str_bin(char* str1,char* str2){
    int len1=strlen(str1);
    int len2=strlen(str2);
    str1=strcat(str1,str2);
    for(int i=len1;i<len1+len2;i++){
        int temp=str1[i];
        int j=i-1;
        while(j>=0&&str1[j]>temp){
            str1[j+1]=str1[j];
            j--;
        }
        str1[j+1]=temp;
    }
    int same=0;
    for(int k=0;k<len1+len2-1-same;k++){
        if(str1[k]==str1[k+1]){
            for(int l=k;l<len1+len2-same;l++){
                str1[l]=str1[l+1];
            }
            same++;
            k--;
        }
    }
}
int main(){
    char str1[200],str2[100];
    scanf("%s",str1);
    scanf("%s",str2);
    str_bin(str1,str2);
    printf("%s",str1);
    return 0;
}