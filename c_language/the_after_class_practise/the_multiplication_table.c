#include <stdio.h>
int main() {
    int table[9][9];
    for(int i=1;i<=9;i++){
        for(int k=1;k<=i;k++){
            table[i-1][k-1]=i*k;
            }
    }
    int a,b;
    scanf("%d %d",&a,&b);
    if (a<b){
        int c=a;
        a=b;
        b=c;
    }

    printf("%d\n",table[a-1][b-1]);
    return 0;
    }
