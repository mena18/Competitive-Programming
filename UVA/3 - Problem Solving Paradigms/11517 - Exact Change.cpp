#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define INF 2139062143

int main(){
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("read.txt","r",stdin);
    //freopen("write.txt","w",stdout);
    #endif // ONLINE_JUDGE

    int T;cin>>T;
    int p, n;
    int dp[10002], arr[102];
    while(T--){
        cin>>p>>n;
        for(int i = 1; i <= n; i++){cin>>arr[i];}
        memset(dp, 127, sizeof(dp));
        dp[0] = 0;

        for(int i = 1; i <= n; i++){
            for(int j = 10000; j > 0; j--){
                if(j - arr[i] >= 0 && dp[j - arr[i]] + 1 < dp[j])
                    dp[j] = dp[j - arr[i]] + 1 ;
            }
        }



        int i;
        for(i = p; dp[i] == INF; i++);

        cout<<i<<" "<<dp[i]<<endl;


    }

	return 0;
}





