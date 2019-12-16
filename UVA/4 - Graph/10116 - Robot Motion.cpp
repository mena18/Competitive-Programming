#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define x first
#define y second


int n,m,k;

int valid(int i , int j){return i>=0 && i<n && j>=0 && j<m;}

int main(){

    #ifndef ONLINE_JUDGE
    freopen("read.txt","r",stdin);
    //freopen("write.txt","w",stdout);
    #endif // ONLINE_JUDGE



    char grid[12][12];
    int dir_x[100]={},dir_y[100]={};
    dir_x['N']=-1;dir_x['S']=1;
    dir_y['E']=1;dir_y['W']=-1;
    while(cin>>n>>m>>k && n!=0){
        for(int i=0;i<n;i++){for(int j=0;j<m;j++){cin>>grid[i][j];}}
        map<pair<int,int> , int> m;
        char start=grid[0][k-1];
        int i=0,j=k-1;
        int counter=1;
        m[{i,j}] = counter;

        while(1){
            i = i+dir_x[start];
            j = j+dir_y[start];
            if(valid(i,j)){
                start = grid[i][j];
                if(m[{i,j}]==0){
                    m[{i,j}]=++counter;
                }else{
                    int cur = m[{i,j}];
                    cout<<cur-1<<" step(s) before a loop of "<<counter-cur+1<<" step(s)"<<endl;
                    break;
                }

            }else{
                cout<<counter<<" step(s) to exit"<<endl;
                break;
            }
        }
    }







    return 0;




}





