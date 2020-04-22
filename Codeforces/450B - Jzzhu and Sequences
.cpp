#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);


    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    #endif // ONLINE_JUDGE


    ll arr[6],n;
    cin>>arr[0]>>arr[1]>>n;arr[2] = arr[1] - arr[0];
    for(int i=3;i<6;i++){arr[i]=arr[i-3]*-1;}
    cout<<(arr[(n-1)%6]+(mod*2))%mod<<endl;

    return 0;
}
