//https://www.hackerrank.com/challenges/sherlock-and-cost/problem

#include <bits/stdc++.h>
using namespace std;


int b[100001];
int n;
int dp[100001][2];
int solve(int i,int pre){
    if(i==n){return 0;}
    int &ret = dp[i][pre];
    if(ret!=-1){return ret;}
    int prev=(pre==0?b[i-1]:1);
    return ret = max(abs(b[i]-prev)+solve(i+1,0),abs(prev-1)+solve(i+1,1));
}

int main(){
    //freopen("read.txt","r",stdin);
    int T;cin>>T;
    while(T--){
        memset(dp,-1,sizeof(dp));
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        int ans = max(solve(1,0),solve(1,1));
        cout<<ans<<endl;

    }
}
