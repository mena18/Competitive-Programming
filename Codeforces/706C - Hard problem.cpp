#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define INF 9000000000000000
int n;
int energy[100005];
string arr[100005];
string rev[100005];

ll dp[100005][2];

string reverseStr(string str) {
    int n = str.length();
    for (int i = 0; i < n / 2; i++){swap(str[i], str[n - i - 1]);}
    return str;
}

ll solve(int i,int prev){
    if(i>=n){return 0;}
    ll &ret = dp[i][prev];
    if(ret!=-1){return ret;}

    string prev_string;
    if(prev==0){prev_string=arr[i-1];}
    else{prev_string=rev[i-1];}
    string cur_string=arr[i];
    string cur_rev = rev[i];

    ll cost=INF;
    if(cur_string>=prev_string){cost = min(cost,solve(i+1,0));}
    if(cur_rev>=prev_string){cost = min(cost,energy[i] + solve(i+1,1));}


    return ret = cost;


 }

int main(){
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("read.txt","r",stdin);
    //freopen("write.txt","w",stdout);
    #endif //ONLINE_JUDGE

    memset(dp,-1,sizeof(dp));

    cin>>n;
    for(int i=0;i<n;i++){cin>>energy[i];}
    for(int i=0;i<n;i++){cin>>arr[i];rev[i] = reverseStr(arr[i]);}


    ll ans = min(solve(1,0),energy[0] + solve(1,1));
    if(ans==INF){cout<<-1<<endl;}
    else{cout<<ans<<endl;}
    return 0;


}
