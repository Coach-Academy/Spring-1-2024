#include <bits/stdc++.h>
 
using namespace std;
#define int long long
const int N = 5e5 + 5, M = 18;
int dp[M][N];
 
int merge(int a, int b) { return min(a, b); }
 
int query(int l, int r) {
  int res = dp[0][l];
  for (int p = M - 1; p >= 0; --p) {
    if (l + (1 << p) - 1 <= r) {
      res = merge(res, dp[p][l]);
      l += 1 << p;
    }
  }
  return res;
}
 
void build(vector<int> &arr) {
  const int n = arr.size();
  for (int i = 0; i < n; ++i) {
    dp[0][i] = arr[i];
  }
  for (int p = 1; (1 << p) <= n; ++p) {
    for (int i = 0; i + (1 << p) <= n; ++i) {
      dp[p][i] = merge(
          dp[p - 1][i],
          dp[p - 1][i + (1 << (p - 1))]
      );
    }
  }
}
 
int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, q;
  cin >> n >> q;
  vector<int> arr(n);
  for (int &x: arr) cin >> x;
  build(arr);
  int l, r;
  while (q--) {
    cin >> l >> r;
    cout << query(--l, --r) << '\n';
  }
  return 0;
}
