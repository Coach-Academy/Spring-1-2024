#include <bits/stdc++.h>

using namespace std;
using ll = long long;

struct DSU {
  vector<int> par, sz;
  int n;

  DSU(int n) : par(n), sz(n, 1), n(n) { iota(par.begin(), par.end(), 0); }

  int leader(int u) {
    if (par[u] == u)return u;
    return par[u] = leader(par[u]);
  }

  bool join(int u, int v) {
    u = leader(u), v = leader(v);
    if (u == v)return false;
    if (sz[u] > sz[v])swap(u, v);
    par[u] = v;
    sz[v] += sz[u];
    --n;
    return true;
  }

};

ll MST(vector<array<int, 3>> &edges, int del, int n) {
  DSU dsu(n);
  ll res{};
  for (int i = 0; i < edges.size(); ++i) {
    if (i == del)continue;
    auto [w, u, v] = edges[i];
    if (dsu.join(u, v)) {
      res += w;
    }
  }
  if (dsu.n != 1)
    res = 1e18;
  return res;
}


void solve() {
  int n, m, k;
  cin >> n >> m >> k;
  vector<array<int, 3>> edges(m);
  for (auto &[w, u, v]: edges) {
    cin >> u >> v >> w;
    --u, --v;
  }
  sort(edges.begin(), edges.end());
  DSU dsu(n);
  ll res{};
  int mx{};
  for (auto &[w, u, v]: edges) {
    if (dsu.join(u, v)) {
      if (w >= k) {
        res += w - k;
      }
      mx = w;
    }
  }
  if (mx >= k) {
    cout << res << '\n';
    return;
  }
  res = k - mx;
  for (auto &[w, u, v]: edges) {
    if (w >= mx) {
      res = min(
          res,
          (ll) abs(w - k)
      );
    }
  }
  cout << res << '\n';
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int tc = 1;
  cin >> tc;
  while (tc--) {
    solve();
  }
  return 0;
}
