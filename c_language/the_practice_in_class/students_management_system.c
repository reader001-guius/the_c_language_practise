#include <stdio.h>
int main(){
    
    struct Student
    {
        char name[21];
        int gender;
        int birth_year;
        double height;
        int score[2];
    };
     int n;
    scanf("%d",&n);
    struct Student Students[100];
   
    for(int i=0;i<n;i++){
        scanf("%s %d %d %lf %d %d",Students[i].name,&Students[i].gender,&Students[i].birth_year,&Students[i].height,&Students[i].score[0],&Students[i].score[1]);

    }
    int scores_c=0;
    int scores_calculus=0;
    for(int j=0;j<n;j++){
        scores_c+= Students[j].score[0];
        scores_calculus+= Students[j].score[1];
}
    int average_c=(double)scores_c/n;
    int average_calculus=(double)scores_calculus/n;
    int score_c_max=Students[0].score[0];
    int score_calculus_max=Students[0].score[1];
    int score_c_min=Students[0].score[0];
    int score_calculus_min=Students[0].score[1];
    int k;
    for(k=0;k<n;k++){
        if(Students[k].score[0]>score_c_max){
            score_c_max=Students[k].score[0];
        }
        if(Students[k].score[1]>score_calculus_max){
            score_calculus_max=Students[k].score[1];
        }
    }
    for(k=0;k<n;k++){
        if(Students[k].score[0]<score_c_min){
            score_c_min=Students[k].score[0];
        }
        if(Students[k].score[1]<score_calculus_min){
            score_calculus_min=Students[k].score[1];
        }
    }
    printf("C_average:%d\nC_max:%d\n",average_c,score_c_max);
    for(k=0;k<n;k++){
    if(Students[k].score[0]==score_c_max){
        printf("%s %d %d %.2lf %d %d\n",Students[k].name,Students[k].gender,Students[k].birth_year,Students[k].height,Students[k].score[0],Students[k].score[1]);
    }}
    printf("Calculus_average:%d\nCalculus_max:%d\n",average_calculus,score_calculus_max);
    printf("C_min:%d",score_c_min);
    for(k=0;k<n;k++){
    if(Students[k].score[1]==score_calculus_max){
        printf("%s %d %d %.2lf %d %d\n",Students[k].name,Students[k].gender,Students[k].birth_year,Students[k].height,Students[k].score[0],Students[k].score[1]);
    }}
    printf("Calculus_min:%d",score_calculus_min);
    return 0;
}

    




