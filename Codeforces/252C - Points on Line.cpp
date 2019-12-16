#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll c(ll n){
    return (n*(n+1))/2;
}

int main(){
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("read.txt","r",stdin);
    //freopen("write.txt","w",stdout);
    #endif //ONLINE_JUDGE

    ll n,d;
    cin>>n>>d;
    ll arr[100005];
    for(int i=0;i<n;i++){cin>>arr[i];}


    ll ans=0;
    for(int i=0;i<n-2;i++){
        int b = upper_bound(arr,arr+n,d+arr[i]) - arr;
        if(b-i<=1){continue;}
        if(b==n || arr[b]-arr[i]>d){b--;}
        ans+=c(b-i-1);
    }
    cout<<ans<<endl;






    return 0;
}
