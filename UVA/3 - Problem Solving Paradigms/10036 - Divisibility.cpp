#include <bits/stdc++.h>
#define ll long long int


using namespace std;
const int MAX = 100010;


int n,k;
int arr[10005];
int dp[10005][105];

int solve(int i,int mod){
    if(i>=n){return mod%k==0;}
    int& ret = dp[i][mod];
    if(ret!=-1){return ret;}

    return ret = solve(i+1,(mod+arr[i]+k)%k) || solve(i+1,(mod-arr[i]+k)%k);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);


    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif // ONLINE_JUDGE



    int t;cin>>t;

    while(t--){
        cin>>n>>k;
        memset(dp,-1,sizeof(dp));
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        if(solve(0,0)){
            cout<<"Divisible"<<endl;
        }else{
            cout<<"Not divisible"<<endl;
        }
    }









    return 0;
}
