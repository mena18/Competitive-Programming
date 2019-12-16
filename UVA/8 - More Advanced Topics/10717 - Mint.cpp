#include <bits/stdc++.h>
using namespace std;
#define ll long long int


int gcd(int a,int b){
    if(b==0)
        return a;
    return gcd(b,a%b);
}

int lcm(int a,int b){
    return a*b/gcd(a,b);
}

int main(){

    #ifndef ONLINE_JUDGE
    freopen("read.txt","r",stdin);
    freopen("write.txt","w",stdout);
    #endif // ONLINE_JUDGE

    int n,m;
    int coins[55]={};
    int tables[20]={};
    while(cin>>n>>m && n && m){
        for(int i=0;i<n;i++){cin>>coins[i];}
        for(int i=0;i<m;i++){cin>>tables[i];}

        for(int tab=0;tab<m;tab++){
            int mini=0,maxi=INT_MAX;

            for(int i=0;i<n-3;i++){
                for(int j=i+1;j<n-2;j++){
                    for(int k=j+1;k<n-1;k++){
                        for(int l=k+1;l<n;l++){
                            int lc = lcm(coins[i],lcm(coins[j],lcm(coins[k],coins[l])));
                            int cur_min=(tables[tab]/lc)*lc;
                            int cur_max=cur_min;
                            if(cur_max<tables[tab])
                                cur_max+=lc;

                            mini = max(mini,cur_min);
                            maxi = min(maxi,cur_max);
                        }
                    }
                }
            }
            cout<<mini<<" "<<maxi<<endl;

        }
    }




    return 0;




}





