#include <bits/stdc++.h>

#define ll long long
using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, l, r, x;
  cin >> n >> l >> r >> x;
  int arr[n];
  for (int &v: arr) {
    cin >> v;
  }
  const int N = 1 << n;
  int cnt{};
  for (int mask = 0; mask < N; ++mask) {
    int sum{}, mn = 1e9, mx = 0, sz = 0;
    for (int i = 0; i < n; ++i) {
      if (mask >> i & 1) {
        sum += arr[i];
        mn = min(mn, arr[i]);
        mx = max(mx, arr[i]);
        ++sz;
      }
    }
    if (sz > 1 && l <= sum && sum <= r && mx - mn >= x) {
      ++cnt;
    }
  }
  cout << cnt;
}
