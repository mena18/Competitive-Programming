#include <bits/stdc++.h>
#define INF 1000000000
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("read.txt","r",stdin);
    #endif // ONLINE_JUDGE


    int n;
    int arr[1005];
    int T=1;
    while(cin>>n && n!=0){
        for(int i=0;i<n;i++){cin>>arr[i];}
        sort(arr,arr+n);

        int f,e,c_sum,wanted_sum;
        int q;cin>>q;
        cout<<"Case "<<T++<<":"<<endl;
        for(int i=0;i<q;i++){
            cin>>wanted_sum;
            f=0;e=n-1;c_sum = INF;
            while(f!=e){
                int cur_sum = arr[f]+arr[e];
                if(cur_sum==wanted_sum){c_sum=wanted_sum;break;}
                else if(cur_sum>wanted_sum){e--;}
                else{f++;}

                if(abs(wanted_sum-cur_sum)<abs(wanted_sum-c_sum)   ){
                    c_sum = cur_sum;
                }

            }
            cout<<"Closest sum to "<<wanted_sum<<" is "<<c_sum<<"."<<endl;

        }
    }





    return 0;
}
