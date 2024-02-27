#include <bits/stdc++.h>

typedef long long ll;
using namespace std;
vector<vector<int>> adj;
vector<int> ans;

void dfs(int u, int p) {
  for (int &v: adj[u]) {
    if (v == p)continue;
    ans[v] = u;
    dfs(v, u);
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, r1, r2;
  cin >> n >> r1 >> r2;
  adj.assign(n + 1, {});
  ans.assign(n + 1, {});
  for (int i = 1; i <= n; ++i) {
    if (i == r1)continue;
    int par;
    cin >> par;
    adj[par].emplace_back(i);
    adj[i].emplace_back(par);
  }
  dfs(r2, -1);
  for (int i = 1; i <= n; ++i) {
    if (i == r2)continue;
    cout << ans[i] << ' ';
  }
}
