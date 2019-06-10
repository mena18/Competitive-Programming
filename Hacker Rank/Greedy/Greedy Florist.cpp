https://www.hackerrank.com/challenges/greedy-florist/problem


#include<bits/stdc++.h>
using namespace std;


bool wayToSort(int i, int j) { return i > j; }

int main(){
    //freopen("read.txt","r",stdin);
    int n,k;cin>>n>>k;
    int arr[105];
    for(int i=0;i<n;i++){cin>>arr[i];}
    sort(arr,arr+n,wayToSort);

    int increasing=0,ans=0;
    for(int i=0;i<n;i++){
        if(i%k==0){increasing++;}
        ans+=arr[i]*increasing;
    }
    cout<<ans<<endl;

    return 0;
}

