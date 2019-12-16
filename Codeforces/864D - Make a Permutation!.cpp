#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define INF 2147483647
#define max_num 1048580
#define MOD 1000000007


int n;
int dp[102][2100];
struct item{int place=-1,time=-1,total_time=-1,value=-1;};
item arr[102];
vector<int> v;


int solve(int i,int used_time){
    if(i>=n){return 0;}
    int& ret = dp[i][used_time];
    if(ret!=-1){return ret;}

    int m = solve(i+1,used_time);
    if(used_time + arr[i].time<arr[i].total_time){
        m = max(m,arr[i].value + solve(i+1,used_time + arr[i].time) );
    }
    return ret = m;

}




void build_output(int i,int used_time){
    if(i>=n){return ;}
    int m1 = INT_MIN;
    if(used_time + arr[i].time<arr[i].total_time){
        m1 = arr[i].value + solve(i+1,used_time + arr[i].time);
    }
    int m2 = solve(i+1,used_time);
    if(m2==dp[i][used_time]){
        build_output(i+1,used_time);

    }else{
        v.push_back(arr[i].place);
        build_output(i+1,used_time + arr[i].time);
    }
}

int compare(item s1,item s2){
    if(s1.total_time == s2.total_time){
        return s1.value < s2.value;
    }
    return s1.total_time < s2.total_time;
}


int main(){

    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("read.txt","r",stdin);
    //freopen("write.txt","w",stdout);
    #endif //ONLINE_JUDGE

    memset(dp,-1,sizeof(dp));
    cin>>n;
    for(int i=0;i<n;i++){
        arr[i].place=i+1;
        cin>>arr[i].time>>arr[i].total_time>>arr[i].value;
    }
    sort(arr,arr+n,compare);

    cout<<solve(0,0)<<endl;
    build_output(0,0);

    int k = (int) v.size();
    cout<<k<<endl;
    for(int i=0;i<k;i++){
        cout<<v[i]<<" ";
    }


	return 0;
}
