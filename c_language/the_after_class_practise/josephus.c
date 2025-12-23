#include <stdio.h>
#include <stdlib.h>
typedef struct node{
       int data;
       struct node* next;
       }node;
node* single_list(int n,int scores[]){
      node* head=NULL;
      node* tail=NULL;
      for(int i=0;i<n;i++){
        node* next=(node*)malloc(sizeof(node));
        next->data=scores[i];
        next->next=NULL;
        if(head==NULL){
            head=next;
            tail=next;
            head->next=tail;
        }
        else{
            tail->next=next;
            tail=next;
        }
        if(i==n-1){
            tail->next=head;
        }
    }
}
void josephus(node* head,int m){
     node* num=head->next;
     int n=1;
     while((num->next)!=head){
          num=num->next;
          n++;
          }
     int circle=1;
     int sum=0;
     node* later=head;
     while(sum<n){
     num=num->next;
     later=later->next;
     circle++;
     if(circle==m){
        node* temp=later;
        num->next=later->next;
        later=later->next;
        printf("%d ",temp->data);
        free(temp);
        circle=0;
        sum++;
     }
     }
    }
     int main(){
         int n,m;
         scanf("%d %d",&n,&m);
         int scores[100];
         for(int i=0;i<n;i++){
                 scanf("%d",&scores[i]);
                 }
         node* head=single_list(n,scores);
         josephus(head,m);
         return 0;
         }
     
     
     
     
     
                                 
              
              