#include<bits/stdc++.h>
using namespace std;

int n;
int grid[12][12]={};
int visited[12][12]={};

int i=0;

int dx[] = {0,1,0,-1};
int dy[] = {1,0,-1,0};

int valid(int x,int y){return  x>=0 && x<n && y>=0 && y<n && !visited[x][y];}

int dfs(int x,int y){
    visited[x][y]=1;
    while(i<4){
        int new_x = x+dx[i];
        int new_y = y+dy[i];
        if(valid(new_x,new_y)){
            return grid[x][y] + dfs(new_x,new_y);
        }
        i++;
    }
    return grid[x][y];

}

int main() {

    #ifndef ONLINE_JUDGE
    freopen("read.txt","r",stdin);
    freopen("write.txt","w",stdout);
    #endif // ONLINE_JUDGE




    int T=1;
    while(cin>>n && n>0) {

        memset(visited,0,sizeof(visited));
        for(int u=0; u<n; u++){
            for(int v=0;v<n;v++){
                cin>>grid[u][v];
            }
        }
        i=0;
        cout<<"Case "<<T++<<": "<<dfs(0,0);
        for(int q=1;q<=(n-1)/2;q++){
            i=0;
            cout<<" "<<dfs(q,q);
        }cout<<endl;


    }





	return 0;
}
