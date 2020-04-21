#include <bits/stdc++.h>
using namespace std;


const int MAX=6;
int arr[MAX];
int visited[MAX];
bool ans=false;

void solve(int i,int sum){
    if(i==5){ans|=(sum==23);return ;}

    for(int j=0;j<5;j++){

        if(visited[j]){continue;}
        visited[j]=1;

        solve(i+1,sum+arr[j]);
        if(i>0){
            solve(i+1,sum-arr[j]);
            solve(i+1,sum*arr[j]);
        }


        visited[j]=0;
    }

}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);


    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    #endif // ONLINE_JUDGE


    while(true){
        ans=false;
        int cont=0;
        for(int i=0;i<5;i++){cin>>arr[i];visited[i]=0;cont +=arr[i];}
        if(!cont){break;}

        solve(0,0);
        if(ans){
            cout<<"Possible"<<endl;
        }else{
            cout<<"Impossible"<<endl;
        }

    }





    return 0;
}
