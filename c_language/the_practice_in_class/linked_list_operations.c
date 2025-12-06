#include <stdio.h>
#include <stdlib.h>
typedef struct node{
    int data;
    struct node* next;
}node;
node* linked_list(int arr[],int n){
    node* head=NULL;
    head=(node*)malloc(sizeof(node));
    head->next=NULL;
    for(int i=0;i<n;i++){
        node* newnode=(node*)malloc(sizeof(node));
        newnode->data=arr[i];
        newnode->next=NULL;
        newnode->next=head;
        head=newnode;
        }
    return head;
    }
int main(){
    int arr[100];
    int n;
    for(int i=0;;i++){
        scanf("%d",&arr[i]);
        if(arr[i]==-1){
            n=i;
            break;
        }
    }
    node* head=linked_list(arr,n);
    for(int i=0;i<n;i++){
        printf("%d ",head->data);
        head=head->next;
    }
    return 0;
}

