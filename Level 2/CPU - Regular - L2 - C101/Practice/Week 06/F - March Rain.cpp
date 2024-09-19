#include <bits/stdc++.h>

using namespace std;
#define int long long

void solve() {
  int n, k;
  cin >> n >> k;
  int a[n];
  for (int &x: a) cin >> x;
  auto ok = [&](int len) -> bool {
    int lst = a[0];
    int cnt = 1;
    for (int &x: a) {
      if (lst + len <= x) {
        ++cnt, lst = x;
      }
    }
    return (cnt <= k);
  };
  int s = 1, e = 2e9, md, ans;
  while (s <= e) {
    md = (e + s) / 2;
    if (ok(md)) {
      ans = md;
      e = md - 1;
    } else {
      s = md + 1;
    }
  }
  cout << ans;
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int tc;
  cin >> tc;
  while (tc--) {
    solve(), cout << '\n';
  }
}
