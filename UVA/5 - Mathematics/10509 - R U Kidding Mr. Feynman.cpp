#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ui unsigned int


int main() {

    #ifndef ONLINE_JUDGE
    freopen("read.txt","r",stdin);
    //freopen("write.txt","w",stdout);
    #endif // ONLINE_JUDGE

    double n,a,dx;
    while(cin>>n && n!=0){
        a = (int)cbrt(n);
        dx = (n-(a*a*a))/(3*a*a);
        printf("%.4lf\n",a+dx);
    }


    return 0;


}
