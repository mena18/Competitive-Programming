#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define INF 9000000000000000

int main(){
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("read.txt","r",stdin);
    //freopen("write.txt","w",stdout);
    int t;cin>>t;
    while(t--){
    #endif //ONLINE_JUDGE

    ll n,a;cin>>n>>a;
    ll arr[200005];
    ll arr2[200005];
    ll sum=0;
    for(int i=0;i<n;i++){cin>>arr[i];sum+=arr[i];}

    for(int i=0;i<n;i++){
        ll cur_sum = sum-arr[i];
        ll one = max(a-cur_sum,(ll)1);
        ll two = min(arr[i],a-n+1);
        cout<<arr[i] - (two-one+1)<<" ";

    }
    cout<<endl;



    #ifndef ONLINE_JUDGE
    }
    #endif // ONLINE_JUDGE

    return 0;


}
