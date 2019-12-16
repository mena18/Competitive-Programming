#include<bits/stdc++.h>
using namespace std;
#define ll long long int

#define isOn(S, j) ((S & (1 << j)) > 0)
#define setBit(S, j) (S |= (1 << j))
#define clearBit(S, j) (S &= ~(1 << j))

int main(){
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("read.txt","r",stdin);
    freopen("write.txt","w",stdout);
    #endif // ONLINE_JUDGE



    unsigned n,m,l,r;
    while(cin>>n>>l>>r){
        m=0;
        for(int i=31;i>=0;i--){
            setBit(m,i);
            if(!isOn(n,i)){
                if(m>r){clearBit(m,i);}
            }else{
                if(m>l){clearBit(m,i);}
            }
        }

        cout<<m<<endl;
    }



    return 0;
}
