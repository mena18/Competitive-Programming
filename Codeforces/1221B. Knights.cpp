#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int n;
int arr[102][102] = {};

int dx[] = {1,1,2,2,-1,-1,-2,-2};
int dy[] = {2,-2,1,-1,2,-2,1,-1};

int valid(int x,int y){return x>=0 && y>=0 && x<n && y<n;}

void solve(int i,int j){
    int v = arr[i][j];

    for(int k=0;k<8;k++){
        int cur_x = i+dx[k];
        int cur_y = j+dy[k];

        if(valid(cur_x,cur_y) && arr[cur_x][cur_y]==-1){
            arr[cur_x][cur_y] = !v;
            solve(cur_x,cur_y);
        }
    }

}

int main(){
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("read.txt","r",stdin);
    //freopen("write.txt","w",stdout);
    #endif //ONLINE_JUDGE

    cin>>n;
    memset(arr,-1,sizeof(arr));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]==-1){
                arr[i][j]=0;
                solve(i,j);
            }
        }
    }


    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]==0){cout<<'W';}else{cout<<'B';}
        }cout<<endl;
    }

    return 0;
}
