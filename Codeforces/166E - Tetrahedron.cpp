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
    #endif // ONLINE_JUDGE

    ll n;

    cin>>n;
    ll counter=0;
    for(int i=0;i<n-1;i++){
        if(i%2==0){
            counter = ((counter+1)*3)%MOD;
        }else{
            counter = ((counter-1)*3)%MOD;
        }
    }
    cout<<counter;







	return 0;
}

