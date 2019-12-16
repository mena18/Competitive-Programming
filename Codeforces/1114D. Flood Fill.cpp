#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define INF 2147483647
#define max_num 1048580
#define MOD 1000000007


int n;
vector<int > a,b;
int dp[5005][5005];


void input(){
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("read.txt","r",stdin);
    //freopen("write.txt","w",stdout);
    #endif //ONLINE_JUDGE
    cin>>n;
    int q;cin>>q;a.push_back(q);
    for(int i=1;i<n;i++){
        cin>>q;
        if(a.back()!=q){a.push_back(q);}
    }
    n = a.size();
    b = a;
    reverse(b.begin(),b.end());



}




int lcm(int n,int m){
    if(n<0 || m<0){return 0;}
    int &ret = dp[n][m];
    if(ret!=-1){return ret;}
    if(a[n]==b[m]){return ret = 1 + lcm(n-1,m-1);}

    return ret = max(lcm(n-1,m),lcm(n,m-1));


}


int main(){

    input();

    memset(dp,-1,sizeof(dp));
    cout << n - (lcm(n-1,n-1) + 1)/2 << endl;




	return 0;
}
