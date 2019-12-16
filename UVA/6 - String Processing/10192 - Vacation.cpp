#include <bits/stdc++.h>
using namespace std;
#define ll long long int

string s1,s2;
int dp[110][110];
int solve(int i,int j){
    if(i>=s1.length() || j>=s2.length()){return 0;}

    int &ret = dp[i][j];
    if(ret!=-1){return ret;}

    if(s1[i]==s2[j]){return ret = 1+solve(i+1,j+1);}

    return ret = max(solve(i+1,j),solve(i,j+1));
}


int main(){
    //ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("read.txt","r",stdin);
    freopen("write.txt","w",stdout);
    #endif //ONLINE_JUDGE

    int t=1;
    while(getline(cin,s1)&&s1[0]!='#'){
        memset(dp,-1,sizeof(dp));
        getline(cin,s2);
        printf("Case #%d: you can visit at most %d cities.\n",t++,solve(0,0));
    }

    return 0;
}
