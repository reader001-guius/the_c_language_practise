#include <stdio.h>
void haoni(int n,char src,char aux,char dest){
    if(n==0){
        return 0;
    }
     haozi(n-1,src,aux,dest);
    haozi(n-1,src,aux,dest);
    haozi(n-1,dext,src,aux);
    haozi(1,src,aux,dest);
    haozi(n-1,aux,src,dext);
}
