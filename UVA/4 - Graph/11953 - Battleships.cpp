#include<bits/stdc++.h>
using namespace std;

int n;
char grid[102][102];


int dx[] = {-1,1,0,0};
int dy[] = {0,0,1,-1};

int valid(int i,int j){return i>=0 && i<n && j>=0 && j<n && grid[i][j]!='.';}

void dfs(int i,int j){
    grid[i][j]='.';
    for(int k=0;k<4;k++){
        if(valid(i+dx[k],j+dy[k])) {
            dfs(i+dx[k],j+dy[k]);
        }
    }
}

int main() {

    #ifndef ONLINE_JUDGE
    freopen("read.txt","r",stdin);
    //freopen("write.txt","w",stdout);
    #endif // ONLINE_JUDGE



    int T;cin>>T;

    for(int d=1;d<=T;d++){
        cin>>n;
        int counter=0;
        for(int i=0;i<n;i++){for(int j=0;j<n;j++){cin>>grid[i][j];}}
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='x'){
                    counter++;
                    dfs(i,j);
                }
            }
        }
        cout<<"Case "<<d<<": "<<counter<<endl;

    }





	return 0;
}
