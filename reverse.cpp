#include<bits/stdc++.h>
using namespace std;
void swap(char* ch1 , char* ch2){
    char temp = *ch1;
    *ch1 = *ch2;
    *ch2 = temp;
}
int main(){
    string s;
    cin>>s;
    int n=s.size();
    int i=0;
    int j=n-1;
    while(i<j){
        if(((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))&&((s[j]>='a'&&s[j]<='z')||(s[j]>='A'&&s[j]<='Z'))){
            swap(&s[i] , &s[j]);
            i++;
            j--;
        }
        else if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&& s[i]<='Z')){
            j--;
        }
        else if((s[j]>='a'&&s[j]<='z')||(s[j]>='A'&& s[j]<='Z')){
            i++;
        }
        else{
            i++;
            j--;
        }
    }
    cout<<s<<endl;
}