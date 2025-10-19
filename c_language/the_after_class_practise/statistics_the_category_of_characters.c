//statistics_the_category_of_characters.c
#include <stdio.h>
int main(){
    char character;
    int letter=0;
    int digit=0;
    int blank=0;
    int other=0;
for(int i=1;i<=10;i++){
    character=getchar();
    if(character>='0'&&character<='9'){
        digit++;}
    else if(character>='A'&&character<='Z'||character>='a'&&character<='z'){
        letter++;}
    else if(character==' '||character=='\n'||character=='\t'){
        blank++;}
    else{
        other++;}
    }
    printf("letter = %d, blank = %d, digit =  %d, other = %d",letter,blank,digit,other);
    return 0;
}