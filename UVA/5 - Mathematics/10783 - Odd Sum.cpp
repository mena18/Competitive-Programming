#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ui unsigned int

map<ll,int> m;

int main() {

    #ifndef ONLINE_JUDGE
    freopen("read.txt","r",stdin);
    //freopen("write.txt","w",stdout);
    #endif // ONLINE_JUDGE

    int T;cin>>T;
    for(int i=1;i<=T;i++){
        int a,b;cin>>a>>b;
        if(a%2==0){a+=1;}if(b%2==0){b-=1;}
        int n = ((b-a)/2)+1;
        printf("Case %d: %d\n",i,((b+a)/2)*n);

    }

    return 0;


}
