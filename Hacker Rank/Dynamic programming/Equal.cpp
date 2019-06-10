//https://www.hackerrank.com/challenges/equal/problem

#include <bits/stdc++.h>
using namespace std;

int main() {
  // freopen("read.txt","r",stdin);
  int t, n, arr[10002], m;
  cin >> t;
  while (t--) {
    cin >> n;
    m = INT_MAX;
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
      m = min(m, arr[i]);
    }
    int tot_min = INT_MAX;
    for (int i = m; i >= m - 4; i--) {
      int s = 0;
      for (int j = 0; j < n; j++) {
        int x = arr[j] - i;
        s += (x / 5) + ((x % 5) / 2) + ((x % 5) % 2);
      }
      tot_min = min(tot_min, s);
    }
    cout << tot_min << endl;
  }
  return 0;
}
