#include <bits/stdc++.h>
using namespace std;
#define ll long long int


int main(){
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("read.txt","r",stdin);
    //freopen("write.txt","w",stdout);
    #endif //ONLINE_JUDGE


    ll n,k;cin>>n>>k;

    map<ll,ll> m;

    ll arr[100005];
    for(int i=0;i<n;i++){cin>>arr[i];m[arr[i]] = 1;}
    sort(arr,arr+n);

    int counter=0;
    for(int i=0;i<n;i++){
        if(m[arr[i]]==1){
            counter+=1;
            if(m[ arr[i]*k ]==1){m[ arr[i]*k ]=0;}
        }
    }
    cout<<counter<<endl;




    return 0;
}
