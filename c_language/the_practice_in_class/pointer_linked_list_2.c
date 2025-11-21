#include <stdio.h>
int main()
{
    char str[100][100];
    int n;
    scanf("%d",&n);
    char *p[100];
    for(int i=0;i<n;i++){
        scanf("%s",str[i]);
        p[i]=str[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(strcmp(*(p[i+j]),*(p[i+j+1]))>0){
                char *temp=p[i+j];
                p[i+j]=p[i+j+1];
                p[i+j+1]=temp;
            }
            }
        }
    }
