#include<stdio.h>
#include<stdlib.h>
int count=1;
int* unique(int* arr , int n){
    
    int* b = (int*)malloc(count*sizeof(int));
    for(int i=0;i<n-1;i++){
        if(arr[i]!=arr[i+1]){
            b[count-1]=arr[i];
            count++;
            int* ptr= (int*)realloc(b,count*sizeof(int));
            if(ptr!=NULL){
                b=ptr;
            }
        }
    }
    b[count-1]=arr[n-1];
    return b;
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int* b = unique(a,n);
    for(int i=0;i<count;i++){
        printf("%d ",b[i]);
    }
}