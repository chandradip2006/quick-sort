#include<stdio.h>

void merge(int *arr,int st,int end){
    int mid=st+(end-st)/2;
    int len1=mid-st+1;
    int len2=end-mid;
    int arr1[len1];
    int arr2[len2];
    int count1=0;
    int count2=0;
    for(int i=st ; i<st+len1;i++){
        arr1[count1]=arr[i];
        count1++;
    }
    for(int i=st+len1 ; i<=end;i++){
        arr2[count2]=arr[i];
        count2++;
    }
    int idx=st;
    int i=0;
    int j=0;

    while(i<len1&&j<len2){
        if(arr1[i]>=arr2[j]){
            arr[idx]=arr2[j];
            idx++;
            j++;
        }
        else {
            arr[idx]=arr1[i];
            idx++;
            i++;
        }
    }
    while(i<len1){
        arr[idx]=arr1[i];
            idx++;
            i++;
    }
    while(j<len2){
        arr[idx]=arr2[j];
            idx++;
            j++;
    }
}


void mergesort(int *arr,int st,int end){
        if(st>=end){
            return;
        }
        int mid=st + (end -st)/2;
        mergesort(arr,st,mid);
        mergesort(arr,mid+1,end);
        merge(arr,st,end);

}
int main(){
    int arr[]={0 ,78 , -1 , -7 , 20 , 25 , 60 , 53 , 90 , 34, 2 , 12};
    int n=sizeof(arr)/sizeof(int);
    mergesort(arr , 0 , n-1);
    for(int i=0;i<n;i++){
        printf("%d " , arr[i]);
    }
    return 0;
}