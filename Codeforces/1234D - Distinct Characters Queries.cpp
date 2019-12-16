#include <bits/stdc++.h>
using namespace std;
#define ll long long int


int main(){
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("read.txt","r",stdin);
    //freopen("write.txt","w",stdout);
    #endif //ONLINE_JUDGE


    vector< set<int> > v(26);
    set<int>::iterator  it;
    string s;int n;cin>>s>>n;

    for(int i=0;i<s.length();i++){v[s[i]-'a'].insert(i);}

    for(int i=0;i<n;i++){
        int op;cin>>op;
        if(op==1){
            int p;cin>>p;p--;
            char c;cin>>c;
            v[s[p]-'a'].erase(p);
            v[c-'a'].insert(p);
            s[p] = c;
        }else{
            int l,r;cin>>l>>r;l--;r--;
            int ans=0;
            for(int i=0;i<26;i++){
                it = v[i].lower_bound(l);
                if(*it<=r && it!=v[i].end()){ans++;}
            }
            cout<<ans<<endl;
        }
    }










    return 0;
}
