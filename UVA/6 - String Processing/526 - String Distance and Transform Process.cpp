#include<bits/stdc++.h>
using namespace std;


string s1,s2;

int dp[100][100]={};

int edit_distance(int i,int j){
    if(i==s1.length())
        return s2.length()-j;
    if(j==s2.length())
        return s1.length()-i;

    int& ret = dp[i][j];
    if(ret!=-1)
        return ret;

    if(s1[i]==s2[j])
        return ret =  edit_distance(i+1,j+1);

    int choice1 = 1 + edit_distance(i+1,j+1);
    int choice2 = 1 + edit_distance(i+1,j);
    int choice3 = 1 + edit_distance(i,j+1);

    return ret =  min(choice1,min(choice2,choice3));

}




int operation=1;
int idx_shift=0;

void trace_output(int i,int j){

    if(i==s1.length()){
        int top = s2.length()-j;
        for(int k=0;k<top;k++){
            printf("%d Insert %d,%c\n",operation++,k+i+1+idx_shift,s2[j+k]);
        }
        idx_shift+=top;
        return ;
    }

    if(j==s2.length()){
        int top = s1.length()-i;
        for(int k=0;k<top;k++){
            printf("%d Delete %d\n",operation++,i+1+k+idx_shift);
            idx_shift--;
        }
        return ;
    }

    if(s1[i]==s2[j]){
         trace_output(i+1,j+1);
         return;
    }

    int choice1 = 1 + edit_distance(i+1,j+1); // rplace
    int choice2 = 1 + edit_distance(i+1,j); //   remove
    int choice3 = 1 + edit_distance(i,j+1); //   add

    int optimal = edit_distance(i,j);


    if(optimal==choice3){
        printf("%d Insert %d,%c\n",operation++,i+1+idx_shift,s2[j]);
        idx_shift++;
        trace_output(i,j+1);
    }

    else if(optimal==choice2){
        printf("%d Delete %d\n",operation++,i+1+idx_shift);
        idx_shift--;
        trace_output(i+1,j);
    }

    else if(optimal==choice1){
        printf("%d Replace %d,%c\n",operation++,i+1+idx_shift,s2[j]);
        trace_output(i+1,j+1);
    }


}




int main()
{
#ifndef ONLINE_JUDGE
    freopen("read.txt", "r", stdin);
    //freopen(".txt", "wt", stdout);
#endif


    while(getline(cin, s1) && getline(cin, s2)){

        memset(dp, -1,sizeof(dp));
        cout<<edit_distance(0, 0)<<"\n";
        operation = 1;
        idx_shift=0;
        trace_output(0, 0);
    }

    return 0;
}
