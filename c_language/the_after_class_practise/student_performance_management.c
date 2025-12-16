#include <stdio.h>
#include <stdlib.h>
typedef struct score{
    int id;
    char name[50];
    float chinese;
    float math;
    float english;
}score;
typedef struct node{
    score data;
    struct node *next;
}node;
node* input(const char* filename,node* s){
    FILE* fp=fopen(filename,"r");
    node *head=NULL;
    node *tail=NULL;
    node* newnode=(node*)malloc(sizeof(node));
    int n=0;
    head=(node*)malloc(sizeof(node));
    head->next=NULL;
    while(fscanf(fp,"%d %s %f %f %f",&newnode->data.id,&newnode->data.name,&newnode->data.chinese,&newnode->data.math,&newnode->data.english)==5)
    {
        newnode->next=NULL;
        if(tail==NULL){
            head->next=newnode;
            tail=newnode;
        }
        else{
            tail->next=newnode;
            tail=newnode;
        }
        n++;
    }
    fclose(fp);
    return head;
}
double average(node* head,int n){
    double sum_chinese=0.0;
    double sum_math=0.0;
    double sum_english=0.0;
    node* p=head->next;
    while(p){
        sum_chinese=+p->data.chinese;
        sum_math=+p->data.math;
        sum_english=+p->data.english;
        p=p->next;
}
    double avg_chinese=sum_chinese/n;
    double avg_math=sum_math/n;
    double avg_english=sum_english/n;
    return avg_chinese,avg_math,avg_english;
    }
int less_avg(node* head,double avg_chinese,double avg_english,double avg_math){
    node* p=head->next;
    int sum=0;
    while(p){
        if(p->data.chinese<avg_chinese){
            printf("ID:%d name:%s chinese:%.2f\n",p->data.id,p->data.name,p->data.chinese);
            sum++;
        }
        p=p->next;
    }
    return sum;
}
int high_avgi(node* head,double avg_chinese,double avg_english,double avg_math){
    node* p=head->next;
    int sum=0;
    while(p){
        if(p->data.chinese>avg_chinese){
            printf("ID:%d name:%s chinese:%.2f\n",p->data.id,p->data.name,p->data.chinese);
            sum++;
        }
        p=p->next;
    }
    return sum;
}
int statistic(node* head){
    node* p=head->next;
    int count[3][5]={0};
    while(p){
        int scores[3]={p->data.chinese,p->data.math,p->data.english};
        for(int i=0;i<3;i++){
            swith(scores[i]){
                case scores[i]>=90:{
                count[i][0]++;
                break;
            }
                case scores[i]>=80:{
                count[i][1]++;
                break;
            }
                case scores[i]>=70:{
                count[i][2]++;
                break;
            }
                case (scores[i]>=60:{
                count[i][3]++;
                break;
            }
                default:{}
                count[i][4]++;
                break;
            }
        }
        p=p->next;
        return count;
    }
    
    

    
}
    
   
