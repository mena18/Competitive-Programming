#include<bits/stdc++.h>
using namespace std;


int main() {

    #ifndef ONLINE_JUDGE
    freopen("read.txt","r",stdin);
    freopen("write.txt","w",stdout);
    #endif // ONLINE_JUDGE








    int T;cin>>T;
    while(T--){
        int n,m;cin>>n>>m;
        vector< vector<int> > v(n+2);
        for(int i=0;i<m;i++){
            int a,b;cin>>a>>b;
            v[a].push_back(b);
            v[b].push_back(a);
        }
        int visited[1002]={};
        int parent[1002]={};




        queue<int> q;
        q.push(0);
        visited[0]=1;

        while(!q.empty()){
            int u = q.front();q.pop();
            for(int i=0;i<v[u].size();i++){
                int j=v[u][i];
                if(visited[j]==0){
                    visited[j]=1;
                    parent[j]=parent[u]+1;
                    q.push(j);
                }


            }

        }

        for(int i=1;i<n;i++){
            cout<<parent[i]<<endl;
        }
        if(T!=0){cout<<endl;}







}










	return 0;
}
