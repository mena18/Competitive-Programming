#include<bits/stdc++.h>
using namespace std;

int n,m;
char grid[22][22];
char c;

int dx[] = {0,0,-1,1};
int dy[] = {1,-1,0,0};

int valid(int i,int j){return i>=0 && i<n && j>=0 && j<m && grid[i][j]==c;}

int dfs(int i,int j){
    grid[i][j]=c+1;
    int counter=1;
    for(int k=0;k<4;k++){
        if(valid(i+dx[k],(j+dy[k]+m)%m ) ) {
            counter+=dfs(i+dx[k],(j+dy[k]+m)%m);
            //if(j==0 && grid[i][m-1]==c){counter+=dfs(i,m-1);}
            //if(j==m-1 && grid[i][0]==c){counter+=dfs(i,0);}
        }
    }
    return counter;
}

int main() {

    #ifndef ONLINE_JUDGE
    freopen("read.txt","r",stdin);
    //freopen("write.txt","w",stdout);
    #endif // ONLINE_JUDGE





    while(cin>>n>>m){
        int counter=0;
        for(int i=0;i<n;i++){for(int j=0;j<m;j++){cin>>grid[i][j];}}
        int a,b;cin>>a>>b;
        c = grid[a][b];
        dfs(a,b);
        int maxi=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==c){
                    maxi=max(maxi,dfs(i,j));
                }
            }
        }
        cout<<maxi<<endl;


    }





	return 0;
}
