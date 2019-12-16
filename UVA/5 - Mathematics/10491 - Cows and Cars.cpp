#include <bits/stdc++.h>
using namespace std;
#define ll long long int



int main(){

    #ifndef ONLINE_JUDGE
    freopen("read.txt","r",stdin);
    //freopen("write.txt","w",stdout);
    #endif // ONLINE_JUDGE

    double a,b,n;
    double t,t2,a2;
    while(cin>>a>>b>>n){
        t=a+b;
        t2=a+b-n-1;
        printf("%.5lf\n",((a/t)*(b/t2)) + ((b/t)*((b-1)/(t2))));
    }


    /*
        the probability of wining = the probability of selecting cow door and switching to car door
        or the probability of selecting car door and switching to other car door
    */




    return 0;




}





