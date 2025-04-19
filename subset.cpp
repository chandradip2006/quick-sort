// #include<iostream>
// #include<vector>
#include<bits/stdc++.h>
using namespace std;
vector<int>u;
    void fill(vector<int>&arr , vector<vector<int>>&v , int count){
        if(count==arr.size()){
            v.push_back(u);
            return;
        }
        u.push_back(arr[count]);
        fill(arr , v , count+1);
        u.pop_back();
        fill(arr , v , count+1);
    }
int main(){
    int n;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    vector<vector<int>>v;
    fill(arr , v , 0);
    for(int i=0;i<v.size();i++){
        cout<<"["<<" ";
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<"]"<<endl;
    }
}