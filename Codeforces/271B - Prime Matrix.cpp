#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007

using namespace std;
const int MAX = 100010;
vector<int> v;
int arr[MAX];

void create_primes(){
    int n=2;
    for(int j=2;j<MAX;j++){
        if(arr[j]==1){continue;}
        else{v.push_back(j);}
        for(int i=j;i<MAX;i+=j){
            arr[i]=1;
        }
    }

}

int closest_prime(int number){
    return v[lower_bound(v.begin(),v.end(),number) - v.begin()];
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);


    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    #endif // ONLINE_JUDGE


    create_primes();



    int n,m;cin>>n>>m;
    int rows[505]={};
    int cols[505]={};

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int q;cin>>q;
            int clo = closest_prime(q) - q;
            rows[i]+=clo;cols[j]+=clo;
        }
    }

    int minimum=INT_MAX;
    for(int i=0;i<n;i++){
        minimum = min(minimum,rows[i]);
    }
    for(int j=0;j<m;j++){
        minimum = min(minimum,cols[j]);
    }
    cout<<minimum<<endl;





    return 0;
}
