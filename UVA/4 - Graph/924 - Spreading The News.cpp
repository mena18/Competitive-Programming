#include<bits/stdc++.h>
using namespace std;



int main() {

    #ifndef ONLINE_JUDGE
    freopen("read.txt","r",stdin);
    //freopen("write.txt","w",stdout);
    #endif // ONLINE_JUDGE

    vector< vector<int> > v(2502);
    int n,a,b;cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        for(int j=0;j<a;j++){
            cin>>b;
            v[i].push_back(b);
        }
    }


    int T;cin>>T;
    int visited[2502];


    queue<int> q;

    while(T--){
        cin>>a;
        memset(visited,-1,sizeof(visited));
        int arr2[2502]={};
        q.push(a);
        visited[a]=0;

        int maxi=0;
        int index=-1;

        while(!q.empty()){
            int u = q.front();q.pop();
            for(int j=0;j<v[u].size();j++){
                int g = v[u][j];
                if(visited[g]==-1){
                    visited[g] = visited[u]+1;
                    arr2[visited[g]]++;
                    if(arr2[visited[g]]>maxi ){
                        maxi=arr2[visited[g]];
                        index=visited[g];
                    }
                    q.push(g);
                }
            }
        }
        if(maxi==0){cout<<0<<endl;}
        else{cout<<maxi<<" "<<index<<endl;}


    }







	return 0;
}
