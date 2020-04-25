//https://www.hackerrank.com/challenges/beautiful-triplets/problem

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,d;
    cin>>n>>d;
    int arr[10005];
    int counter[20060]={};

    for(int i=0;i<n;i++){
        cin>>arr[i];
        counter[arr[i]]++;
    }
    int ans=0;

    for(int i=0;i<n;i++){
        int k = arr[i];
        ans+=counter[k+d]*counter[k+d+d];
    }

    cout<<ans<<endl;

    return 0;
}
