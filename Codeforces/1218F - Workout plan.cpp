#include <bits/stdc++.h>
using namespace std;
#define ll long long int


int main(){
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("read.txt","r",stdin);
    //freopen("write.txt","w",stdout);
    #endif //ONLINE_JUDGE

    priority_queue<ll> q;
    ll n,k,a;
    cin>>n>>k;
    ll arr[100005];
    ll prices[100005];
    for(int i=0;i<n;i++){cin>>arr[i];}
    cin>>a;
    for(int i=0;i<n;i++){cin>>prices[i];}


    ll price=0;
    for(int i=0;i<n;i++){
        q.push(-prices[i]);
        while(k<arr[i] && !q.empty()){
            ll num = -q.top();
            q.pop();
            k+=a;
            price+=num;
        }
        if(k<arr[i]){cout<<-1<<endl;return 0;}

    }


    cout<<price<<endl;



    return 0;


}
