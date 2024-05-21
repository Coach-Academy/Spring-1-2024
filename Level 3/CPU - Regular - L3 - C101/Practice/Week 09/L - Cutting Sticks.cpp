#include <bits/stdc++.h>

#define ll long long
using namespace std;
const int mod = 1e9 + 7;

vector<int> arr;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int l;
  while (cin >> l, l) {
    int n;
    cin >> n;
    arr.assign(n + 2, {});
    arr[n + 1] = l;

    for (int i = 1; i <= n; ++i) {
      cin >> arr[i];
    }
    int dp[n + 2][n + 2];
    for (int sz = 1; sz < n + 2; ++sz) {
      for (int l = 0; l + sz < n + 2; ++l) {
        int r = l + sz;
        if (l + 1 == r) {
          dp[l][r] = 0;
          continue;
        }
        int &res = dp[l][r];
        res = 1e9;
        for (int i = l + 1; i < r; ++i) {
          res = min(
              res,
              dp[l][i] + dp[i][r] + arr[r] - arr[l]
          );
        }
      }
    }
    cout << "The minimum cutting is " << dp[0][n + 1] << ".\n";
  }
}
