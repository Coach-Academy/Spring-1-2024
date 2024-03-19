#include<bits/stdc++.h>

using namespace std;
#define ll long long
const int N = 1e5 + 5;
vector<pair<int, int>> adj[N];
int n, k;

vector<int> dijkstra(int src) {
  vector<int> dist(n, 1e9);
  set<pair<int, int>> st = {{0, src}};
  dist[src] = 0;
  while (st.size()) {
    auto [w, u] = *st.begin();
    st.erase(st.begin());
    for (auto [to, c]: adj[u]) {
      int d = c + w;
      if (d < dist[to]) {
        st.erase({dist[to], to});
        st.insert({d, to});
        dist[to] = d;
      }
    }
  }
  return dist;
}

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int m;
  cin >> n >> m >> k;
  vector<pair<int, int>> edges(m);
  for (int i = 0, u, v, c; i < m; ++i) {
    cin >> u >> v >> c;
    --u, --v;
    adj[u].emplace_back(v, c);
    adj[v].emplace_back(u, c);
    edges[i] = {u, v};
  }
  vector<vector<int>> dis(n);
  for (int src = 0; src < n; ++src) {
    dis[src] = dijkstra(src);
  }
  vector<pair<int, int>> ord(k);
  for (auto &[u, v]: ord) {
    cin >> u >> v, --u, --v;
  }
  int mn = 1e9;
  for (auto &[u, v]: edges) {
    int res{};
    for (auto &[s, e]: ord) {
      res += min({
                     dis[s][e],
                     dis[s][u] + dis[e][v],
                     dis[s][v] + dis[e][u]
                 });
    }
    mn = min(mn, res);
  }
  cout << mn;
}
