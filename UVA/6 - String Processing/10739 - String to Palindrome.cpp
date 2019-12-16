#include <bits/stdc++.h>
using namespace std;


string s;
int dp[1001][1001];


int palindrome(int i,int j){
    if(i>=j){return 0;}

    int& ret = dp[i][j];
    if(ret!=-1){return ret;}
    ret=0;

    if(s[i]==s[j])
        return ret = palindrome(i+1,j-1);


    int choice1 = 1 + palindrome(i+1,j-1);
    int choice2 = 1 + palindrome(i+1,j);
    int choice3 = 1 + palindrome(i,j-1);

    return ret = min(choice1,min(choice2,choice3));


}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("read.txt","r",stdin);
    #endif // ONLINE_JUDGE

    int T;cin>>T;
    int cases=1;
    while(T--){
        cin>>s;
        memset(dp,-1,sizeof(dp));
        printf("Case %d: %d\n",cases++,palindrome(0,s.length()-1));


    }

    return 0;



}
