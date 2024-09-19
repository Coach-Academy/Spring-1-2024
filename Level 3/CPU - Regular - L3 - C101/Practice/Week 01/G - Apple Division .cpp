#include <bits/stdc++.h>

using namespace std;
#define ll long long

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  vector<int> arr(n);
  for (auto &x: arr) {
    cin >> x;
  }
  const int N = (1 << n);
  ll res = 1e18;
  for (int msk = 0; msk < N; msk++) {
    ll g1 = 0, g2 = 0;
    for (int j = 0; j < n; j++) {
      if (msk >> j & 1) {
        g1 += arr[j];
      } else {
        g2 += arr[j];
      }
    }
    res = min(res, abs(g1 - g2));
  }
  cout << res;
}
