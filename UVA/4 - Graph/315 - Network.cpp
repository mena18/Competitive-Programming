#include<bits/stdc++.h>
using namespace std;
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<pair<int,int> >
#define loop(i,s,e) for(int i=s;i<e;i++)
#define INF 1000000000

vector<vi > AdjList;
vi visited;
vi low;
vi parent;
vi artt;

int root=0;
int children_root=0;
int counter=0;

void find_articulation_point_and_bridge(int u){
    visited[u]=low[u]=counter++;
    for(int i=0;i<AdjList[u].size();i++){
        int v = AdjList[u][i];
        if(visited[v]==-1){
            parent[v] = u;
            if(u==root){children_root++;}

            find_articulation_point_and_bridge(v);

            if(low[v]>=visited[u]){
                artt[u]=1;
            }

            low[u] = min(low[u],low[v]);

        }else if(v!=parent[u]){
            low[u] = min(low[u],visited[v]);
        }

    }

}


int main() {

    #ifndef ONLINE_JUDGE
    freopen("read.txt","r",stdin);
    //freopen("write.txt","w",stdout);
    #endif // ONLINE_JUDGE

    int v;
    while(scanf("%d\n",&v) && v!=0){
        counter=0;
        AdjList.assign(v+2,vi());parent.assign(v+2,0);
        visited.assign(v+2,-1);low.assign(v+2,0);artt.assign(v+2,0);

        string s;
        stringstream ss;
        int a;
        while(1){
            ss.clear();
            getline(cin, s);
            ss << s;
            int b;ss>>b;
            if(b==0){break;}
            while(ss >> a){
                AdjList[b].push_back(a);
                AdjList[a].push_back(b);
            }
        }


        for(int i=1;i<=v;i++){

            if(visited[i]==-1){
                root=i;
                children_root=0;
                find_articulation_point_and_bridge(i);
                if(children_root<=1){artt[root]=0;}
            }
        }



        counter=0;
        for(int i=1;i<=v;i++){
            counter+=artt[i];
        }
        cout<<counter<<endl;








    }






    return 0;
}


