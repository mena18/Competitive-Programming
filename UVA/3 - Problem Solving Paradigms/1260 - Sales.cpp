#include <bits/stdc++.h>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("read.txt","r",stdin);
    #endif // ONLINE_JUDGE

    int T;cin>>T;
    int n;
    int a[1001];
    while(T--){
        cin>>n;
        int ans=0;
        for(int i=0;i<n;i++){cin>>a[i];}

        for(int i=1;i<n;i++){
            int cur=a[i];
            for(int j=0;j<i;j++){
                if(cur>=a[j]){ans+=1;}
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
