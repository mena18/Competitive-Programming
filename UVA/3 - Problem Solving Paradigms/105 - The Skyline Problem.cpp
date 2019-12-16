//https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=41
#include<bits/stdc++.h>
using namespace std;


int main(){
    #ifndef ONLINE_JUDGE
    freopen("read.txt","r",stdin);
    freopen("write.txt","w",stdout);
    #endif // ONLINE_JUDGE


    int l,h,r;
    int arr[10001]={};
    int max_left=10001;
    int max_right=0;
    while(scanf("%d %d %d",&l,&h,&r)!=EOF ){
        for(int i=l;i<r;i++){
            arr[i] = max(arr[i],h);
        }
        max_left = min(l,max_left);
        max_right = max(r,max_right);
    }
    int last=arr[max_left];
    if(max_left!=1){
        cout<<1<<" "<<0<<" ";
    }
    cout<<max_left<<" "<<last;
    for(int i=max_left;i<max_right;i++){
        if(arr[i]!=last){
            last=arr[i];
            cout<<" "<<i<<" "<<arr[i];
        }
    }
    cout<<" "<<max_right<<" "<<0<<endl;






	return 0;

}
