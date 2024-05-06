#include <bits/stdc++.h>

using namespace std;
#define int long long

void solve() {
  int n, k, init;
  cin >> n >> k >> init;

  int p[n - 1];
  for (int &x: p)cin >> x;

  auto ok = [&](int val) {
    int sum = init + val;
    for (int &x: p) {
      if (x * 100 > k * sum)
        return false;
      sum += x;
    }
    return true;
  };
  int s = 0, e = 1e12, md, ans;
  while (s <= e) {
    md = (s + e) / 2;
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
