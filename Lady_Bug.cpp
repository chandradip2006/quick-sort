#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char ch1[n+1];
        char ch2[n+1];
        cin>>ch1;
        cin>>ch2;
        bool flag=true;
        for(int i=0;i<n;i++){
            flag=true;
            if(i==0){
                if(ch1[i]=='1'&&ch2[i+1]=='1'){
                    cout<<"NO"<<endl;
                    flag=false;
                    break;
                }
                else if(ch1[i]=='1'&&ch2[i+1]=='0'){
                    swap(ch1[i] , ch2[i+1]);
                }
            }
            else if(i==n-1){
                if(ch1[i]=='1'&&ch2[i-1]=='1'){
                    cout<<"NO"<<endl;
                    flag=false;
                    break;
                }
                else if(ch1[i]=='1'&&ch2[i-1]=='0')swap(ch1[i] , ch2[i-1]);
            }
            else{
                if(ch1[i]=='1'){
                    if(ch2[i-1]=='1'&&ch2[i+1]=='1'){
                        cout<<"NO"<<endl;
                        flag=false;
                        break;
                    }
                    else {
                        if(ch2[i-1]=='0'){
                            swap(ch1[i] , ch2[i-1]);
                        }
                        else swap(ch1[i] , ch2[i+1]);
                    }
                }
            }
        }
        if(!flag){
            continue;
        }
        cout<<"YES"<<endl;
    }
}