#include<bits/stdc++.h>
using namespace std;



int main() {

    #ifndef ONLINE_JUDGE
    freopen("read.txt","r",stdin);
    //freopen("write.txt","w",stdout);
    #endif // ONLINE_JUDGE


    int n,m;



    while(cin>>n && n!=0){
        cin>>m;
        vector< vector<int> > v(n+2);
        int visited[202];
        memset(visited,-1,sizeof(visited));
        int a,b;
        for(int i=0;i<m;i++){
            cin>>a>>b;
            v[a].push_back(b);
            v[b].push_back(a);
        }
        queue<int> q;
        int bip=1;
        for(int i=0;i<n && bip;i++){
            if(visited[i]==-1){
                q.push(i);
                visited[i]=0;
                while(!q.empty() && bip){
                    int u = q.front();q.pop();
                    for(int j=0;j<v[u].size();j++){
                        int k=v[u][j];
                        if(visited[ k ]==-1){
                            q.push(k);
                            visited[k]=1-visited[u];
                        }else if(visited[k]==visited[u]){
                            bip=0;break;
                        }
                    }
                }
            }
        }
        if(bip){
            cout<<"BICOLORABLE."<<endl;
        }else{
            cout<<"NOT BICOLORABLE."<<endl;
        }
    }




	return 0;
}
