#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define INF 2147483647
#define max_num 1048580
 
double n,r;
 
inline double diff(double x1,double x){return sqrt( (4*r*r) - (x1-x)*(x1-x) );}
 
inline bool intersect(double x1,double x2){if(abs(x1-x2)<=2*r){return 1;}return 0;}
 
int main() {
 
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("read.txt","r",stdin);
    //freopen("write.txt","w",stdout);
    #endif // ONLINE_JUDGE
 
 
    cin>>n>>r;
    vector<pair<double,double> > vi;
    double X;cin>>X;
    vi.push_back({X,r});
    for(int i=1;i<n;i++){
        double max_y=r;
        cin>>X;
        for(int j=0;j<i;j++){
            double x = vi[j].first;
            if(intersect(X,x)){
                max_y = max(max_y,diff(x,X) + vi[j].second);
            }
 
        }
        vi.push_back({X,max_y});
    }
 
 
    for(int i=0;i<n;i++){
        printf("%.9lf ",vi[i].second);
    }
 
 
    return 0;
}