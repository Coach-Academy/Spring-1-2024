#include <bits/stdc++.h>

#define ll long long
using namespace std;

int32_t main() {
  int n;
  cin >> n;
  int arr[n];
  for (int &x: arr) {
    cin >> x;
  }
  int dp[n];
  for (int i = 0; i < n; ++i) {
    dp[i] = 1;
    for (int j = 0; j < i; ++j) {
      if (arr[j] < arr[i]) {
        dp[i] = max(dp[i], dp[j] + 1);
      }
    }
  }
  cout << *max_element(dp, dp + n);
}
