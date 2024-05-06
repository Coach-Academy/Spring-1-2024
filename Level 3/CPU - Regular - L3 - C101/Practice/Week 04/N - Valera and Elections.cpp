#include <bits/stdc++.h>

using namespace std;
#define ll long long
const int N = 1e5 + 5;
vector<pair<int, int>> adj[N];


set<int> bfs() {
  set<int> res;
  /// [0] - > node
  /// [1] - > dir par
  /// [2] - > last inserted anc
  queue<array<int, 3>> q;
  q.push({1, -1, -1});
  while (q.size()) {
    auto [u, par, anc] = q.front();
    q.pop();
    for (auto &[v, state]: adj[u]) {
      if (v == par)continue;
      if (state == 2) {
        res.emplace(v);
        res.erase(anc);
        q.push({v, u, v});
      } else {
        q.push({v, u, anc});
      }
    }
  }
  return res;
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  for (int i = 1, u, v, t; i < n; ++i) {
    cin >> u >> v >> t;
    adj[u].emplace_back(v, t);
    adj[v].emplace_back(u, t);
  }
  auto res = bfs();
  cout << res.size() << '\n';
  for (int x: res)
    cout << x << ' ';
}
