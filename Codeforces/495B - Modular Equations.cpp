#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define INF 2147483647
#define max_num 1048580
#define MOD 1000000007




int main(){

    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("read.txt","r",stdin);
    //freopen("write.txt","w",stdout);
    #endif //ONLINE_JUDGE


    ll a,b;
    cin>>a>>b;
    if(a==b){cout<<"infinity"<<endl;return 0;}
    if(a<b){cout<<0<<endl;return 0;}
    a = a-b;
    ll x;
    ll ans=0;
    for(x=1;x*x<a;x++){
        if(a%x==0){
            if(x>b){ans++;}
            if(a/x>b){ans++;}
        }
    }
    if(x*x==a  && x>b){ans++;}
    cout<<ans<<endl;


	return 0;
}

