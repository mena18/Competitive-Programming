#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define x first
#define y second.first
#define z second.second


int n,m;
char arr[10][10];
int cur_letter;
char letters[]="IEHOVA#";

int dy[]={1,-1,0};
int dx[]={0,0,-1};
string print[] = {"right","left","forth"};

int is_valid(int i,int j){
    if(i>=0 && i<n && j>=0 && j<m && arr[i][j]==letters[cur_letter]){return 1;}
    return 0;
}

void bfs(int i,int j){
    for(int k=0;k<3;k++){
        int new_i = i+dx[k];
        int new_j = j+dy[k];
        if(is_valid(new_i,new_j)){
            if(cur_letter==6){cur_letter++;cout<<print[k]<<endl;return;}
            else{
                cout<<print[k]<<" ";
                cur_letter++;
                bfs(new_i,new_j);
            }
        }
    }
}

int main(){

    #ifndef ONLINE_JUDGE
    freopen("read.txt","r",stdin);
    freopen("write.txt","w",stdout);
    #endif // ONLINE_JUDGE


    int T;cin>>T;
    while(T--){
        cur_letter=0;
        cin>>n>>m;
        int s,e;
        for(int i=0;i<n;i++){for(int j=0;j<m;j++){
                cin>>arr[i][j];
                if(arr[i][j]=='@'){s=i;e=j;}
        }}

        bfs(s,e);



    }





    return 0;




}





