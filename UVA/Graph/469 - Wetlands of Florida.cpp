#include <bits/stdc++.h>
using namespace std;

int r=0,c=0,visited[105][105];
char m[105][105];

int dx[] = {1,1,1,-1,-1,-1,0,0};
int dy[] = {1,0,-1,1,0,-1,1,-1};

int is_valid(int x,int y){
    if(x<0 || x>=r || y <0 || y>=c || visited[x][y]==1 || m[x][y]=='L'){return 0;}
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

int Dfs(int x,int y){

    int x_new,y_new;
    int counter=1;
    for(int i=0;i<8;i++){
        x_new = x+dx[i];
        y_new = y+dy[i];
        if(is_valid(x_new,y_new)){
            visited[x_new][y_new]=1;
            counter+=Dfs(x_new,y_new);

        }
    }
    return counter;

}

int dx[] = {1,1,1,-1,-1,-1,0,0};
int dy[] = {1,0,-1,1,0,-1,1,-1};

1 2 3
4 5 6
7 8 9 


int main(){
    #ifndef ONLINE_JUDGE
    freopen("read.txt","r",stdin);
    freopen("write.txt","w",stdout);
    #endif // ONLINE_JUDGE

    int T, x, y;
    char s[105];
    scanf("%d\n", &T);
    while(T--) {
        memset(m, 0, sizeof(m));
        r=0;c=0;
        while(gets(s)) {
            if(s[0] == '\0'){break;}
            if(isdigit(s[0])) {
                sscanf(s, "%d %d", &x, &y);
                memset(visited, 0, sizeof(visited));
                visited[x-1][y-1]=1;
                printf("%d\n", Dfs(x-1, y-1));
            } else {
                sscanf(s, "%s", m[r]);
                c = strlen(m[r++]);
            }
        }
        if(T){cout<<endl;}
    }
    return 0;
}
