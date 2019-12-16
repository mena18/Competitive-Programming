#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int n,q,d,m;
int arr[210];
int dp[42][210][11];


int solve(int rem,int pos,int chosen){

    if(chosen==m){if(rem==0){return 1;}else{return 0;}}
    if(pos==n){return 0;}

    int& ret = dp[rem+20][pos][chosen];
    if(ret!=-1){return ret;}

    return ret = solve((rem+arr[pos])%d,pos+1,chosen+1) + solve(rem,pos+1,chosen);


}

int main(){
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("read.txt","r",stdin);
    freopen("write.txt","w",stdout);
    #endif // ONLINE_JUDGE

    int Set=1;

    while(cin>>n>>q && n!=0 && q!=0){
        for(int i=0;i<n;i++){cin>>arr[i];}
        cout<<"SET "<<Set++<<":"<<endl;
        for(int i=1;i<=q;i++){
            cin>>d>>m;
            if(m>n){cout<<"QUERY "<<i<<": "<<0<<endl;}
            else{
                memset(dp,-1,sizeof(dp));
                cout<<"QUERY "<<i<<": "<<solve(0,0,0)<<endl;
            }


        }
    }



    return 0;
}
