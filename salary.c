#include<stdio.h>
#include<string.h>
# include<stdbool.h>
typedef struct node{
    int id;
    char name[20];
    float salary;
}BIO;

void swap(BIO* x, BIO* y){
    BIO temp = *x;
    *x = *y;
    *y = temp;
}
int main(){
    int n;
    scanf("%d" , &n);
    BIO arr[n];
    int x;
    char ch[20];
    float s;
    for(int i=0;i<n;i++){
        scanf("%d" , &x);
        arr[i].id=x;
        scanf("%s" , ch);
        strcpy(arr[i].name,ch);
        scanf("%f" , &s);
        arr[i].salary=s;
        
    }
    bool flag=false;
    for(int i=0;i<n-1;i++){
        flag=false;
        for(int j=0;j<n-1-i;j++){
            if(strcmp(arr[j].name , arr[j+1].name)>0){
                swap(&arr[j] , &arr[j+1]);
                flag=true;
            }
        }
        if(!flag){
            break;
        }
    }
    printf("\n");
    for(int i=0;i<n;i++){
        printf("%d %s %f\n" , arr[i].id , arr[i].name , arr[i].salary);
    }
}