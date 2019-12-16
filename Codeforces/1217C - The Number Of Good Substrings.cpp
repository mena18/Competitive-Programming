#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define INF 2147483647

#define isOn(S, j) (S & (1 << j))
#define setBit(S, j) (S |= (1 << j))
#define clearBit(S, j) (S &= ~(1 << j))
#define X first
#define Y second



int main(){
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("read.txt","r",stdin);
    //freopen("write.txt","w",stdout);
    #endif // ONLINE_JUDGE


    int T;cin>>T;
    string s;
    int arr[200005];
    int pw_2[] = {1,2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384,32768,65536,131072,262144,524288};
    while(T--){
        cin>>s;
        int n = s.length();
        arr[0] = s[0]-'1';
        for(int i=1;i<n;i++){arr[i] = (s[i] == '1'? i : arr[i-1]);}
        int ans=0;
        for(int r=0;r<n;r++){
            int sum=0;
            for(int l=r;r-l<=18 && l>=0 ;l--){
                if(s[l]=='0'){continue;}
                sum+=pw_2[r-l];
                if(l==0){ if(sum<=r+1){ans++;} }
                else if(sum <= r - arr[l-1]){ans++;}

            }
        }
        cout<<ans<<endl;

    }







	return 0;
}





