#include <stdio.h>

void rotate_and_replace(char *str, char r) {
    // your code here
    int count=0;
    int count1=0;
    while(str[count]!='\n'){
        if(count1%2==0){
            if((str[count]>='a'&&str[count]<='z')||(str[count]>='A'&&str[count]<='Z')){
                str[count]=r;
                
            }
            count1++;
        }
        else{
            if(str[count+1]!=' '){
                count1++;
            }
            
        }
        count++;
        
    }
    
}

int count_substring_occurrences(char *ch, char *str) {
    
    // your code here
    int count=0;
    int count1=0;
    
    int idx=0;
    while(ch[count1]!='\n'){
        count1=idx;
        int i=0;
        while(str[i]!='\0'&&ch[count1]!='\n'){
            if(str[i]==ch[count1]){
                i++;
                count1++;
            }
            else{
                count1++;
                break;
            }
        }
        if(str[i]=='\0'){
            count++;
        }
        idx++;
    }
    return count;
}

int main (){
    // your code here
    char ch[101];
    int count1=0;
    while(1){
        scanf("%c" , &ch[count1]);
        if(ch[count1]=='\n'){
            break;
        }
        count1++;
    }
    ch[count1]='\n';
    int count=0;
    while(ch[count]!='\n'){
        char c=ch[count];
        while(ch[count+1]!=' '&&ch[count+1]!='\n'){
            ch[count]=ch[count+1];
            count++;
        }
        ch[count]=c;
        count++;
        if(ch[count]!='\n'){
            count++;
        }
        
    }
    
    // for(int i=0;i<count1;i++){
    //     printf("%c" , ch[i]);
    // }
    
    char s;
    scanf("%c" , &s);
    rotate_and_replace(ch, s);
    
    char str[101];
    scanf("%s" , str);
    int z=count_substring_occurrences(ch, str);
    printf("%s" , ch);
    printf("%d" , z);
    return 0; 
}