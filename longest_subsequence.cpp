#include<bits/stdc++.h>
using namespace std;
int size(string &s1 , string &s2 , int z1 , int z2 , int count){
    if(z1==0||z2==0){
        return count;
    }
    else{
        if(s1[z1-1]==s2[z2-1]){
            count++;
            return size(s1,s2,z1-1,z2-1,count);
        }
        else {
            return max(size(s1,s2,z1-1,z2,count),size(s1,s2,z1 , z2-1 , count));
        }
    }
}
int main(){
    string s1,s2;
    cin>>s1>>s2;
    int z1=s1.size(),z2=s2.size();
    cout<<size(s1,s2,z1,z2,0);
}