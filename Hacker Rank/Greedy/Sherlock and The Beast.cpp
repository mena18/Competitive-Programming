https://www.hackerrank.com/challenges/sherlock-and-the-beast/problem

#include <bits/stdc++.h>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("read.txt","r",stdin);
    #endif // ONLINE_JUDGE
    int arr[8] = {-1,-1,-1,555,-1,33333,555555,-1};
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        if(n<8){cout<<arr[n]<<endl;}
        else if(n%3==0){for(int i=0;i<n;i++){cout<<5;}cout<<endl;}
        else if(n%3==1){for(int i=0;i<n-10;i++){cout<<5;}for(int i=0;i<10;i++){cout<<3;}cout<<endl;}
        else if(n%3==2){for(int i=0;i<n-5;i++){cout<<5;}for(int i=0;i<5;i++){cout<<3;}cout<<endl;}
    }
    return 0;
}
