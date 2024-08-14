#include <bits/stdc++.h>

typedef long long ll;
using namespace std;
vector<vector<int>> adj;
vector<bool> vis;

void dfs(int u) {
  vis[u] = true;
  for (int &v: adj[u]) {
    if (vis[v])continue;
    dfs(v);
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  adj.assign(n + 1, {});
  vis.assign(n + 1, {});
  for (int i = 1, u; i <= n; ++i) {
    cin >> u;
    adj[i].emplace_back(u);
    adj[u].emplace_back(i);
  }
  int ans{};
  for (int i = 1; i <= n; ++i) {
    if (!vis[i]) {
      ++ans;
      dfs(i);
    }
  }
  cout << ans;
}


