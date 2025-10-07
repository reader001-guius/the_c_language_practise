//statistics the average and the pass numbers of students's grades
#include <stdio.h>

int main() {
    int num;
    int grade;
    int sum = 0;
    int pass_num = 0;
    if(scanf("%d", &num)!=1 || num < 0) {
        return 0;
    }
    if(num == 0) {
        printf("average = 0.0\n");
        printf("count = 0");
        return 0;
    }
    else{
    for(int i = 0; i < num; i++)
    {
        if(scanf("%d", &grade)!=1 || grade < 0 || grade > 100) {
            return 0;
        }
        sum += grade;
        if(grade >= 60)
        pass_num++;      
    }
    printf("average = %.1f\n", (double)sum / num);
    printf("count = %d", pass_num);
    return 0;
}
}
