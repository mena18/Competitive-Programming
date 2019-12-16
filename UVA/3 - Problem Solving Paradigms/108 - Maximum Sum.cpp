#include<bits/stdc++.h>
using namespace std;



int main(){

    #ifndef ONLINE_JUDGE
    freopen("read.txt","r",stdin);
    freopen("write.txt","w",stdout);
    #endif // ONLINE_JUDGE


    int n;
    while(scanf("%d ",&n)==1){
    int matrix[102][102];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
            if(i>0)matrix[i][j]+=matrix[i-1][j];
            if(j>0)matrix[i][j]+=matrix[i][j-1];
            if(i>0 && j>0)matrix[i][j]-=matrix[i-1][j-1];
        }
    }
    int max_sum=matrix[0][0];
    int cur_sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=i;k<n;k++){
                for(int l=j;l<n;l++){
                    cur_sum=matrix[k][l];
                    if(i>0)cur_sum-=matrix[i-1][l];
                    if(j>0)cur_sum-=matrix[k][j-1];
                    if(i>0 && j>0) cur_sum+=matrix[i-1][j-1];
                    max_sum=max(max_sum,cur_sum);
                }
            }
        }
    }
    cout<<max_sum<<endl;
    }
    return 0;
}
