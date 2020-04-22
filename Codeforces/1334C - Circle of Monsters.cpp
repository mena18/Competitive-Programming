#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);


    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    #endif // ONLINE_JUDGE

    int t;cin>>t;
    pair<ll,ll> arr[300005];
    while(t--){
        int n;cin>>n;
        int start=-1;ll min_value = LONG_LONG_MAX;
        for(int i=0;i<n;i++){
            ll a,b;cin>>a>>b;
            arr[i].first=a;arr[i].second=b;
            if(a<min_value){min_value=a;start=i;}
            if(b<min_value){min_value=b;start=(i+1)%n;}
        }
        ll ans=0;
        for(int i=start;i<start+n;i++){
            int j = i%n,j1=(i+1)%n;
            ans+=arr[j].first;
            arr[j1].first = max((ll)0,arr[j1].first-arr[j].second);

        }
        cout<<ans<<endl;

    }





    return 0;
}
