#include <bits/stdc++.h>
using namespace std;
#define ll long long int


int arr[20000002]={};

int main(){

    #ifndef ONLINE_JUDGE
    freopen("read.txt","r",stdin);
    freopen("write.txt","w",stdout);
    #endif // ONLINE_JUDGE

    arr[1]=1;arr[0]=1;

    for(int i=2;i<4473;i++){ // 4473 is the sqrt of (20000000) the maximum number as said in the problem
        if(arr[i]==1){continue;}
        for(int j=i+i;j<20000000;j+=i){
            arr[j]=1;
        }
    }

    vector<pair<int,int> >  v(110000);

    int counter=1;
    v[1].first=2;
    for(int i=3;i<20000000;i++){

        if(arr[i]==0){
            if((i-v[counter].first)==2 ){
                v[counter].second=i;
                v[++counter].first=i;
            }else{
                v[counter].first=i;
            }
        }


    }

    int n;

    while(cin>>n){
        printf("(%d, %d)\n",v[n].first,v[n].second);
    }

    return 0;




}
