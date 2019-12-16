#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define isOn(S, j) ((S & (1 << j)) > 0)
#define setBit(S, j) (S |= (1 << j))
#define clearBit(S, j) (S &= ~(1 << j))

int compare(char a,char b){
    char la = tolower(a),lb = tolower(b);
    if(la==lb){return a<b;}
    else{return la<lb;}

}


int main(){

    #ifndef ONLINE_JUDGE
    //ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    freopen("read.txt","r",stdin);
    //freopen("write.txt","w",stdout);
    #endif // ONLINE_JUDGE



    int T;cin>>T;
    while(T--){
        char s[1000];scanf("%s",s);
        int n = strlen(s);
        sort(s,s+n,compare);
        cout<<s<<endl;
        while(next_permutation(s,s+n,compare)){
            cout<<s<<endl;
        }



    }


    return 0;
}
