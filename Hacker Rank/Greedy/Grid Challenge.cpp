https://www.hackerrank.com/challenges/grid-challenge/problem


#include<bits/stdc++.h>
using namespace std;



int main(){
    //freopen("read.txt","r",stdin);
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        char k;
        vector<vector<int> > arr(n);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>k;
                arr[i].push_back(k);
            }
        }
        for(int i=0;i<n;i++){
            sort(arr[i].begin(),arr[i].end());
        }
        int var=1;
        for(int i=0;i<n;i++){
            for(int j=0;j<n-1;j++){
                if(arr[j][i]>arr[j+1][i]){var=0;break;}
            }
            if(!var){break;}
        }
        if(var){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }

    }

    return 0;
}
