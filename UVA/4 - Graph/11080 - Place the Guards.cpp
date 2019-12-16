#include<bits/stdc++.h>
using namespace std;



int main() {

    #ifndef ONLINE_JUDGE
    freopen("read.txt","r",stdin);
    //freopen("write.txt","w",stdout);
    #endif // ONLINE_JUDGE


    int T;cin>>T;
    int n,m;
    while(T--){
        cin>>n>>m;
        vector< vector<int> > v(n+1);
        for(int i=0;i<m;i++){
            int a,b;cin>>a>>b;
            v[a].push_back(b);
            v[b].push_back(a);
        }
        int visited[202];memset(visited,-1,sizeof(visited));
        queue<int> q;
        int bip=1;

        int maxi_s=0;

        for(int i=0;i<n && bip;i++){
            if(visited[i]==-1){
                int s=1;
                int tot=1;
                q.push(i);
                visited[i]=1;
                while(!q.empty() && bip){
                    int u = q.front();q.pop();
                    for(int j=0;j<v[u].size();j++){
                        int k=v[u][j];
                        if(visited[ k ]==-1){
                            q.push(k);
                            visited[k]=1-visited[u];
                            tot++;
                            s+=visited[k];
                        }else if(visited[k]==visited[u]){
                            bip=0;break;
                        }
                    }
                }
                maxi_s+=max(1,min(s,tot-s));
            }
        }

        if(bip==0){maxi_s=-1;}
        cout<<maxi_s<<endl;

    }









	return 0;
}
