#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    //ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("read.txt","r",stdin);
    //freopen("write.txt","w",stdout);
    #endif //ONLINE_JUDGE

    double m;int n;cin>>m>>n;
    double ans=0;
    for(int i=1;i<=m;i++){
        ans+= i*( pow(i/m,n) - pow((i-1)/m,n) );
    }
    cout<<ans;

    return 0;
}
