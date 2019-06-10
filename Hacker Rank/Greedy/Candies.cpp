https://www.hackerrank.com/challenges/candies/problem


#include <bits/stdc++.h>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("read.txt","r",stdin);
    #endif // ONLINE_JUDGE

    int n;cin>>n;
    long long int prev,sum=1;cin>>prev;
    int increase=1,decrease=0;
    int a,max_increased=1;
    for(int i=1;i<n;i++){
        cin>>a;
        if(a==prev){
            sum+=1;
            increase=1;decrease=0;
            max_increased=1;
        }
        else if(a>=prev){increase++;decrease=0;sum+=increase;}
        else if(a<prev){
            decrease++;
            if(increase>1){max_increased=increase;}
            increase=1;
            if(decrease==max_increased){decrease++;}
            sum+=decrease;

        }
        prev=a;
    }
    cout<<sum;

    return 0;
}
