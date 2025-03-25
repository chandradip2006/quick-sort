#include<bits/stdc++.h>
using namespace std;
int count(string &s1 , string &s2 , int n , int m){
    int dp[n+1][m+1];
    for(int i=0;i<=n;i++){
        dp[i][0]=0;
    }
    for(int j=0;j<=m;j++){
        dp[0][j]=0;
    }
    int count=0;
    for(int i = 1 ; i <= n ; i++){
        count=0;
        for(int j = 1 ; j <= m ; j++){
            if(s1[i]==s2[j]){
                while(i<n&&j<m){
                    if(s1[i]==s2[j]){
                        count++;
                    }
                    else {
                        dp[i][j]=max(dp[i-1][j-1],count);
                        count=0;
                    }
                    i++;
                    j++;
                }
            }
            if(s1[i]!=s2[j]){
                dp[i][j]=max(dp[i-1][j] , dp[i][j-1]);
            }
        }
    }
    return max(dp[n][m] , count);
}
int main(){
    string s1 , s2;
    cin>>s1>>s2;
    int z1=s1.size();
    int z2=s2.size();
    cout<<count(s1 , s2 , z1 , z2);
}