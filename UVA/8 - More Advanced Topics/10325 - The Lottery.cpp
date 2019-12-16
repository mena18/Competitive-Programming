#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int n,m;
ll ans=0;
int v[20];

ll gcd(ll a,ll b){
    if(b==0)
        return a;
    return gcd(b,a%b);
}

void solve(int index,ll number,int mul_count){
    if(index==m){
        if(mul_count%2==0){
            ans+=(n/number);
        }else{
            ans-=(n/number);
        }
        return ;
    }
    if(number>n)
        return;

    solve(index+1,number,mul_count);
    solve(index+1,number*(v[index]/gcd(number, v[index])),mul_count+1);

}

int main(){

    #ifndef ONLINE_JUDGE
    freopen("read.txt","r",stdin);
    //freopen("write.txt","w",stdout);
    #endif // ONLINE_JUDGE

    while(cin>>n>>m){
        for(int i=0;i<m;i++){cin>>v[i];}
        ans=0;
        solve(0,1,0);
        cout<<ans<<endl;
    }

    return 0;




}




