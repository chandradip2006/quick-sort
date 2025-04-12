#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
typedef struct node{
    int age;
    char ch[11];
    struct node *next;
}NODE;
void swap(int* temp1 , int* temp2){
    int temp = *temp1;
    *temp1 = *temp2;
    *temp2 = temp;
}
void sort_age(NODE* head1 , NODE* head2){
    NODE* temp1 = head1;
    NODE* temp2;
    bool flag=false;
    while(temp1!=head2){
        flag=false;
        temp2=head1;
        while(temp2!=head2){
            if(temp2->age<temp2->next->age){
                swap(&temp2->age,&temp2->next->age);
                flag=true;
            }
            temp2=temp2->next;
        }
        if(flag==false){
            break;
        }
        temp1=temp1->next;
    }
}
void sortList(NODE* head){
    NODE* temp1=head;
    NODE* temp2;
    bool flag=false;
    while(temp1->next!=NULL){
        flag=false;
        temp2=head;
        while(temp2->next!=NULL){
            if(strcmp(temp2->ch,temp2->next->ch)>0){
                swap(&temp2->age , &temp2->next->age);
                char str1[11];
                char str2[11];
                strcpy(str1,temp2->ch);
                strcpy(str2,temp2->next->ch);
                strcpy(temp2->ch,str2);
                strcpy(temp2->next->ch,str1);
                flag=true;
            }
            temp2=temp2->next;
        }
        if(!flag){
            break;
        }
        temp1=temp1->next;
    }

    temp1=head;
    temp2=head;
    while(temp2->next!=NULL){
        if(strcmp(temp2->ch,temp2->next->ch)==0){
            temp2=temp2->next;
        }
        else {
            sort_age(temp1 , temp2);
            temp1=temp2->next;
            temp2=temp2->next;
        }
    }
    sort_age(temp1 , temp2);
}
void printList(NODE* head){
    NODE* temp=head;
    while(temp!=NULL){
        printf("%d ",temp->age);
        printf("%s\n",temp->ch);
        temp=temp->next;
    }
}


int main(){
    int n;
    scanf("%d",&n);
    NODE *newnode = (NODE*)malloc(sizeof(NODE));
    NODE* head;
    NODE* temp;
    int x;
    scanf("%d" , &x);
    newnode->age = x;
    char str[11];
    scanf("%s" , str);
    strcpy(newnode->ch , str);
    head=temp=newnode;
    n--;
    while(n--){
        scanf("%d" , &x);
        NODE* newnode = (NODE*)malloc(sizeof(NODE));
        newnode->age = x;
        scanf("%s" , str);
        strcpy(newnode->ch , str);
        temp->next = newnode;
        temp = temp->next;
    }
    temp->next=NULL;

    sortList(head);
    printf("\n");
    printList(head);

}