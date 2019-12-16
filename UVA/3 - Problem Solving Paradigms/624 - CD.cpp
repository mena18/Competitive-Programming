#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define INF 2147483647

#define isOn(S, j) (S & (1 << j))
#define setBit(S, j) (S |= (1 << j))
#define clearBit(S, j) (S &= ~(1 << j))
#define X first
#define Y second



int arr[100];
int n,tracks;
int ans=INT_MAX;
int actual_mask;

int solve(int sum,int i,int mask){
    if(sum<0){return INT_MAX;}
    if(i>=tracks){
        if(ans>=sum){ans=sum;actual_mask=mask;}
        return sum;
    }

    return min(solve(sum-arr[i],i+1,mask | 1<<i),solve(sum,i+1,mask));
}


int main(){
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("read.txt","r",stdin);
    freopen("write.txt","w",stdout);
    #endif // ONLINE_JUDGE

    while(cin>>n){
        ans=INT_MAX;
        cin>>tracks;
        for(int i=0;i<tracks;i++){cin>>arr[i];}
        solve(n,0,0);
        for(int i=0;i<tracks;i++){
            if(isOn(actual_mask,i)){
                cout<<arr[i]<<" ";
            }
        }
        cout<<"sum:"<<n-ans<<endl;

    }
	return 0;
}





