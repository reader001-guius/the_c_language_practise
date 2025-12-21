#include <stdio.h>
int main(){
    FILE* fpin;
    FILE* fpout;
    fpin=fopen("input.c","r");
    fpout=fopen("output.c","w");
    char str[100];
    while(!feof(fpin)){
        fscanf(fpin,"%s",str);
        fputs(str,fpout);
    }
    
        }
    }



}