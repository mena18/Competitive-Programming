#include <bits/stdc++.h>
using namespace std;
#define ll long long int


int main(){
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("read.txt","r",stdin);
    //freopen("write.txt","w",stdout);
    #endif //ONLINE_JUDGE


    int n;cin>>n;
    int arr[100005];
    int pre[100005];
    pre[0]=0;
    for(int i=0;i<n;i++){cin>>arr[i];pre[i+1] = pre[i]+arr[i];}
    string s;cin>>s;


    int maxi=0;

    for(int i=0;i<n;i++){if(s[i]=='1'){maxi+=arr[i];}}



    int cur=0;
    for(int i=s.length()-1;i>=0;i--){
        if(s[i]=='0'){continue;}
        maxi = max(cur+pre[i],maxi);
        cur+=arr[i];
    }

    cout<<maxi<<endl;


    return 0;
}
