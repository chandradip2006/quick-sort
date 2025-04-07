#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node* next;
}NODE;
int main(){
    int x;
    scanf("%d" , &x);
    NODE* newnode = (NODE*)malloc(sizeof(NODE));
    newnode->data = x;
    NODE* head;
    NODE* temp;
    head=temp=newnode;
    int count=1;
    while(true){
        scanf("%d" , &x);
        if(x==-1){
            break;
        }
        else{
            newnode = (NODE*)malloc(sizeof(NODE));
            newnode->data = x;
            temp->next = newnode;
            temp = temp->next;
            count++;
        }
    }
    temp->next=NULL;
    int k;
    scanf("%d" , &k);
    temp=head;
    if(k>count){
        printf("Invalid position\n");
    }
    else{
        if(k==1){
            head=head->next;
        }
        else{
            for(int i=1;i<=k-2;i++){
                temp=temp->next;
            }
            temp->next=temp->next->next;
        }
        temp=head;
        while(temp!=NULL){
            printf("%d->" , temp->data);
            temp=temp->next;
        }
        printf("NULL\n");
    }
}