#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll a,b;cin>>a>>b;
    if(b>a){swap(a,b);}
    ll ans=0;
    while(a>0 && b>0){if(a>=b){ans+=a/b;a=a%b;swap(a,b);}}
    cout<<ans<<endl;
    return 0;
}