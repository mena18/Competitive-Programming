#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ui unsigned int

int main() {

    #ifndef ONLINE_JUDGE
    freopen("read.txt","r",stdin);
    //freopen("write.txt","w",stdout);
    #endif // ONLINE_JUDGE

    int T;cin>>T;
    while(T--){
        int a,b;cin>>a>>b;
        int x1=(a+b)/2;
        int x2=a-x1;
        if(x1+x2 == a && abs(x1-x2) == b && x1>=0 && x2>=0){
            cout<<x1<<" "<<x2<<endl;
        }else{
            cout<<"impossible"<<endl;
        }
    }


    return 0;


}
