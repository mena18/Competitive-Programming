#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);


    #ifndef ONLINE_JUDGE
    //freopen("input.txt","r",stdin);
    #endif // ONLINE_JUDGE

    ll n,m;cin>>n>>m;
    ll small = m-1,big =m+1;

    if(small-1 >= n-big){cout<<max(small,(ll)1)<<endl;}
    else{cout<<min(big,n)<<endl;}

    return 0;
}
