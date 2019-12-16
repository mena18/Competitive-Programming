#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int actual_price,updated_price,n;
int prices[101],values[101];
int dp[10500][102];

int solve(int p,int i){
    if(i>=n){
        int k = updated_price - p;
        if(k>2000 || k<=actual_price){return 0;}
        return INT_MIN;
    }
    int& ret = dp[p][i];
    if(ret!=-1){return ret;}

    if(prices[i]<=p){return ret = max( values[i] + solve(p-prices[i],i+1) , solve(p,i+1) ) ;}
    return solve(p,i+1);

}

int main(){
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("read.txt","r",stdin);
    freopen("write.txt","w",stdout);
    #endif // ONLINE_JUDGE

    while(cin>>actual_price>>n){
        updated_price=actual_price;
        memset(dp,-1,sizeof(dp));
        for(int i=0;i<n;i++){
            cin>>prices[i]>>values[i];
        }
        if(actual_price>1800){updated_price+=200;}
        cout<<solve(updated_price,0)<<endl;
    }

}

