#include <bits/stdc++.h>
#define INF 1000000000
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("read.txt","r",stdin);
    freopen("write.txt","w",stdout);
    #endif // ONLINE_JUDGE

    int T;cin>>T;
    while(T--){
        int counter=0;
        int flag=0;
        int a,b,c;cin>>a>>b>>c;
        for(int x=-100;3*x<=a;x++){
            if(flag ){break;}
            if(x==0){continue;}
            for(int y=x+1;x+y<a-y;y++){
                if(flag || x*x+y*y>=c || x*y >b || (x<0 && y>0) ){break;}
                if(y==0){continue;}
                for(int z=y+1; x+y+z<=a;z++){
                    if(x*y*z>b){break;}
                    if(z<=0){z=1;}
                    counter++;
                    if(x+y+z == a && x*y*z == b && x*x+y*y+z*z==c){
                        flag=1;
                        cout<<x<<" "<<y<<" "<<z<<endl;
                        break;
                    }
                }
            }
        }

        if(!flag){cout<<"No solution."<<endl;}

    }





    return 0;
}
