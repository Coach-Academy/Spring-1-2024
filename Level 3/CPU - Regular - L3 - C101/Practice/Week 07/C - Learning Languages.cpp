#include <bits/stdc++.h>

using namespace std;

struct DSU {
  vector<int> par;
  int n;

  DSU(int n) : par(n), n(n) { iota(par.begin(), par.end(), 0); }

  int find(int u) {
    if (par[u] == u)return u;
    return par[u] = find(par[u]);
  }

  void join(int u, int v) {
    if ((u = find(u)) == (v = find(v))) return;
    par[u] = v;
    --n;
  }


};

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m, res{};
  cin >> n >> m;
  vector<int> col[m + 1];
  for (int i = 0, x, sz; i < n; ++i) {
    cin >> sz;
    if (!sz)++res;
    else
      while (sz--) {
        cin >> x;
        col[x].emplace_back(i);
      }
  }
  DSU dsu(n);
  for (auto &a: col) {
    for (int i = 1; i < a.size(); ++i) {
      dsu.join(a[i], a[i - 1]);
    }
  }
  cout << dsu.n - 1 + (res == n);
}
