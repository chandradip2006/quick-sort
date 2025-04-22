#include<stdio.h>
#include<string.h>
int main(){
    char ch[100001];
    scanf("%s" , ch);
    int n;
    scanf("%d" , &n);
    char arr[n][1000001];
    for(int i = 0; i < n; i++) {
        scanf("%s", arr[i]);
    }
    int count=0;
    for(int i = 0; i < n; i++) {
        int a=0;
        int b=0;
        while(a<strlen(ch)&&b<strlen(arr[i])){
            if (ch[a] == arr[i][b]) {
                a++; 
                b++;
            }
            else {
                a++;
            }
        }
        if(b==strlen(arr[i])){
            count++;
        }
    }
    printf("\n");
    printf("%d\n", count);

}