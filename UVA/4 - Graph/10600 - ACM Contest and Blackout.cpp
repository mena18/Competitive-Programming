#include<bits/stdc++.h>
using namespace std;


int id[50000],n,m; // id for disjoint set,nodes,egdes
vector< pair <long long ,pair<int,int> > > p; //making pair and sorting them with weight
vector<int> deleted;

void init(int n){
    for(int i=0;i<=n;i++){
        id[i]=i;
    }
}


int root(int x){
    if(x==id[x]){return x;}
    return id[x] = root(id[x]);
}


void union1(int a,int b){
    id[root(a)] = id[root(b)];
}

int kruskal(){
    int x,y,cost,mincost=0;
    int counter=0;
    for(int i=0;i<m;i++){
        cost = p[i].first;
        x = p[i].second.first;
        y = p[i].second.second;
        if(root(x)!=root(y)){
            mincost+=cost;
            union1(x,y);
            counter++;
            deleted.push_back(i);
        }
    }
    if(counter==n-1)
        return mincost;
    return INT_MAX;

}



int kruskal_2(int index){
    int x,y,cost,mincost=0;
    int counter=0;
    for(int i=0;i<m;i++){
        if(i==index){continue;}
        cost = p[i].first;
        x = p[i].second.first;
        y = p[i].second.second;

        if(root(x)!=root(y)){
            mincost+=cost;
            counter++;
            union1(x,y);
        }
    }
    if(counter==n-1)
        return mincost;
    return INT_MAX;
}


int main(){


    #ifndef ONLINE_JUDGE
    freopen("read.txt","r",stdin);
    #endif // ONLINE_JUDGE

    int T;cin>>T;
    while(T--){
        cin>>n>>m;
        p.clear();
        deleted.clear();
        init(n+1);
        for(int i = 0;i < m;++i){
            int a,b,c;
            cin>>a>>b>>c;
            p.push_back({c,{a,b}});
        }
        sort(p.begin(),p.end());

        int ans1 = kruskal();

        int ans2=INT_MAX;
        for(int i=0;i<deleted.size();i++){
            init(n+1);
            ans2 = min(ans2,kruskal_2(deleted[i]));
        }
        cout<<ans1<<" "<<ans2<<endl;

    }
    return 0;
}
