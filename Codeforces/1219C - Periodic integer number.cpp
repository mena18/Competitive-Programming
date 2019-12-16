#include <bits/stdc++.h>
using namespace std;
#define ll long long int

string repeat(string s,int n){
    string ans="";
    for(int i=0;i<n;i++){ans+=s;}
    return ans;
}

int compare(string s1,string s2){
    for(int i=0;i<s1.length();i++){
        if(s1[i]==s2[i]){continue;}
        else if(s1[i]>s2[i]){return 1;}
        else{return 0;}
    }
    return 0;
}

string add_one(string s1){
    string ans = s1;
    int mod=1;
    for(int i=s1.length()-1;i>=0;i--){
        if(mod==1){
            int c = s1[i]-'0' + 1;
            if(c==10){mod=1;ans[i]='0';}
            else{mod=0;ans[i] = s1[i]+1;}
        }else{break;}
    }

    if(mod==1){return "1"+ans;}
    return ans;
}


int main(){
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("read.txt","r",stdin);
    //freopen("write.txt","w",stdout);
    #endif //ONLINE_JUDGE


    int p;string s;cin>>p>>s;

    if(s.length()%p!=0){
        int k = (s.length()/p)+1;
        for(int i=0;i<k;i++){
            cout<<"1";
            for(int j=0;j<p-1;j++){cout<<"0";}
        }
        cout<<endl;
        return 0;
    }

    string s2 = s.substr(0,p);
    string s3 = add_one(s2);

    int not_nine=0;
    for(int i=0;i<s2.length();i++){
        if(s2[i]!='9'){not_nine=1;break;}

    }

    string s4 = repeat(s2,s.length()/p);
    if(compare(s4,s)){
        cout<<s4<<endl;
        return 0;
    }

    if(not_nine==0){
        int k = (s.length()/p)+1;
        for(int i=0;i<k;i++){
            cout<<"1";
            for(int j=0;j<p-1;j++){cout<<"0";}
        }
        return 0;
    }
    string s5 = repeat(s3,s.length()/p);
    cout<<s5<<endl;





    return 0;
}
