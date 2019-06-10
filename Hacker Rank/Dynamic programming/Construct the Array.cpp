//https://www.hackerrank.com/challenges/construct-the-array/problem

#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007


int main(){
    int n,k,x;
    cin>>n>>k>>x;x=x-1;

    long long int arr[2][2];arr[0][0]=1;arr[0][1]=0;
    int op=1;

    for(int i=1;i<n;i++){
        arr[op][0] = ((arr[!op][1]%mod)*(k-1))%mod;
        arr[op][1] = (((arr[!op][1]%mod)*(k-2))%mod + arr[!op][0])%mod;
        op=!op;
    }
    cout<<arr[!op][min(1,x)];


}
