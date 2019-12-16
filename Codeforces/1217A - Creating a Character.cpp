#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define INF 2147483647

#define isOn(S, j) (S & (1 << j))
#define setBit(S, j) (S |= (1 << j))
#define clearBit(S, j) (S &= ~(1 << j))
#define X first
#define Y second



int main(){
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("read.txt","r",stdin);
    //freopen("write.txt","w",stdout);
    #endif // ONLINE_JUDGE


    int T;cin>>T;
    while(T--){
        int a,b,c;cin>>a>>b>>c;
        int c1 = (b+c-a+2)/2 ;
        cout<<max(0,min(c,c-c1)+1)<<endl;
    }







	return 0;
}





