#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define INF 2147483647
#define max_num 1048580
#define MOD 1000000007




int main(){

    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("read.txt","r",stdin);
    //freopen("write.txt","w",stdout);
    #endif // ONLINE_JUDGE

    string s1,s2;cin>>s1>>s2;
    int i = s1.length()-1,j = s2.length()-1;

    while(i>=0 && j>=0){
        if(s1[i]!=s2[j]){break;}
        i--;
        j--;
    }

    cout<<i+j+2<<endl;







	return 0;
}

