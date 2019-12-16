#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ui unsigned int

string letters = "01";

ui binToInt(string number){
    ui num=0;
    for(int i=0;i<number.length();i++){
        num*=2;num+=(number[i]-'0');
    }
    return num;
}

string intToBin(ui num){
    string ans="";
    for(int i=0;i<32;i++){
        ans = letters[(num%2)]+ans;
        num=num/2;
    }
    return ans;

}

int main() {

    #ifndef ONLINE_JUDGE
    freopen("read.txt","r",stdin);
    //freopen("write.txt","w",stdout);
    #endif // ONLINE_JUDGE


    ui a1,b1;
    while(cin>>a1>>b1){
        string a = intToBin(a1),b = intToBin(b1);
        string s3="";
        for(int i=0;i<32;i++){
            if(a[i]!=b[i]){s3+='1';}
            else{s3+='0';}
        }
        cout<<binToInt(s3)<<endl;

    }

    return 0;


}
