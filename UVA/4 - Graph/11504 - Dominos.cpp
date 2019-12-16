#include<bits/stdc++.h>
using namespace std;

#define ii pair<int,int>
#define vi vector<int>
#define vii vector<pair<int,int> >
#define loop(i,s,e) for(int i=s;i<e;i++)
#define INF 1000000000

vector<vi > AdjList;
vi visited;
stack<int > s;

int counter=0;
int components=0;

void dfs(int u,int flag) {
    visited[u]=1;
    for(int i=0;i<AdjList[u].size();i++){
        int v = AdjList[u][i];
        if(!visited[v]){dfs(v,flag);}
    }

    if(flag)
        s.push(u);

}



int main() {

    #ifndef ONLINE_JUDGE
    freopen("read.txt","r",stdin);
    freopen("write.txt","w",stdout);
    #endif // ONLINE_JUDGE

    int T;cin>>T;
    while(T--){
        counter=0;
        components=0;
        int v,e;
        cin>>v>>e;
        AdjList.assign(v+2,vi());visited.assign(v+2,0);

        for(int i=0;i<e;i++){
            int a,b;cin>>a>>b;
            AdjList[a].push_back(b);
        }


        for(int i=1;i<=v;i++){
            if(!visited[i]){
                dfs(i,1);
            }
        }
        visited.assign(v+2,0);
        counter=0;
        while(!s.empty()){
            int v = s.top();s.pop();
            if(!visited[v]){
                counter++;
                dfs(v,0);
            }
        }
        cout<<counter<<endl;




    }






    return 0;
}


