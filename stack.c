#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct node{
    int val;
    struct node* next;
}NODE;


NODE* head=NULL;
NODE* temp=NULL;
int is_empty(){
    if(head==NULL){
        return 0;
    }
    else return 1;
}
void push(int data){
    NODE* newnode=(NODE*)malloc(sizeof(NODE));
    if(is_empty()==0){
       newnode->val=data;
       head=temp=newnode;
    }
    else{
        newnode->val=data;
        temp->next=newnode;
        temp=newnode;
    }
}
void pop(){
    if(is_empty()!=0){
        if(temp==head){
            head=temp=NULL;
        }
        else {
            NODE* temp1=head;
            while(temp1->next!=temp){
                temp1=temp1->next;
            }
            temp1->next=temp->next;
            temp=temp1;
        }
    }
}
void topelement(){
    printf("%d\n" , temp->val);
}

int main(){
    char ch[6];
    scanf("%s" , ch);
    int x;
    while(strcmp(ch,"exit")!=0){
        if(strcmp(ch , "push")==0){
            scanf("%d" , &x);
            push(x);
        }
        else if(strcmp(ch , "pop")==0){
            pop();
        }
        else if(strcmp(ch , "top")==0){
            if(is_empty()==0){
                printf("X\n");
            }
            else{
                topelement();
            }
        }
        else if(strcmp(ch , "empty?")==0){
            if(is_empty()==0){
                printf("TRUE\n");
            }
            else printf("FALSE\n");
        }
        scanf("%s" , ch);
    }
    return 0;
}