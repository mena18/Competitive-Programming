#include <bits/stdc++.h>
using namespace std;

int r,c,n,m,water;
int valid_moves[101][101];
int visited[101][101];
int x_moves[9];
int y_moves[9];
int even_odd[2]={0,0};
int length=8,increase=1;

int is_valid(int x_new,int y_new){
    if(x_new<0 || x_new>=r || y_new <0 || y_new>=c || valid_moves[x_new][y_new]==0){return 0;}
    return 1;
}

void print_visited(){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<visited[i][j]<<" ";
        }
        cout<<endl;
    }
}

void Dfs(int x,int y){

    int x_new,y_new;
    int counter=0;
    for(int i=0;i<length;i+=increase){
        x_new = x+x_moves[i];
        y_new = y+y_moves[i];
        if(is_valid(x_new,y_new)){
            counter++;
            if(!visited[x_new][y_new]){
                visited[x_new][y_new]=1;
                Dfs(x_new,y_new);
            }

        }
    }
    even_odd[counter%2]+=1;
}




int main(){
    #ifndef ONLINE_JUDGE
    freopen("read.txt","r",stdin);
    freopen("write.txt","w",stdout);
    #endif // ONLINE_JUDGE

    int T;cin>>T;int k=0;
    while((k++)<T){
        length=8;increase=1;even_odd[0]=0;even_odd[1]=0;
        cin>>r>>c>>n>>m;
        cin>>water;
        if(n>m){int temp=n;n=m;m=temp;}
        if(m==n){length=4;}
        else if(n==0){increase=2;}

        x_moves[0]=m; y_moves[0]=n;
        x_moves[1]=m; y_moves[1]=-n;
        x_moves[2]=-m; y_moves[2]=n;
        x_moves[3]=-m; y_moves[3]=-n;
        x_moves[4]=n; y_moves[4]=m;
        x_moves[5]=-n; y_moves[5]=m;
        x_moves[6]=n; y_moves[6]=-m;
        x_moves[7]=-n; y_moves[7]=-m;

        int x,y;
        for(int i=0;i<r;i++){for(int j=0;j<c;j++){valid_moves[i][j]=1;}}
        for(int i=0;i<r;i++){for(int j=0;j<c;j++){visited[i][j]=0;}}
        for(int i=0;i<water;i++){cin>>x>>y;valid_moves[x][y]=0;}

        if(!(m==n && n==0)){
            visited[0][0]=1;
            Dfs(0,0);
        }

        cout<<"Case "<<k<<": "<<even_odd[0]<<" "<<even_odd[1]<<endl;




    }

    return 0;
}
