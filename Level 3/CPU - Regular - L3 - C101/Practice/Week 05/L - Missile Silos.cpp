#include<bits/stdc++.h>

using namespace std;
#define ll long long
const int N = 1e5 + 5;
vector<pair<int, int>> adj[N];
int n;

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
  int m, s;
  cin >> n >> m >> s;
  vector<array<int, 3>> edges(m);
  for (int i = 0, u, v, c; i < m; ++i) {
    cin >> u >> v >> c;
    --u, --v;
    adj[u].emplace_back(v, c);
    adj[v].emplace_back(u, c);
    edges[i] = {u, v, c};
  }
  int l;
  cin >> l;
  auto dis = dijkstra(--s);
  int res = count(dis.begin(), dis.end(), l);
  for (auto &[u, v, c]: edges) {
    int remL = l - dis[u];
    int remW = c - remL;
    if (remL > 0 && remL < c && l < dis[v] + remW) {
      ++res;
    }
    remL = l - dis[v];
    remW = c - remL;
    if (remL > 0 && remL < c && l <= dis[u] + remW) {
      ++res;
    }
  }
  cout << res;
}
