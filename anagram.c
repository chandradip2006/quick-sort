#include<stdio.h>
#include<string.h>
int main(){
    char ch1[100001];
    char ch2[100001];

    scanf("%s" , ch1);
    scanf("%s" , ch2);

    if(strlen(ch1)!=strlen(ch2)){
        printf("NO");
        return 0;
    }

    int arr1[26];
    int arr2[26];
    for(int i=0;i<26;i++){
        arr1[i]=0;
        arr2[i]=0;
    }

    for(int i=0;ch1[i]!='\0';i++){
        arr1[ch1[i]-'a']++;
    }
    for(int i=0;ch2[i]!='\0';i++){
        arr2[ch2[i]-'a']++;
    }


    for(int i=0;i<26;i++){
        if(arr1[i]!=arr2[i]){
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;




    
}