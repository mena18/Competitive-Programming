#include<bits/stdc++.h>
using namespace std;

#define x first
#define y second

int grid[1002][1002];
int parent[1002][1002];



int main() {

    #ifndef ONLINE_JUDGE
    freopen("read.txt","r",stdin);
    //freopen("write.txt","w",stdout);
    #endif // ONLINE_JUDGE





    int dx[] = {-1,1,0,0};
    int dy[] = {0,0,1,-1};


    int n=1,m=1;
    while(cin>>n>>m && n!=0 && m!=0){
        int qu;cin>>qu;



        for(int i=0;i<=n;i++){
            for(int j=0;j<=m;j++){
                grid[i][j]=0;
            }
        }
        for(int i=0;i<=n;i++){
            for(int j=0;j<=m;j++){
                parent[i][j]=0;
            }
        }


        for(int i=0;i<qu;i++){
            int a,b;cin>>a>>b;
            for(int j=0;j<b;j++){int k;cin>>k;grid[a][k]=1;}
        }
        int start_x,start_y,end_x,end_y;
        cin>>start_x>>start_y>>end_x>>end_y;
        parent[end_x][end_y] = -1;

        queue< pair<int,int> > q;
        q.push({start_x,start_y});
        grid[start_x][start_y]=1;

        int loop=1;

        while(!q.empty() && loop){
            pair<int,int> u = q.front();q.pop();
            for(int i=0;i<4;i++){
                int new_x = u.x+dx[i];
                int new_y = u.y+dy[i];

                if(new_x==end_x && new_y==end_y){parent[new_x][new_y] = parent[u.x][u.y]+1;loop=0;break;}

                if(new_x>=0 && new_x<n && new_y>=0 && new_y<m && grid[new_x][new_y]==0){
                    grid[new_x][new_y]=1;
                    parent[new_x][new_y] = parent[u.x][u.y]+1;
                    q.push({new_x,new_y});
                }
            }

        }

        cout<<parent[end_x][end_y]<<endl;







}










	return 0;
}
