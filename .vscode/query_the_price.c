// This code is to query the price of the fruits.
#include <stdio.h>
int main(){
    printf("[1] apple\n[2] pear\n[3] orange\n[4] grape\n[0] exit\n");
    int input;
    for(int i=1;i<=5;i++){
        scanf("%d",&input);
        switch(input){
            case 1:
                printf("price = 3.00\n");
                break;
            case 2:
                printf("price = 2.50\n");
                break;  
            case 3:
                printf("price = 4.10\n");
                break;        
            case 4:     
                printf("price = 10.20\n");
                break;  
            case 0:
                return 0;
            default:
                printf("price = 0.00\n");
        }
    }
    return 0;
    }