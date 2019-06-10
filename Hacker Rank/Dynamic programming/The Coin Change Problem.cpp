//https://www.hackerrank.com/challenges/coin-change/problem

#include <bits/stdc++.h>
using namespace std;

long long int a, n;
long long int arr[51];
long long int dp[51][251];
long long int solution(int i, int cur_sum) {
    if (cur_sum == 0) {return 1;}
    if (cur_sum < 0) {return 0;}
    long long int &cur = dp[i][cur_sum];
    if(cur!=-1){return cur;}
    cur = 0;
    for (int j = i; j < n; j++) {
        cur+=solution(j, cur_sum - arr[j]);
    }
    return cur;
}

int main() {

  cin >> a >> n;
  memset(dp, -1, sizeof(dp));
  for (int i = 0; i < n; i++) {cin >> arr[i];}
  cout << solution(0, a);

  return 0;
}
