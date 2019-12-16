#include<bits/stdc++.h>
using namespace std;

int n,m;
vector<vector<int> > v(105);
vector<int> top;
int visited[102]={};


void dfs(int u){
    visited[u]=1;
    for(int i=0;i<v[u].size();i++){
        if(!visited[ v[u][i] ])
            dfs(v[u][i]);
    }
    top.push_back(u);
}

int main() {

    #ifndef ONLINE_JUDGE
    freopen("read.txt","r",stdin);
    //freopen("write.txt","w",stdout);
    #endif // ONLINE_JUDGE





    while(cin>>n>>m && (n>0 || m>0)){
        int a,b;
        memset(visited,0,sizeof(visited));
        for(int i = 0; i < n+3; i++)
            v[i].clear();

        top.clear();

        for(int i=0;i<m;i++){
            cin>>a>>b;
            v[a].push_back(b);
        }
        for(int i=1;i<=n;i++){
            if(!visited[i])
                dfs(i);
        }

        for(int i=(int)top.size()-1;i>=0;i--){
            cout<<top[i];
            if(i!=0)
                cout<<" ";
            else
                cout<<endl;
        }


    }





	return 0;
}
