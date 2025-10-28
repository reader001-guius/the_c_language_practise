#include <stdio.h>
int main(){
    int table[100];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&table[i]);
    }
    for(int i=1;i<n;i++){
        int j=i;
        int t=table[j];
        while(j>0&&t<table[j-1]){  
            table[j]=table[j-1];
            j=j-1;
        }
        table[j]=t;
    }
    for(int i=0;i<n;i++){
        printf("%d ",table[i]);
    }
    return 0;
}

    

    


    

