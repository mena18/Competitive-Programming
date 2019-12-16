#include <bits/stdc++.h>
using namespace std;
#define INF 1000000000
#define ii pair<int,int>



int main(){
    #ifndef ONLINE_JUDGE
    freopen("read.txt","r",stdin);
    #endif // ONLINE_JUDGE

    int T;cin>>T;
    while(T--){

        int n,m;cin>>n>>m;

        vector< vector< pair<int,int> > > list(n+2);

        for(int i=0;i<m;i++){
            int a,b,d;
            cin>>a>>b>>d;
            list[a].push_back({d,b});
        }


        int dist[1005];
        for(int i=0;i<=n;i++){dist[i]=INF;}
        dist[0]=0;

        for(int i=0;i<n+1;i++){
            for(int u=0;u<n;u++){
                for(int k=0;k<list[u].size();k++){
                    ii v = list[u][k];
                    if(dist[v.second]>dist[u]+v.first){
                        dist[v.second]=dist[u]+v.first;
                    }
                }
            }
        }

        /*check if there is negative cycle*/
        int cycle=0;
        for(int u=0;u<n;u++){
            for(int k=0;k<list[u].size();k++){
                ii v = list[u][k];
                if(dist[v.second]>dist[u]+v.first){
                    cycle=1;
                    //cout<<v.second<<"   "<<dist[v.second]<<"   "<<u<<"   "<<dist[u]<<"   "<<v.first<<endl;
                }
            }
        }

        printf("%s\n",cycle?"possible":"not possible");

    }

    return 0;



}
