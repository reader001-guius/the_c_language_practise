#include <stdio.h>
#include <stdlib.h>
typedef struct node{
    int data;
    struct node* next;
}node;
node* circle_list(int n,int arr[]){
    node* head=NULL;
    node* tail=NULL;
    int i;
    for(i=0;i<n;i++){
        node* newnode=(node*)malloc(sizeof(node));
        if(newnode==NULL){
            return NULL;
        }
        newnode->data=arr[i];
        newnode->next=NULL;
        if(head==NULL){
            head=newnode;
            tail=newnode;
        }
        else{
        tail->next=newnode;
        tail=newnode;
        }
        if(i==n-1){
            tail->next=head;
        }
    }
    return head;
}
void josephus(node* head_ptr, int n, int m, int* arr) {
    if (head_ptr == NULL || n <= 0 || m <= 0) return;
    node* current = head_ptr; 
    node* prev = head_ptr;   
    if (n > 1) {
        while (prev->next != head_ptr) { 
            prev = prev->next;
        }
    }
    int remaining = n;
    int num_eliminated = 0;
    while (remaining > 1) {
        for (int i = 1; i < m; i++) { 
            prev = current;
            current = current->next;
        }
        arr[num_eliminated++] = current->data; 
        
        node* to_remove = current;
        prev->next = current->next; 
        current = current->next; 
        free(to_remove);
        remaining--;
    }
    if (remaining == 1) {
        arr[num_eliminated] = current->data;
        free(current);
    }
}
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int num[100];
    for(int i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    node* head=circle_list(n,num);
    int arr[100];
    josephus(head,n,m,arr);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
    
        

        
