#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(a<b){
        int temp=a;
            a=b;
            b=temp;
        }
    int a1=a;
    int b1=b;
    while(b!=0){
    int temp=a%b;
    a=b;
    b=temp;
}
    int yue=a;
    int bei=(a1/a)*(b1/a)*a;
    printf("%d %d\n",yue,bei);
    return 0;
}