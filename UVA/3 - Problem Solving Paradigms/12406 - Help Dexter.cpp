#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll minimum=LONG_LONG_MAX,maximum=0;
int p,q;

void solve(ll number,int i){
    if(i==p){
        if(number%q==0){
            minimum  = min(minimum,number);
            maximum  = max(maximum,number);
        }
        return ;
    }
    solve(number*10+1,i+1);
    solve(number*10+2,i+1);
}

int main(){
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("read.txt","r",stdin);
    freopen("write.txt","w",stdout);
    #endif // ONLINE_JUDGE


    int T;cin>>T;
    int pw_2[] = {1,2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384,32768,65536,131072,262144};
    for(int C=1;C<=T;C++){
        minimum=LONG_LONG_MAX,maximum=0;
        cin>>p>>q;
        q = pw_2[q];
        solve(0,0);
        cout<<"Case "<<C<<": ";
        if(minimum==LONG_LONG_MAX && maximum==0){
            cout<<"impossible"<<endl;
        }else if(minimum==maximum){
            cout<<minimum<<endl;
        }else{
            cout<<minimum<<" "<<maximum<<endl;
        }


    }





    return 0;
}
