#include <stdio.h>
#include <string.h>
void invert(char s[]){
    int n=strlen(s);
    for(int i=0;i<n/2;i++){
        char temp=s[i];
        s[i]=s[n-1-i];
        s[n-1-i]=temp;
    }
};
int main(){
    int n;
    scanf("%d",&n);
    char arr[100][100];
    for(int i=0;i<n;i++){
        scanf("%s",arr[i]);
    }
    for(int i=0;i<n;i++){
        invert(arr[i]);
        printf("%s\n",arr[i]);
    }
    return 0;
}