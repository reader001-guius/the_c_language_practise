#include <stdio.h>
int main(){
    char mem;
    scanf("%c",&mem);
    if(mem=='a'){
        printf("z");
    }
    if(mem=='b'){
        printf("x");
    }
    if(mem=='c'){
        printf("y");
    }
    if(mem=='x'){
        printf("b");
    }
    if(mem=='y'){
        printf("c");
    }
    if(mem=='z'){
        printf("a");
    }
    return 0;
}