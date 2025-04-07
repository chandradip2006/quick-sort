#include<stdio.h>
int fun(int n){
    if(n<10){
        printf("%d" ,n%10);
    }
    else{
        printf("%d" ,n%10);
        fun(n/10);
        printf("%d" ,n%10);
    }
}
int main(){
    fun(4345);
}