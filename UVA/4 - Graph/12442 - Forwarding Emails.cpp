#include<bits/stdc++.h>
using namespace std;

int graph[50005];
bool visited[50005];
int saved[50005];

int  dfs(int curr) {
	visited[curr] = 1;
	int s = 0;
	if ((graph[curr] != -1 ) && (!visited[graph[curr]])){
		s+=dfs(graph[curr]) + 1;
    }
	visited[curr] = 0;
	saved[curr]=s;
	return s;


}

int main() {

    #ifndef ONLINE_JUDGE
    freopen("read.txt","r",stdin);
    freopen("write.txt","w",stdout);
    #endif // ONLINE_JUDGE

	int T; cin>>T;
	for(int d=1;d<=T;d++) {
		int n;cin>>n;
		memset(graph,-1,sizeof(graph));
		for(int i=0;i<n;i++){
			int a, b;
			cin>>a>>b;
			graph[a]=b;
		}
		int maxi = 0;
		int index = -1;

		memset(saved,-1,sizeof(graph));
		for(int i=1;i<=n;i++){

            if(saved[i]==-1)
                dfs(i);

			if (maxi < saved[i]) {
				maxi = saved[i];
				index = i;
			}
		}
		cout<<"Case "<<d<<": "<<index<<endl;
	}
	return 0;
}
