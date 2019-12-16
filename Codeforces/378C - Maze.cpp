#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int n,m,k;
char arr[505][505];
int visited[505][505]={};

int valid(int i,int j) {return i>=0 && j>=0 && i<n && j<m && visited[i][j]==0 && arr[i][j]=='.';}

int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};

int dfs(int i,int j){
    visited[i][j]=1;
    for(int k=0;k<4;k++){
        int new_i = i+dx[k],new_j = j+dy[k];
        if(valid(new_i,new_j)){
            dfs(new_i,new_j);
        }
    }
    if(k>0){k--;arr[i][j]='X';}
}

int main(){
    //ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("read.txt","r",stdin);
    //freopen("write.txt","w",stdout);
    #endif //ONLINE_JUDGE

    cin>>n>>m>>k;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }




    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(valid(i,j) && k>0){
                dfs(i,j);
            }
        }
    }


    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j];
        }cout<<endl;
    }


    return 0;
}
