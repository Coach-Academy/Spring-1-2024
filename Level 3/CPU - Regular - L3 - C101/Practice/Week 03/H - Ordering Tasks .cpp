#include <bits/stdc++.h>

using namespace std;
vector<vector<int>> adj;
vector<int> order;
vector<bool> vis;

void dfs(int u) {
  vis[u] = true;
  for (int &v: adj[u]) {
    if (vis[v])continue;
    dfs(v);
  }
  order.emplace_back(u);
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
    for (int i = 1; i <= n; ++i) {
      if (vis[i])continue;
      dfs(i);
    }
    while (order.size()) {
      cout << order.back() << ' ';
      order.pop_back();
    }
    cout << '\n';
  }
}

