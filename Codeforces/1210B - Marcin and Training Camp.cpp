#include <bits/stdc++.h>
using namespace std;
#define ll long long int


int compare(ll a,ll b){
    while(a>0 && b>0){
        if(a%2 > b%2){return 0;}
        a>>=1;b>>=1;
    }
    return 1;

}

int main(){
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("read.txt","r",stdin);
    //freopen("write.txt","w",stdout);
    #endif //ONLINE_JUDGE




    int n;cin>>n;
    ll arr[7005];
    map<ll,ll>::iterator iter;
    vector<ll> bits;
    map<ll,ll> values;

    int con=0;

    for(int i=0;i<n;i++){cin>>arr[i];}
    for(int i=0;i<n;i++){
        ll x = arr[i];
        ll k;cin>>k;

        if(values[x]!=0){
            con=1;
            bits.push_back(x);

        }
        values[x]+=k;

    }

    if(con==0){cout<<0<<endl;return 0;}

    sort(bits.begin(),bits.end());
    vector<ll>::iterator ip = unique(bits.begin(),bits.end());
    bits.resize(distance(bits.begin(), ip));

    ll ans=0;
    for(iter=values.begin();iter!=values.end();iter++){
        ll x = iter->first,v = iter->second;
        int counter=0;

        for(int i=(int)bits.size()-1;i>=0;i--){
            if(x>bits[i]){break;}
            if(compare(x,bits[i])){ans+=values[x];break;}
        }


    }

    cout<<ans<<endl;









    return 0;
}
