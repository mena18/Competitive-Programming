#include <bits/stdc++.h>
using namespace std;

int x,y,n,m,s;
int robot;
char position[]={'N','L','S','O'};
int x_moves[]= {-1,0,1,0};
int y_moves[]= {0,1,0,-1};
char st[101][101];
char moves[100000];

void get_position(){
    char pos;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(isalpha(st[i][j])){
                x=i;y=j;pos=st[i][j];st[i][j]='.';
                for(int i=0;i<4;i++){if(pos==position[i]){robot=i;} }
                break;
            }
        }
    }

}

int is_valid(int x_new,int y_new){
    if(x_new<0 || x_new>=n || y_new <0 || y_new>=m || st[x_new][y_new]=='#'){return 0;}
    return 1;
}


int main(){
    #ifndef ONLINE_JUDGE
    freopen("read.txt","r",stdin);
    freopen("write.txt","w",stdout);
    #endif // ONLINE_JUDGE


    while(cin>>n>>m>>s && n){
        int points = 0;

        for(int i=0;i<n;i++){scanf("%s",st[i]);}
        scanf("%s",moves);

        get_position();

        for(int i=0;i<strlen(moves);i++){
            if(moves[i]=='D'){robot=(robot+1)%4;}
            else if(moves[i]=='E'){robot=(robot-1+4)%4;}
            else if(moves[i]=='F' && is_valid(x+x_moves[robot],y+y_moves[robot])){
                x=x+x_moves[robot];y=y+y_moves[robot];
                if(st[x][y]=='*'){points++;st[x][y]='.';}
            }
        }


        cout<<points<<endl;

    }

    return 0;
}
