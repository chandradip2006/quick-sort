#include<bits/stdc++.h>
using namespace std;
void swap(int& x , int& y){
    int temp = x;
    x = y;
    y = temp;
}
int main(){
    int n;
    cin>>n;
    vector<int>v;
    // int x ;
    // cin>>x;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    bool flag = false;
    for(int i=0;i<n-1;i++){
        flag=false;
        for(int j=0;j<n-1-i;j++){
            if(v[j]>v[j+1]){
                swap(v[j],v[j+1]);
                flag=true;
            }
        }
        if(flag==false){
            break;
        }
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    
}
