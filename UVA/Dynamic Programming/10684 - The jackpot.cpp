#include <bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("read.txt","r",stdin);
    //freopen("write.txt","w",stdout);
    #endif // ONLINE_JUDGE

    int n;
    while(scanf("%d ",&n)==1 && n!=0) {
        int x,sum=0,ans=0;
        for(int i=0;i<n;i++){
            cin>>x;
            sum=max(sum+x,0);
            ans=max(sum,ans);
        }
        if(ans==0){
            cout<<"Losing streak."<<endl;
        }else{
            cout<<"The maximum winning streak is "<<ans<<"."<<endl;
        }

    }
    return 0;
}
