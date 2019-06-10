//https://www.hackerrank.com/challenges/chief-hopper/problem

#include <bits/stdc++.h>
using namespace std;

int n, arr[100002];
long long int sum=0;

int value(int i) {
  long long int x = i;
  for (int i = 0; i < n; i++) {
    x += (x - arr[i]);
    if (x>=sum){return 1;} 
    else if (x < 0){return -1;}
  }
  return 1;
}

int main() {
  int maxi = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    maxi = max(maxi, arr[i]);
    sum+=arr[i];
  }

  int mini = maxi;

  int start = 1, end = maxi, middle = 0;

  while (start < end) {
    middle = (start + end) / 2;
    int k = value(middle);

    if (k == -1) {start = middle + 1;}
    else {
      end = middle;
      mini = min(mini, middle);
    }
  }

  cout << mini;

  return 0;
}
