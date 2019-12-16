#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ui unsigned int

map<ll,int> m;

int main() {

    #ifndef ONLINE_JUDGE
    freopen("read.txt","r",stdin);
    //freopen("write.txt","w",stdout);
    #endif // ONLINE_JUDGE

    ll n,a,b;
    while(cin>>n && n!=0){
        cin>>a>>b;
        m.clear();
        ll x=0;m[0]++;
        ll ans=0;
        while(1){
            x = (((a*((x*x)%n))%n)+b)%n;
            int& q = m[x];q++;
            if(q==2){ans++;}
            else if(q==3){cout<<n-ans<<endl;break;}
        }
    }


    return 0;


}
