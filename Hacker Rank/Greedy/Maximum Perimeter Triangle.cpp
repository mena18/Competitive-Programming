https://www.hackerrank.com/challenges/angry-children/problem


#include <bits/stdc++.h>
using namespace std;

bool wayToSort(int i, int j) { return i > j; }

int main() {
  //freopen("read.txt", "r", stdin);
  int n;
  cin >> n;
  int arr[51];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  sort(arr, arr + n, wayToSort);

  int var = -1;

  for (int i = 0; i < n - 2; i++) {
    if (var != -1) {
      break;
    }
    for (int j = i + 1; j < n - 1; j++) {
      if (arr[i] >= arr[j] + arr[j + 1] || var != -1) {
        break;
      }
      for (int k = j + 1; k < n; k++) {
        if (arr[i] >= arr[j] + arr[k]) {
          break;
        }
        cout << arr[k] << " " << arr[j] << " " << arr[i] << endl;
        var = arr[i] + arr[j] + arr[k];
        break;
      }
    }
  }
  if (var == -1) {
    cout << var << endl;
  }

  return 0;
}

