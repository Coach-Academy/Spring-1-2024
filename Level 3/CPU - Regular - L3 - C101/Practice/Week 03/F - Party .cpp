#include <bits/stdc++.h>

using namespace std;
vector<vector<int>> adj;

int dfs(int u) {
  int sz = 1;
  for (int &v: adj[u]) {
    sz = max(sz, 1 + dfs(v));
  }
  return sz;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  adj.assign(n, {});
  vector<int> roots;
  for (int i = 0, u; i < n; ++i) {
    cin >> u;
    if (u == -1) {
      roots.emplace_back(i);
    } else {
      adj[--u].emplace_back(i);
    }
  }
  int res = 1;
  for (int root: roots) {
    res = max(res, dfs(root));
  }
  cout << res << '\n';
}

