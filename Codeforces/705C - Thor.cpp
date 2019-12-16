#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define INF 9000000000000000




int main(){
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("read.txt","r",stdin);
    //freopen("write.txt","w",stdout);
    #endif //ONLINE_JUDGE

    int n,k;
    cin>>n>>k;
    vector<int > v;
    vector < vector<int> > ind(n+5);
    int last=0,sum=0;
    int arr[300005]={};

    for(int i=0;i<k;i++){
        int a,b;
        cin>>a>>b;
        if(a==1){
            arr[b]++;
            sum+=1;
            v.push_back(b);
            ind[b].push_back((int)v.size()-1);
        }else if(a==2){
            sum-=arr[b];
            arr[b]=0;
            for(int j=0;j<ind[b].size();j++){
                v[ ind[b][j] ] = 0;
            }
            ind[b].clear();
        }else{
            for(int j=last;j<b;j++){
                if(arr[v[j]]>0){;
                    sum--;
                    arr[v[j]]--;
                }
            }
            last = max(last,b);
        }
        cout<<sum<<endl;
    }


    return 0;


}
