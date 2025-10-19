#include <stdio.h>
int main() {
    int n;
    int num=1;
    if(scanf("%d", &n) != 1 || n < 0) {
        printf("Wrong Input");
        return 0;
    }
    for(int i = 0; i <= n; i++) {
        printf("pow(3,%d) = %d\n", i,num);
        num*=3;
        }
    return 0;
}
        

    