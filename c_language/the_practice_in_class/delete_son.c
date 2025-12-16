#include <stdio.h>
#include <string.h>
char* delete_son(char* str,char* son){
        int len_str=strlen(str);
        int len_son=strlen(son);
        int i=0;      
        while(i<=len_str-len_son){
            int j=0;       
            while(str[i+j]==son[j]&&j<len_son){
                j++;
            }
            if(j==len_son){
                for(int m=i+j;m<=len_str;m++){
                    str[m-len_son]=str[m];
                }
                len_str=len_str-len_son;
                }
            else{
                i++;
            }
            
            }
            return str;
        }
int main(){
    char str[100],son[100];
    fgets(str,100,stdin);
    int len=strlen(str);
    if(str[len-1]=='\n'){
        str[len-1]='\0';
    }
    fgets(son,100,stdin);
    int len2=strlen(son);
    if(son[len2-1]=='\n'){
        son[len2-1]='\0';
    }
    char* a=delete_son(str,son);
    printf("%s\n",a);
    return 0;
}