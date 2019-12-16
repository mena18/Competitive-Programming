#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define INF 2147483647
#define max_num 1048580

int arr[2][max_num];

int main(){
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("read.txt","r",stdin);
    //freopen("write.txt","w",stdout);
    #endif // ONLINE_JUDGE


    int n;cin>>n;
    ll ans=0;
    int sum=0;
    arr[0][0]=1;
    for(int i=1;i<=n;i++){
        int x;cin>>x;
        sum^=x;
        ans+=arr[i%2][sum];
        arr[i%2][sum]++;

    }
    cout<<ans<<endl;






	return 0;
}





