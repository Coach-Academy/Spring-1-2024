#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int mod = 1e9;

int add(ll a, ll b) { return ((a + b) % mod + mod) % mod; }

int mul(ll a, ll b) { return a % mod * (b % mod) % mod; }


struct DSU {
  vector<int> par, sz;
  int n;

  DSU(int n) : par(n), sz(n, 1), n(n) { iota(par.begin(), par.end(), 0); }

  int leader(int u) {
    if (par[u] == u)return u;
    return par[u] = leader(par[u]);
  }

  int join(int u, int v) {
    u = leader(u), v = leader(v);
    if (u == v)return 0;
    if (sz[u] > sz[v])swap(u, v);
    par[u] = v;
    int res = sz[u] * 1ll * sz[v] % mod;
    sz[v] += sz[u];
    --n;
    return res;
  }

};

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  vector<array<int, 3>> edges(m);
  for (auto &[w, u, v]: edges) {
    cin >> u >> v >> w, --u, --v;
  }
  sort(edges.rbegin(), edges.rend());
  DSU dsu(n);
  int cnt{}, res{};
  for (auto &[w, u, v]: edges) {
    cnt = add(cnt, dsu.join(u, v));
    res = add(
        res,
        mul(w, cnt)
    );
  }
  cout << res << '\n';
}
