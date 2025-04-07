#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node *next;
}NODE;

NODE* reverse(NODE** head){
    NODE* curr=*head;
    NODE* prev=NULL;
    NODE* next=curr->next;
    while(next!=NULL){
        curr->next=prev;
        prev=curr;
        curr=next;
        next=next->next;
    }
    curr->next=prev;
    return curr;
}
int main(){
    NODE *head = NULL;
    NODE *temp = NULL;
    NODE *newnode = (NODE*)malloc(sizeof(NODE));
    int x;
    scanf("%d" , &x);
    newnode->data = x;
    head=temp=newnode;
    while(true){
        scanf("%d" , &x);
        if(x!=-1){
            newnode = (NODE*)malloc(sizeof(NODE));
            newnode->data = x;
            temp->next = newnode;
            temp=newnode;
        }
        else break;
    }
    temp->next=NULL;
    temp = head;
    while(temp!=NULL){
        printf("%d->" , temp->data);
        temp=temp->next;
    }
    printf("NULL\n");

    NODE* head1=reverse(&head);
    temp = head1;
    printf("reverse linked list: ");
    while(temp!=NULL){
        printf("%d->" , temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}