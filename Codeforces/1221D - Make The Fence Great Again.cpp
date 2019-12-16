#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define INF 2139062143
 
int n;
ll dp[3][300020];
int arr[300020];
int values[300020];
int total_prev=1;
 
ll solve(int prev,int i){
    if(i>=n+total_prev){return 0;}
 
    ll &ret = dp[prev][i];
    if(ret!=-1){return ret;}
    ret =LONG_LONG_MAX;
 
    for(int j=0;j<3;j++){
        if(arr[i]+j !=arr[i-1]+prev){
            ret = min(ret,j*values[i] + solve(j,i+1));
        }
    }
    return ret;
 
}
 
 
 
 
int main(){
 
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    memset(dp,-1,sizeof(dp));
    int q;cin>>q;
    arr[0]=0;values[0]=0;
    while(q--){
        cin>>n;
        for(int i=total_prev;i<total_prev+n;i++){cin>>arr[i]>>values[i];}
        arr[total_prev-1] = 0;
        cout<<solve(0,total_prev)<<endl;
        total_prev+=n;
    }
 
 
 
 
    return 0;
}
 
 
 