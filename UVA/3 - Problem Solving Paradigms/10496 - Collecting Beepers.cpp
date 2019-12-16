#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define INF 2147483648

#define isOn(S, j) (S & (1 << j))
#define setBit(S, j) (S |= (1 << j))
#define clearBit(S, j) (S &= ~(1 << j))
#define X first
#define Y second

int dp[22][22][2050];
vector<pair<int,int> > vi;
int n;
int x_start,y_start;

int pw_2[] = {1,2,4,8,16,32,64,128,256,512,1024,2048,4096};

int solve(int x,int y,int num){
    if(num==pw_2[n]-1){return abs(x-x_start)+abs(y-y_start) ; }
    int& ret = dp[x][y][num];
    if(ret!=-1){return ret;}

    int m=INT_MAX;

    for(int i=0;i<n;i++){
        if(!isOn(num,i)){
            int dis = abs(x-vi[i].X)+abs(y-vi[i].Y);
            m = min(m, dis + solve(vi[i].X,vi[i].Y,num+pw_2[i]) );
        }
    }
    return ret = m;

}


int main(){
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("read.txt","r",stdin);
    //freopen("write.txt","w",stdout);
    #endif // ONLINE_JUDGE

    int T;cin>>T;
    while(T--){
        int x_size,y_size;
        cin>>x_size>>y_size>>x_start>>y_start;
        cin>>n;
        vi.clear();
        for(int i=0;i<n;i++){
            int a,b;cin>>a>>b;
            vi.push_back({a,b});
        }
        memset(dp,-1,sizeof(dp));
        cout<<"The shortest path has length "<<solve(x_start,y_start,0)<<endl;
    }
	return 0;
}





