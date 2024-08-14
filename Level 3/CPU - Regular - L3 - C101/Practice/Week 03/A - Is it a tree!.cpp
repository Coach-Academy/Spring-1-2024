#include <bits/stdc++.h>

using namespace std;
vector<vector<int>> adj;
vector<bool> vis;

int dfs(int u) {
  vis[u] = true;
  int sz = 1;
  for (int &v: adj[u]) {
    if (vis[v])continue;
    sz += dfs(v);
  }
  return sz;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  adj.assign(n, {});
  vis.assign(n, {});
  for (int i = 0, u, v; i < m; ++i) {
    cin >> u >> v;
    adj[--u].emplace_back(--v);
    adj[v].emplace_back(u);
  }
  if (m + 1 != n or dfs(0) != n) {
    cout << "NO";
  } else {
    cout << "YES";
  }
}


