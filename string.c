#include<stdio.h>
#include<stdlib.h>
int main(){
    char ch;
    scanf("%c" , &ch);
    int count=1;
    char* arr=(char*)malloc(count*sizeof(char));
    while(ch!='\n'){
        arr[count-1]=ch;
        count++;
        char* ptr =(char*)realloc(arr , count*sizeof(char));
        if(ptr==NULL){
            arr=ptr;
        }
        scanf("%c" , &ch);
    }
    for(int i=0;i<count-1;i++){
        if(arr[i]>='a'&&arr[i]<='z'){
            printf("%c" , arr[i]);
        }
        else if(arr[i]=='~'){
            printf("\n");
        }
    }
    free(arr);
}