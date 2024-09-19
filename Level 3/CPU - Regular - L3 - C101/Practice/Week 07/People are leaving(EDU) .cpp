#include <bits/stdc++.h>

using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, q;
  cin >> n >> q;
  int par[n + 2];
  iota(par, par + n + 2, 0);
  function<int(int)> leader = [&](int u) {
    if (par[u] == u)return u;
    return par[u] = leader(par[u]);
  };
  char ty;
  int x;
  while (q--) {
    cin >> ty >> x;
    if (ty == '?') {
      int res = leader(x);
      if (res > n)res = -1;
      cout << res << '\n';
    } else {
      par[x] = x + 1;
    }
  }
}
