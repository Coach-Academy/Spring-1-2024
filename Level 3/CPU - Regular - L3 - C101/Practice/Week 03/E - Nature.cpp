#include <bits/stdc++.h>

typedef long long ll;
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
  while (cin >> n >> m, (n or m)) {
    map<string, int> id;
    string s, ss;
    for (int i = 1; i <= n; ++i) {
      cin >> s;
      id[s] = i;
    }
    adj.assign(n + 1, {});
    vis.assign(n + 1, {});
    for (int i = 0; i < m; ++i) {
      cin >> s >> ss;
      int u = id[s], v = id[ss];
      adj[u].emplace_back(v);
      adj[v].emplace_back(u);
    }
    int ans{};
    for (int i = 1; i <= n; ++i) {
      if (vis[i])continue;
      ans = max(ans, dfs(i));
    }
    cout << ans << '\n';
  }

}


