#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("read.txt","r",stdin);
    #endif // ONLINE_JUDGE



    int T;cin>>T;
    while(T--){
        int n;cin>>n;
        int min_sum=0;
        int choices[] = {0,1,2,3,4,5,6,7};
        int arr[9][9];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>arr[i][j];
                if(i==j){min_sum+=arr[i][j];}
            }
        }




        while(next_permutation(choices,choices+n)){
            int sum=0;
            for(int i=0;i<n;i++){sum+= arr[i][choices[i]] ;}
            min_sum = min(min_sum,sum);

        }
        cout<<min_sum<<endl;

    }









    return 0;
}
