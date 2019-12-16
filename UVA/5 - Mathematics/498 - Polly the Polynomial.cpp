#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ui unsigned int

int n;
ll arr[1000];
ll sum_poly(int x){
    ll base=1, num=0;
    int i=n-1;
    while(i>=0){
        num+=base*arr[i--];
        base*=x;
    }
    return num;

}


int main() {

    #ifndef ONLINE_JUDGE
    freopen("read.txt","r",stdin);
    freopen("write.txt","w",stdout);
    #endif // ONLINE_JUDGE

    string s;
    stringstream ss;
    int a;
    while(getline(cin, s)){
        n=0;
        ss.clear();ss << s;
        while(ss >> a){arr[n++]=a;}
        getline(cin, s);
        ss.clear();ss << s;
        ss>>a;cout<<sum_poly(a);
        while(ss >> a){cout<<" "<<sum_poly(a);}
        cout<<endl;
    }



    return 0;


}
