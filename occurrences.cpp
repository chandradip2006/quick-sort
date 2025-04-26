#include<bits/stdc++.h>
using namespace std;

void idx(string &str , string &s , vector<int>&v){
    int z=str.size();
    int n=s.size();

    int idx=0;
    int count=idx;
    while(count<z){
        int i=0;
        count=idx;
        while(i<n&&count<z){
            if(str[count]==s[i]){
                count++;
                i++;
            }
            else{
                break;
            }
        }
        if(i==n){
            v.push_back(idx);
        }
        idx++;
    }
    if(v.size()==0){
        v.push_back(-1);
    }
}
int main(){
    string str;
    getline(cin, str);
    string s;
    cin>>s;
    vector<int>v;
    idx(str , s , v);
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
}