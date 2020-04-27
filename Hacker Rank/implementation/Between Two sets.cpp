// https://www.hackerrank.com/challenges/between-two-sets/problem

#include <bits/stdc++.h>

using namespace std;

int n,m;
int arr[105],arr2[105];
set<int> v;
void add_vec(int cur_num){
    for(int j=1;j<m;j++){
        if(arr2[j]%cur_num==0){
            continue;
        }else{
            return;
        }
    }
    v.insert(cur_num);
}

int main(){
    cin>>n>>m;
    for(int i=0;i<n;i++){cin>>arr[i];}
    for(int i=0;i<m;i++){cin>>arr2[i];}

    int cur_num = arr2[0];

    for(int i=1;i<sqrt(cur_num)+1;i++){
        if(cur_num%i==0){
            add_vec(i);
            add_vec(cur_num/i);
        }
    }

    int counter=0;
    for(auto item : v){
        int f=1;
        for(int j=0;j<n;j++){
            if(item%arr[j]!=0){
                f=0;
                break;
            }
            
        }
        if(f)
            counter++;

    }
    cout<<counter<<endl;
}

