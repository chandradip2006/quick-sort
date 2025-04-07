#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        vector<int>count;
        int x;
        for(int i=0;i<10;i++){
            vector<int>v;
            int count1=0;
            for(int j=0;j<n;j++){
                if(arr[j]==i){
                    count1++;
                }
                v.push_back(count1);
            }
            if(i==0){
                for(int k=0;k<n;k++){
                    if(v[k]==3){
                        count.push_back(k+1);
                        break;
                    }
                }
            }
            if(i==1){
                for(int k=0;k<n;k++){
                    if(v[k]==1){
                        count.push_back(k+1);
                        break;
                    }
                }
            }
            if(i==2){
                for(int k=0;k<n;k++){
                    if(v[k]==2){
                        count.push_back(k+1);
                        break;
                    }
                }
            }
            if(i==3){
                for(int k=0;k<n;k++){
                    if(v[k]==1){
                        count.push_back(k+1);
                        break;
                    }
                }
            }
            if(i==5){
                for(int k=0;k<n;k++){
                    if(v[k]==1){
                        count.push_back(k+1);
                        break;
                    }
                }
            }
        }
        if(count.size()<5){
            cout<<0<<endl;
        }
        else{
            sort(count.begin(),count.end());
            cout<<count[count.size()-1]<<endl;
        }
    }
}