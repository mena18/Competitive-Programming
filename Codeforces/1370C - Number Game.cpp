#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 





int is_prime(int n){
    if(n%2==0 ){return 0;}
    int last = (int)(sqrt(n)) +1 ;
    for(int i=3;i<=last;i+=2){
        if(n%i==0){return 0;}
    }
    return 1;
}
 
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    #endif
    
    
    int tc;cin>>tc;
    while(tc--){
        int n;cin>>n;
        int lose=0;
        if(n==1){lose=1;}
        else if(n>2 && n%2==0){
            if((n&(n-1))==0){
                lose=1;
            }else if(n%4!=0 && is_prime(n/2)){
                lose=1;
            }
        }

        if(lose){
            cout<<"FastestFinger"<<endl;
        }else{
            cout<<"Ashishgup"<<endl;
        }

    }
    
 
    
   
 
 
 
 
    return 0;
}