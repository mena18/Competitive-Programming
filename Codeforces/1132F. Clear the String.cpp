#include <bits/stdc++.h>
using namespace std;

int n;
string s;
int dp[505][505];

int solve(int l, int r){
	int &ret = dp[l][r];
	if(ret != -1) return ret;

	if(l > r) return ret = 0;
	if(l == r) return ret = 1;

	ret = 1 + solve(l + 1, r);
	for(int i = l + 1; i <= r; ++ i)
		if(s[l] == s[i])
			ret = min(ret, solve(l + 1, i - 1) + solve(i, r));
	return ret;
}


int main(){
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("read.txt","r",stdin);
    //freopen("write.txt","w",stdout);
    #endif //ONLINE_JUDGE

    cin>>n>>s;
    memset(dp,-1,sizeof(dp));
    cout<<solve(0,n-1);

}
