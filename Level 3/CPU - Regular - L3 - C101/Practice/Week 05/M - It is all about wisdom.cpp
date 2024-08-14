#include<bits/stdc++.h>

using namespace std;
#define ll long long
const int N = 1e5 + 5;
struct node {
  int to, cost, key;
};
vector<vector<node>> adj;
int n, k;

ll dijkstra(int max_key) {
  ll dist[n + 1];
  memset(dist, '?', sizeof dist);
  dist[1] = 0;
  priority_queue<pair<ll, int>> pq;
  pq.emplace(0, 1);
  while (pq.size()) {
    auto [w, u] = pq.top();
    w *= -1;
    pq.pop();
    if (w >= k)return 1e15;
    if (u == n) return w;
    if (dist[u] < w)continue;
    for (auto [to, c, ke]: adj[u]) {
      if (ke > max_key)continue;
      ll d = c + w;
      if (d < dist[to]) {
        dist[to] = d;
        pq.emplace(-d, to);
      }
    }
  }
  return 1e15;
}

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int m;
    cin >> n >> m >> k;
    adj.assign(n + 1, {});
    for (int i = 0, u, v, c, p; i < m; ++i) {
      cin >> u >> v >> c >> p;
      adj[u].push_back({v, c, p});
      adj[v].push_back({u, c, p});
    }
    int s = 1, e = 1e9, md, ans = -1;
    while (s <= e) {
      md = (e + s) >> 1;
      if (dijkstra(md) < k) {
        ans = md, e = md - 1;
      } else {
        s = md + 1;
      }
    }
    cout << ans << '\n';
  }
}
