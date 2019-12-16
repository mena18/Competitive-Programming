#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define INF 2147483647
#define max_num 1048580
 
 
 
 
int main() {
 
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("read.txt","r",stdin);
    //freopen("write.txt","w",stdout);
    #endif // ONLINE_JUDGE
 
    int T;cin>>T;
    while(T--){
        int n,k;cin>>n>>k;
        for(int i=0;i<n;i++){
            char c = (i%k)+'a';
            cout<<c;
        }cout<<endl;
    }
 
 
 
 
 
 
 
	return 0;
}