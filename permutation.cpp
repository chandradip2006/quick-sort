#include<bits/stdc++.h>
using namespace std;
void permutation(vector<int>&v , vector<int>&temp , vector<vector<int>>&ans, unordered_map<int , int>&m){
    if(temp.size()==v.size()){
        ans.push_back(temp);
        return;
    }
    else {
        for(int i=0;i<v.size();i++){
            if(m[v[i]]==0){
                m[v[i]]=1;
                temp.push_back(v[i]);
                permutation(v,temp,ans,m);
                m[temp[temp.size()-1]]=0;
                temp.pop_back();
            }
        }
    }
}
int main(){
    int n;
    cin>>n;
    vector<int>v;
    int x;
    int k;
    cin>>k;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    unordered_map<int , int >m;
    vector<int>temp;
    vector<vector<int>>ans;
    permutation(v,temp,ans,m);
    cout<<endl;
    vector<int>num;
    int r=0;
    for(int i=0;i<ans.size();i++){
        r=0;
        for(int j=0;j<ans[0].size() ;j++){
            r=r*10+ans[i][j];
        }
        num.push_back(r);
    }
    sort(num.begin(),num.end());
    cout<<num[k-1]<<endl;
}