#include <bits/stdc++.h>
using namespace std;

int arr[] ={1,5,10,25,50};
long long int dp[6][30001];
long long int coinchange(int i,int rem){
    if(rem==0){return 1;}
    if(rem<0 || i>4){return 0;}

    long long int &ret = dp[i][rem];
    if(ret!=-1){return ret;}
    ret=0;
    for(int k=0;k<5-i;k++){
        ret+=coinchange(i+k,rem-arr[i+k]);
    }
    return ret;
}


int main(){


    #ifndef ONLINE_JUDGE
    freopen("read.txt","r",stdin);
    //freopen("write.txt","w",stdout);
    #endif // ONLINE_JUDGE

    int rem;
    memset(dp,-1,sizeof(dp));
    while(scanf("%d",&rem)==1){

        long long int ans = coinchange(0,rem);
        if(ans==1){
            printf("There is only 1 way to produce %d cents change.\n",rem);
        }else{
            printf("There are %lld ways to produce %d cents change.\n",ans,rem);
        }

    }



}





