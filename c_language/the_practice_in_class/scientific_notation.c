#include <stdio.h>
#include <math.h>
int main(){
    char arr[100];
    scanf("%s", arr);
    char *ptr=arr;
    double num=0.0;
    int sign=1,sign2=1;
    double point=0.10;
    int exp=0;
    if(*ptr=='-'){
        sign=-1;
        ptr++;
    }
    else if(*ptr=='+'){
        ptr++;
    }
    while(*ptr>='0'&&*ptr<='9'){
        num=num*10+(*ptr-'0');
        ptr++;
    }
    if(*ptr=='.'){
        ptr++;}
        while(*ptr>='0'&&*ptr<='9'){
            num=num+(*ptr-'0')*point;
            ptr++;
            point=point*0.10;
        }
    if(*ptr=='e'||*ptr=='E'){
        ptr++;
    }
        if(*ptr=='-'){
            sign2=-1;
            ptr++;
        }
        else if(*ptr=='+'){
            ptr++;
        }
        while(*ptr>='0'&&*ptr<='9'){
            exp=exp*10+(*ptr-'0');
            ptr++;
        }
        if(sign2==1){
            num=num*pow(10.0,exp);
            }
        else{
            num=num/pow(10.0,exp);
            }
    printf("%f\n",num*sign);
    return 0;        
}
