#include <bits/stdc++.h>
using namespace std;
#define ll long long int


int main(){
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("read.txt","r",stdin);
    //freopen("write.txt","w",stdout);
    #endif //ONLINE_JUDGE



    ll n;cin>>n;
    if(n<3){cout<<-1<<endl;}
    else if(n%2==0){
        cout<<((n*n-4)/4)<<" "<<((n*n+4)/4)<<endl;
    }else{
        cout<<((n*n-1)/2)<<" "<<((n*n+1)/2)<<endl;
    }






    return 0;
}
