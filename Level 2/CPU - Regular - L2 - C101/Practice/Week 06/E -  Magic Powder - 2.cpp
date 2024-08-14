#include <bits/stdc++.h>

using namespace std;
#define int long long

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, k;
  cin >> n >> k;
  int a[n], b[n];
  for (int &x: a) cin >> x;
  for (int &x: b) cin >> x;
  auto ok = [&](int sz) {
    int left = k;
    for (int i = 0; i < n; ++i) {
      int need = a[i] * sz;
      need -= b[i];
      if (need > 0) {
        if (left >= need) {
          left -= need;
        } else {
          return false;
        }
      }
    }
    return true;
  };
  int s = 0, e = 3e9, ans, md;
  while (s <= e) {
    md = (s + e) / 2;
    if (ok(md)) {
      s = md + 1, ans = md;
    } else {
      e = md - 1;
    }
  }
  cout << ans;
}

