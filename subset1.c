// #include<iostream>
// #include<vector>
#include<stdio.h>
#include<limits.h>
// using namespace std;

    void fill(int* arr ,int* v , int count1 , int count2 , int n){
        if(count1==n){
            printf("[ ");
            for(int i=0;i<count2;i++){
                printf("%d " , v[i]);
            }
            printf("]\n");
            return;
        }
        v[count2]=arr[count1];
        fill(arr , v ,count1+1 , count2+1 , n);
        v[count2]=INT_MAX;
        fill(arr , v , count1+1 , count2 , n);
    }
int main(){
    int n;
    scanf("%d" , &n);
    int arr[n];
    
    for(int i=0;i<n;i++){
        scanf("%d" , arr+i);
        
    }
    int v[n];
    for(int i=0;i<n;i++){
        v[i]=INT_MAX;
    }
    printf("the subsets are:\n");
    fill(arr , v , 0 , 0 , n);
    
}