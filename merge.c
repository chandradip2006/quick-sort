#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node* next;
}NODE;
int main(){
    int x;
    scanf("%d",&x);
    NODE* head1;
    NODE* temp;
    NODE* newnode =(NODE*)malloc(sizeof(NODE));
    newnode->data=x;
    head1=temp=newnode;
    while(true){
        scanf("%d",&x);
        if(x==-1){
            break;
        }

        NODE* newnode=(NODE*)malloc(sizeof(NODE));
        newnode->data=x;
        temp->next=newnode;
        temp=temp->next;
    }
    temp->next=NULL;
    temp=head1;

    printf("list1:\n");
    while(temp!=NULL){
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");

    scanf("%d",&x);
    NODE* head2;
    NODE* newnode1 =(NODE*)malloc(sizeof(NODE));
    newnode1->data=x;
    head2=temp=newnode1;
    while(true){
        scanf("%d",&x);
        if(x==-1){
            break;
        }

        NODE* newnode1=(NODE*)malloc(sizeof(NODE));
        newnode1->data=x;
        temp->next=newnode1;
        temp=temp->next;
    }
    temp->next=NULL;
    temp=head2;

    printf("list2:\n");
    while(temp!=NULL){
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");

    NODE* temp1=head1;
    NODE* temp2=head2;
    NODE* head3;
    NODE* temp3;
    if(temp1->data>temp2->data){
        NODE*newnode3=(NODE*)malloc(sizeof(NODE));
        newnode3->data=temp2->data;
        head3=newnode3;
        temp3=head3;
        temp2=temp2->next;
    }
    else{
        NODE*newnode3=(NODE*)malloc(sizeof(NODE));
        newnode3->data=temp1->data;
        head3=newnode3;
        temp3=head3;
        temp1=temp1->next;
    }
    while(temp1!=NULL && temp2!=NULL){
        if(temp1->data>temp2->data){
            temp3->next=temp2;
            temp3=temp3->next;
            temp2=temp2->next;
        }
        else{
            temp3->next=temp1;
            temp3=temp3->next;
            temp1=temp1->next;
        }
    }
    while(temp1!=NULL){
        temp3->next=temp1;
        temp3=temp3->next;
        temp1=temp1->next;
    }
    while(temp2!=NULL){
        temp3->next=temp2;
        temp3=temp3->next;
        temp2=temp2->next;
    }
    temp3->next=NULL;
    temp3=head3;
    printf("merged sorted list:\n");
    while(temp3!=NULL){
        printf("%d->",temp3->data);
        temp3=temp3->next;
    }
    printf("NULL\n");
}