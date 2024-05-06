#include <bits/stdc++.h>

using namespace std;
vector<vector<int>> adj;
vector<int> col;

bool dfs(int u) {
  for (int &v: adj[u]) {
    if (!col[v]) {
      col[v] = 3 - col[u];
      if (!dfs(v)) {
        return false;
      }
    } else if (col[v] == col[u]) {
      return false;
    }
  }
  return true;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int tc;
  cin >> tc;
  for (int t = 1; t <= tc; ++t) {
    int n, m;
    cin >> n >> m;
    adj.assign(n, {});
    col.assign(n, {});
    for (int i = 0, u, v; i < m; ++i) {
      cin >> u >> v;
      adj[--u].emplace_back(--v);
      adj[v].emplace_back(u);
    }
    cout << "Scenario #" << t << ":\n";
    bool isBipartite = true;
    for (int i = 0; i < n; ++i) {
      if (col[i])continue;
      col[i] = 1;
      isBipartite &= dfs(i);
    }
    if (isBipartite) {
      cout << "No suspicious bugs found!\n";
    } else {
      cout << "Suspicious bugs found!\n";
    }
  }

}


