#include <bits/stdc++.h>

using namespace std;
#define int long long
vector<vector<int>> adj;
vector<int> mem;

int dp(int u) {
  if (adj[u].empty()) {
    return 0;
  }
  int &res = mem[u];
  if (~res) {
    return res;
  }
  res = 0;
  for (int &v: adj[u]) {
    res = max(res, dp(v) + 1);
  }
  return res;
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  adj.assign(n + 1, {});
  mem.assign(n + 1, -1);
  for (int i = 0, u, v; i < m; ++i) {
    cin >> u >> v;
    adj[u].emplace_back(v);
  }
  int res = 0;
  for (int i = 1; i <= n; ++i) {
    res = max(res, dp(i));
  }
  cout << res;
}
