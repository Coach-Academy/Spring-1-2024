#include <bits/stdc++.h>

using namespace std;
vector<vector<int>> adj;
vector<int> order;
vector<int> vis;

bool dfs(int u) {
  if (vis[u] == 2)return false;
  if (vis[u] == 1)return true;
  vis[u] = 1;
  for (int &v: adj[u]) {
    if (dfs(v)) {
      return true;
    }
  }
  order.emplace_back(u);
  vis[u] = 2;
  return false;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  while (cin >> n >> m, (n or m)) {
    adj.assign(n + 1, {});
    vis.assign(n + 1, {});
    for (int i = 0, u, v; i < m; ++i) {
      cin >> u >> v;
      adj[u].emplace_back(v);
    }
    bool cycle = false;
    for (int i = 1; i <= n; ++i) {
      if (vis[i])continue;
      cycle |= dfs(i);
    }
    if (cycle) {
      cout << "IMPOSSIBLE\n";
      order.clear();
    } else {
      while (order.size()) {
        cout << order.back() << '\n';
        order.pop_back();
      }
    }
  }
}

