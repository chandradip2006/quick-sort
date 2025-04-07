#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
typedef struct node{
    int data;
    struct node* next;
    struct node* prev;
}NODE;
int main(){
    int x;
    scanf("%d",&x);
    NODE* newnode = (NODE*) malloc(sizeof(NODE));
    NODE* head1=NULL;
    NODE* temp=NULL;
    newnode->data=x;
    head1=temp=newnode;
    temp->prev=NULL;
    int count=1;
    while(true){
        scanf("%d",&x);
        if(x!=-1){
            newnode = (NODE*) malloc(sizeof(NODE));
            newnode->data=x;
            newnode->prev=temp;
            temp->next=newnode;
            temp=newnode;
            count++;
        }
        else break;
    }
    NODE* head2=temp;
    temp->next=NULL;
    NODE* temp1=head1;
    NODE* temp2=head2;
    int i=0;
    int j=count-1;
    while(i<j){
        if(temp1->data!=temp2->data){
            printf("False\n");
            return 0;
        }
        else{
            temp1=temp1->next;
            temp2=temp2->prev;
            i++;
            j--;
        }
    }
    printf("True\n");
}