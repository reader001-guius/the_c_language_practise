//convert_the_grades_of_N_students.c
#include <stdio.h>
int main(){
    int n;
    int a=0,b=0,c=0,d=0,e=0;
    if(scanf("%d",&n)!=1||n<=0){
        printf("Input error");
        return 0;
    }
    for(int i=1;i<=n;i++){
        int score;
        if(scanf("%d",&score)!=1||score<0||score>100){
            printf("Input error");
            return 0;
        }
        if(score>=90){
            a++;
        }
        else if(score>=80){
            b++;
        }
        else if(score>=70){
            c++;
        }
        else if(score>=60){
            d++;
        }
        else{
            e++;
        }
    }
     printf("%d %d %d %d %d\n",a,b,c,d,e);
     return 0;
}