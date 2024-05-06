#include <bits/stdc++.h>

typedef long long ll;
using namespace std;
vector<vector<int>> adj;
vector<bool> vis;

int dfs(int u) {
  vis[u] = true;
  int sz = 1;
  for (int &v: adj[u]) {
    if (!vis[v]) {
      sz += dfs(v);
    }
  }
  return sz;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  adj.assign(n + 1, {});
  vis.assign(n + 1, {});
  for (int i = 0, u, v; i < m; ++i) {
    cin >> u >> v;
    adj[u].emplace_back(v);
    adj[v].emplace_back(u);
  }
  ll ans = 1;
  for (int i = 1; i <= n; ++i) {
    if (!vis[i]) {
      int sz = dfs(i);
      ans *= 1ll << (sz - 1);
    }
  }
  cout << ans;
}


