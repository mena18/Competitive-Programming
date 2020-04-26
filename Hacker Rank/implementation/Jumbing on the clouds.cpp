https://www.hackerrank.com/challenges/jumping-on-the-clouds/problem

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;cin>>n;
    int arr[105];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=0;
    int i=0;
    while(i<n-1){
        if(arr[i+2]==1){
            i+=3;
            ans+=2;
        }else{
            i+=2;
            ans+=1;
        }
    }
    cout<<ans;
}

