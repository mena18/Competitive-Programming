#include<bits/stdc++.h>
using namespace std;

int n,m;

map<string,int> string_to_int;
map<int,string> int_to_string;
int counter=1;

vector<vector<int> > v(105);
vector<int> top;
int visited[105]={};
int degree[105]={};


int main() {

    #ifndef ONLINE_JUDGE
    freopen("read.txt","r",stdin);
    //freopen("write.txt","w",stdout);
    #endif // ONLINE_JUDGE



    int T=1;


    while(cin>>n){
        memset(visited,0,sizeof(visited));
        memset(degree,0,sizeof(degree));

        for(int i = 0; i < n+3; i++)
            v[i].clear();
        top.clear();
        string_to_int.clear();
        int_to_string.clear();
        counter=1;



        string hold;
        for(int i=0;i<n;i++){
            cin>>hold;
            string_to_int[hold]=counter;
            int_to_string[counter++] = hold;
        }
        cin>>m;
        string a,b;
        for(int i=0;i<m;i++){
            cin>>a>>b;
            v[string_to_int[a]].push_back(string_to_int[b]);
            degree[string_to_int[b]]++;
        }

        for(int k=0;k<n;k++){
            for(int i=1;i<=n;i++){
                if(!visited[i] && degree[i]==0){
                    visited[i]=1;
                    for(int j=0;j<v[i].size();j++) {
                        degree[ v[i][j] ]--;
                    }
                    top.push_back(i);
                    break;
                }

            }
        }

        cout<<"Case #"<<T++<<": Dilbert should drink beverages in this order:";
        for(int i=0;i<top.size();i++){
            cout<<" "<<int_to_string[top[i]];
        }cout<<"."<<endl<<endl;


    }





	return 0;
}
