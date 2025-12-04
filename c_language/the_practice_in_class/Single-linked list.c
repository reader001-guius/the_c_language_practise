#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
int main(){
    int n;
    scanf("%d",&n);
    int *arr=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    struct Node *head=NULL;
    struct Node *tail=NULL;
    head=(struct Node*)malloc(sizeof(struct Node));
    head->next=NULL;
    for(int i=0;i<n;i++){
        struct Node *newnode=(struct Node*)malloc(sizeof(struct Node));
        newnode->data=arr[i];
        newnode->next=NULL;
        if(tail==NULL){
            head->next=newnode;
            tail=newnode;
        }
        else{
            tail->next=newnode;
            tail=newnode;
        }}
        struct Node *p=head->next;
        while(p){
            printf("%d ",p->data);
            p=p->next;
        }
        printf("\n");
        return 0;
}
