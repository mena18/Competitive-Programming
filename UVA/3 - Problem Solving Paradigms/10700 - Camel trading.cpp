#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){

    #ifndef ONLINE_JUDGE
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    freopen("read.txt","r",stdin);
    freopen("write.txt","w",stdout);
    #endif // ONLINE_JUDGE



    int T;cin>>T;
    while(T--){
        string s;cin>>s;
        vector<ll> v;
        ll num=0;
        char prev='+';
        for(int i=0;i<s.length();i++){
            char c = s[i];
            if(c=='*' || c=='+'){
                if(prev=='*'){v[(int)v.size()-1]*=num;}
                else {v.push_back(num);}
                num=0;
                prev=c;
            }
            else {num*=10;num+=c-'0';}
        }
        if(prev=='*' && num!=0){v[(int)v.size()-1]*=num;}
        else {v.push_back(num);}
        ll minimum=0;
        for(int i=0;i<v.size();i++){minimum+=v[i];}



        num=0;
        prev='*';
        v.clear();
        for(int i=0;i<s.length();i++){
            char c = s[i];
            if(c=='*' || c=='+'){
                if(prev=='+'){v[(int)v.size()-1]+=num;}
                else {v.push_back(num);}
                num=0;
                prev=c;
            }
            else {num*=10;num+=c-'0';}
        }
        if(prev=='*' && num!=0){v.push_back(num);}
        else {v[(int)v.size()-1]+=num;}
        ll maximum=1;
        for(int i=0;i<v.size();i++){maximum*=v[i];}

        printf("The maximum and minimum are %lld and %lld.\n",maximum,minimum);

    }



    return 0;
}
