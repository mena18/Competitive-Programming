https://www.hackerrank.com/challenges/luck-balance/problem


#include <bits/stdc++.h>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("read.txt","r",stdin);
    #endif // ONLINE_JUDGE
    int n,k;cin>>n>>k;
    int a,b;
    vector<int> v;
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>a>>b;sum+=a;
        if(b==1){v.push_back(a);}
    }
    sort(v.begin(),v.end());
    for(int i=0;i<(((int)v.size())-k);i++){cout<<v.size()-k<<endl;sum-=2*v[i];}
    cout<<sum;

    return 0;
}
