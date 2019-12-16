#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define INF 2147483647
#define max_num 1048580
 
 
ll n;
 
ll calc(ll k){
    if(k==0){return 0;}
    ll n2 = n;
    ll counter_1=0;
    while(n2>0){
        if(n2-k< 0 ){return counter_1+n2;}
        n2=n2-k;
        counter_1+=k;
        ll v = n2/10;
        n2-=v;
    }
    return counter_1;
}
 
 
int main() {
 
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("read.txt","r",stdin);
    //freopen("write.txt","w",stdout);
    #endif // ONLINE_JUDGE
 
    cin>>n;
 
 
 
 
    ll Min = LONG_LONG_MAX;
 
 
 
    ll l = 0,r=n+1;
    while(l!=r){
        ll k = (r+l)/2;
        ll counter = calc(k);
        if(counter >= (n/2) + bool(n%2) ){
            Min = min(Min,k);
            r = k;
        }else{
            l=k+1;
        }
    }
 
    cout<<Min<<endl;
 
 
 
    return 0;
}