#include<bits/stdc++.h>
using namespace std;

long long int fact[31];

long long int c(int i,int j){
    if(i<j){return 0;}
    double s=1;
    j=min(j,i-j);
    for(int k=1;k<=j;k++){
        s=s*(i-k+1)/k;
    }
    return (long long int) s;
}

int main(){

    #ifndef ONLINE_JUDGE
    freopen("read.txt","r",stdin);
    #endif // ONLINE_JUDGE


    int n,m,t;cin>>n>>m>>t;

    long long int ans=0;
    int start= max(4,t-m);
    for(int i=start;i<=t-1;i++){
        ans+=c(n,i)*c(m,t-i);
    }
    cout<<ans;




    return 0;
}
