#include <bits/stdc++.h>
using namespace std;
#define ll long long int



int main(){
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("read.txt","r",stdin);
    //freopen("write.txt","w",stdout);
    #endif //ONLINE_JUDGE


    int n,k;cin>>n>>k;
    int arr[200005];
    int maxi_int=0;
    for(int i=0;i<n;i++){cin>>arr[i];maxi_int = max(maxi_int,arr[i]);}

    int ans=INT_MAX;
    vector<vector<int> > v(200005);

    for(int i=0;i<n;i++){
        int num = arr[i];
        int c = 0;
        while(num>0){
            v[num].push_back(c);
            num>>=1;
            c+=1;
        }
    }

    for(int i=0;i<=maxi_int;i++){
        sort(v[i].begin(),v[i].end());
        if( (int)v[i].size() >=k ){ans = min(ans,accumulate(v[i].begin(),v[i].begin()+k,0));}
    }

    cout<<ans<<endl;


    return 0;
}
