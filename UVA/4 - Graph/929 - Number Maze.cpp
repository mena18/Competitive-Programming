#include <bits/stdc++.h>
using namespace std;
#define INF 1000000000
#define ii pair<int,int>
#define iv pair<int,pair<int,int> >

int n,m;

int dist[1000][1000];
int arr[1000][1000];



int valid(int i,int j){return i>=0 && i<n && j>=0 && j<m ;}


int main(){
    #ifndef ONLINE_JUDGE
    freopen("read.txt","r",stdin);
    //freopen("write.txt","w",stdout);
    #endif // ONLINE_JUDGE

    int T;cin>>T;
    priority_queue< pair<int,pair<int,int> > > pq;
    int dx[] = {0,0,1,-1};
    int dy[] = {1,-1,0,0};

    while(T--){
        cin>>n>>m;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>arr[i][j];
                dist[i][j]=INF;
            }
        }


        dist[0][0]=arr[0][0];
        pq.push({arr[0][0],{0,0}});

        while(!pq.empty()){
            iv front = pq.top();pq.pop();
            int d = -front.first;
            int i = front.second.first;
            int j = front.second.second;

            if(d>dist[i][j]){continue;}

            for(int k=0;k<4;k++){
                int new_x = i+dx[k];
                int new_y = j+dy[k];
                if(valid(new_x,new_y)){
                    int& ret = dist[new_x][new_y];
                    if(ret>dist[i][j]+arr[new_x][new_y]){
                        ret=dist[i][j]+arr[new_x][new_y];
                        pq.push({-ret,{new_x,new_y}}  );
                    }
                }
            }


        }

        cout<<dist[n-1][m-1]<<endl;


    }






    return 0;



}
