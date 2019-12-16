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
        int n,s,t,m;cin>>n>>s>>t>>m;
        vector< vector< pair<int,int> > > list(n+2);
        for(int i=1;i<=m;i++){
            int a,b,d;
            cin>>a>>b>>d;
            list[b].push_back({d,a});
        }

        priority_queue< pair<int,int> > pq;
        int dist[102];
        for(int i=0;i<=n;i++){dist[i]=INF;}
        dist[s]=0;
        pq.push({0,s});

        while(!pq.empty()){
            ii front = pq.top();pq.pop();
            int d = -front.first;int u = front.second;
            if(d>dist[u]){continue;}
            for(int i=0;i<list[u].size();i++){
                ii v = list[u][i];
                if(dist[v.second]>dist[u]+v.first){
                    dist[v.second]=dist[u]+v.first;
                    pq.push({-dist[v.second],v.second});
                }
            }
        }
        int counter=0;
        for(int i=1;i<=n;i++){
            //cout<<dist[i]<< " ";
            if(t>=dist[i]){counter++;}
        }//cout<<endl;
        cout<<counter<<endl;

        if(T!=0){cout<<endl;}





    }



    return 0;



}
