#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    //ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("read.txt","r",stdin);
    //freopen("write.txt","w",stdout);
    #endif //ONLINE_JUDGE

    int T;cin>>T;
    while(T--){
        int n;cin>>n;
        string s[2];
        cin>>s[0]>>s[1];
        int i=0,j=0;
        while(j<n){
            if(s[i][j]<'3'){j++;}
            else{
                if(s[!i][j]>'2'){
                    i=!i;j++;
                }else{
                    break;
                }
            }
        }
        if(i==1 && j==n){cout<<"YES"<<endl;}
        else{cout<<"NO"<<endl;}



    }

    return 0;
}
