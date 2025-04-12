#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
typedef struct node{
    int sec;
    char ch[11];
    char mess[101];
    struct node *next;
}NODE;

void swap(int* temp1 , int* temp2){
    int temp = *temp1;
    *temp1 = *temp2;
    *temp2 = temp;
}
void remove1(NODE* head){
    NODE* temp = head;
    while (temp->next != NULL){
        if(strcmp(temp->ch,temp->next->ch)==0){
            if(strcmp(temp->mess,temp->next->mess)==0){
                temp->next=temp->next->next;
            }
            else{
                temp=temp->next;
            }
        }
        else temp=temp->next;
    }
    // free(temp);
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
                swap(&temp2->sec , &temp2->next->sec);
                char str1[11];
                char str2[11];
                strcpy(str1,temp2->ch);
                strcpy(str2,temp2->next->ch);
                strcpy(temp2->ch,str2);
                strcpy(temp2->next->ch,str1);

                char str3[101];
                char str4[101];
                strcpy(str3,temp2->mess);
                strcpy(str4,temp2->next->mess);
                strcpy(temp2->mess,str4);
                strcpy(temp2->next->mess,str3);
                flag=true;
            }
            temp2=temp2->next;
        }
        if(!flag){
            break;
        }
        temp1=temp1->next;
    }
    remove1(head);
    temp1=head;
    flag=false;
    while(temp1->next!=NULL){
        flag=false;
        temp2=head;
        while(temp2->next!=NULL){
            if(temp2->sec>temp2->next->sec){
                swap(&temp2->sec , &temp2->next->sec);
                char str1[11];
                char str2[11];
                strcpy(str1,temp2->ch);
                strcpy(str2,temp2->next->ch);
                strcpy(temp2->ch,str2);
                strcpy(temp2->next->ch,str1);

                char str3[101];
                char str4[101];
                strcpy(str3,temp2->mess);
                strcpy(str4,temp2->next->mess);
                strcpy(temp2->mess,str4);
                strcpy(temp2->next->mess,str3);
                flag=true;
            }
            temp2=temp2->next;
        }
        if(!flag){
            break;
        }
        temp1=temp1->next;
    }
    // free(temp1);
    // free(temp2);
}


void printChat(NODE* head){
    NODE* temp=head;
    while(temp!=NULL){
        printf("%d ",temp->sec);
        printf("%s ",temp->ch);
        printf("%s\n",temp->mess);
        temp=temp->next;
    }
    // free(temp);
}

int main(){
    int n;
    scanf("%d",&n);
    NODE *newnode = (NODE*)malloc(sizeof(NODE));
    NODE* head;
    NODE* temp;
    int x;
    scanf("%d" , &x);
    newnode->sec = x;
    char str1[11];
    char str2[101];
    scanf("%s" , str1);
    scanf("%s" , str2);
    strcpy(newnode->ch , str1);
    strcpy(newnode->mess , str2);
    head=temp=newnode;
    n--;
    while(n--){
        scanf("%d" , &x);
        NODE* newnode = (NODE*)malloc(sizeof(NODE));
        newnode->sec = x;
        scanf("%s" , str1);
        scanf("%s" , str2);
        strcpy(newnode->ch , str1);
        strcpy(newnode->mess , str2);
        temp->next = newnode;
        temp = temp->next;
    }
    temp->next=NULL;
    sortList(head);
    printf("\n");
    printChat(head);

    // free(temp);
}