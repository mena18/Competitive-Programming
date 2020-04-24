#include <bits/stdc++.h>
#define ll long long int
#define pp pair<int,pair<int,int> >



using namespace std;
const int MAX = 100010;

int arr[5003][5003]={};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);


    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif // ONLINE_JUDGE

    pp row_pairs[5005];
    pp col_pairs[5005];

    int n,m,k;cin>>n>>m>>k;

    for(int i=1;i<=k;i++){
        int a,b,c;cin>>a>>b>>c;
        if(a==1){
            row_pairs[b-1] = {i,{b-1,c}};
        }else{
            col_pairs[b-1] = {i,{b-1,c}};
        }
    }

    sort(row_pairs,row_pairs+n);
    sort(col_pairs,col_pairs+m);
    row_pairs[n] = {1000000,{n+1,1}};
    col_pairs[m] = {1000000,{m+1,1}};

    int i=0,j=0;


    while(i<=n && j<=m){
        if(row_pairs[i].first==0){i++;continue;}
        if(col_pairs[j].first==0){j++;continue;}


        if(row_pairs[i].first < col_pairs[j].first){

            int value = row_pairs[i].second.second;
            int index = row_pairs[i].second.first;

            for(int q=0;q<m;q++){
                arr[index][q] = value;
            }
            i++;
        }else{
            int value = col_pairs[j].second.second;
            int index = col_pairs[j].second.first;
            for(int q=0;q<n;q++){
                arr[q][index] = value;
            }
            j++;
        }

    }


    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<< " ";
        }
        cout<<endl;
    }



    return 0;
}
