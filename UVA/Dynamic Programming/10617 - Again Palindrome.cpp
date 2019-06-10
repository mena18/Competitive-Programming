//https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&category=0&problem=1558&mosmsg=Submission+received+with+ID+23409272

#include <bits/stdc++.h>
using namespace std;


string s;
long long int dp[101][101];


long long int  palindrome(int i,int j){
    if(i==j){return 1;}
    if(i+1==j){return 2 + (s[i]==s[j]);}

    long long int& ret = dp[i][j];
    if(ret!=-1){return ret;}
    ret=0;

    ret+=palindrome(i+1,j)+palindrome(i,j-1);
    if(s[i]==s[j])
        ret+=1;
    else
        ret-=palindrome(i+1,j-1);

    return ret;


}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("read.txt","r",stdin);
    #endif // ONLINE_JUDGE

    int T;cin>>T;
    while(T--){
        cin>>s;
        memset(dp,-1,sizeof(dp));
        cout<<palindrome(0,s.length()-1)<<endl;


    }

    return 0;



}
