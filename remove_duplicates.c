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
    NODE* newnode=(NODE*)malloc(sizeof(NODE));
    NODE* head=NULL;
    NODE* temp=NULL;
    newnode->data=x;
    head=temp=newnode;
    while(true){
        scanf("%d" , &x);
        if(x!=-1){
            NODE* newnode=(NODE*)malloc(sizeof(NODE));
            newnode->data=x;
            temp->next=newnode;
            temp=temp->next;
        }
        else break;
    }
    temp->next=NULL;
    printf("1");

}