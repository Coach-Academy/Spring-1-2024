#include<bits/stdc++.h>

using namespace std;
#define ll long long
const int N = 1e5 + 5;
struct node {
  int to, cost;
  bool is_train;
};
vector<node> adj[N];
int n, k;

ll dijkstra() {
  ll dist[n + 1];
  bool vis[n + 1];
  memset(dist, '?', sizeof dist);
  memset(vis, 0, sizeof vis);
  dist[1] = 0;
  priority_queue<array<ll, 3>, vector<array<ll, 3>>, greater<>> pq;
  pq.push({0, 1, 0});
  int ans{};
  while (pq.size()) {
    auto [w, u, is_train] = pq.top();
    pq.pop();
    if (vis[u])continue;
    vis[u] = true;
    if (is_train) {
      ++ans;
    }
    for (auto [to, c, tr]: adj[u]) {
      ll d = c + w;
      if (d <= dist[to]) {
        dist[to] = d;
        pq.push({d, to, tr});
      }
    }
  }
  return ans;
}

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int m;
  cin >> n >> m >> k;
  for (int i = 0, u, v, c; i < m; ++i) {
    cin >> u >> v >> c;
    adj[u].push_back({v, c, 0});
    adj[v].push_back({u, c, 0});
  }
  for (int i = 0, u, c; i < k; ++i) {
    cin >> u >> c;
    adj[1].push_back({u, c, true});
  }
  cout << k - dijkstra() << '\n';
}
