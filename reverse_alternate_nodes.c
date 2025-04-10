#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node* next;
}NODE;
int main(){
    int s;
    scanf("%d" , &s);
    NODE* head = NULL;
    NODE* temp=NULL;
    NODE* newnode=(NODE*)malloc(sizeof(NODE));
    newnode->data=s;
    head=temp=newnode;
    while(true){
        scanf("%d" , &s);
        if(s==-1){
            break;
        }
        NODE* newnode=(NODE*)malloc(sizeof(NODE));
        newnode->data=s;
        temp->next=newnode;
        temp=temp->next;
    }
    temp->next=NULL;
    temp=head;
    int count=1;
    NODE* head1;
    int i=1;
    int j=1;
    int* ptr1=(int*)malloc(i*sizeof(int));
    int* ptr2=(int*)malloc(j*sizeof(int));
    while(temp!=NULL){
        if(count%2!=0){
            ptr1[i-1]=temp->data;
            i++;
            int* ptr=(int*)realloc(ptr1 , i*sizeof(int));
            ptr1=ptr;
        }
        else {
            ptr2[j-1]=temp->data;
            j++;
            int* ptr=(int*)realloc(ptr2 , j*sizeof(int));
            ptr2=ptr;
        }
        count++;
        temp=temp->next;
    }
    if(i>1){
        NODE* newnode1=(NODE*)malloc(sizeof(NODE));
        newnode1->data=ptr1[0];
        head1=temp=newnode1;
    }
    for(int k=1;k<i-1;k++){
        NODE* newnode1=(NODE*)malloc(sizeof(NODE));
        newnode1->data=ptr1[k];
        temp->next=newnode1;
        temp=temp->next;
    }
    for(int k=j-2;k>=0;k--){
        NODE* newnode2=(NODE*)malloc(sizeof(NODE));
        newnode2->data=ptr2[k];
        temp->next=newnode2;
        temp=temp->next;
    }
    temp->next=NULL;
    temp=head1;
    while(temp!=NULL){
        printf("%d->" , temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}