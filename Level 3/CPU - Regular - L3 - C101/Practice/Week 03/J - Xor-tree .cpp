#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

vector<vector<int>> adj;
vector<int> f, t;
vector<int> ans;


void dfs(int u, int p, int even, int odd, int lvl) {
  if (lvl & 1) {
    f[u] ^= odd;
  } else {
    f[u] ^= even;
  }
  if (f[u] != t[u]) {
    ans.emplace_back(u);
    if (lvl & 1) {
      odd ^= 1;
    } else {
      even ^= 1;
    }
  }
  for (int &v: adj[u]) {
    if (v == p)continue;
    dfs(v, u, even, odd, lvl + 1);
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  adj.assign(n + 1, {});
  f.assign(n + 1, {});
  t.assign(n + 1, {});
  for (int i = 1, u, v; i < n; ++i) {
    cin >> u >> v;
    adj[u].emplace_back(v);
    adj[v].emplace_back(u);
  }
  for (int i = 1; i <= n; ++i) {
    cin >> f[i];
  }
  for (int i = 1; i <= n; ++i) {
    cin >> t[i];
  }
  dfs(1, -1, 0, 0, 1);
  cout << ans.size() << '\n';
  for (int &x: ans) {
    cout << x << '\n';
  }
}


