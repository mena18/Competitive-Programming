#include <bits/stdc++.h>
#define INF 1000000000
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("read.txt","r",stdin);
    #endif // ONLINE_JUDGE

    int T;cin>>T;
    while(T--){
        int n;cin>>n;
        int mx_n=-1;int mx_ans=-INF;
        cin>>mx_n;
        for(int i=1;i<n;i++){
            int a;cin>>a;
            mx_ans = max(mx_ans,mx_n-a);
            mx_n = max(mx_n,a);

        }
        cout<<mx_ans<<endl;


    }

    return 0;
}
