#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
typedef struct node{
    int data;
    struct node *next;
}NODE;
int main(){
    int x;
    scanf("%d" , &x);
    int count=1;
    NODE *newnode = (NODE*)malloc(sizeof(NODE));
    NODE* head=NULL;
    NODE* temp=NULL;
    newnode->data=x;
    head=temp=newnode;
    while(true){
        scanf("%d" , &x);
        if(x!=-1){
            NODE *newnode = (NODE*)malloc(sizeof(NODE));
            newnode->data=x;
            temp->next=newnode;
            temp=newnode;
            count++;
        }
        else break;
    }
    temp->next=NULL;
    temp=head;
    int k;
    scanf("%d" , &k);
    if(k>count){
        printf("Invalid position\n");
    }
    else{
        for(int i=1;i<=count-k;i++){
            temp=temp->next;
        }
        printf("%d" , temp->data);
    }
}