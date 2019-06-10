//https://www.hackerrank.com/challenges/angry-children/problem


#include<bits/stdc++.h>
using namespace std;


bool wayToSort(int i, int j) { return i > j; }

int main(){
    //freopen("read.txt","r",stdin);
    int n,k;cin>>n>>k;int arr[100005];
    for(int i=0;i<n;i++){cin>>arr[i];}
    int mini=INT_MAX;
    sort(arr,arr+n);
    for(int i=0;i<n-k+1;i++){
        mini = min(mini,arr[i+k-1]-arr[i]);
    }
    cout<<mini;




    return 0;
}

