#include <bits/stdc++.h>

using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> comp[n + 1];
  int par[n + 1];
  for (int i = 1; i <= n; ++i) {
    comp[i] = {i};
    par[i] = i;
  }
  for (int i = 1, x, y; i < n; ++i) {
    cin >> x >> y;
    x = par[x], y = par[y];
    if (comp[x].size() > comp[y].size()) {
      swap(x, y);
    }
    for (int val: comp[x]) {
      comp[y].emplace_back(val);
      par[val] = y;
    }
  }
  for (int x: comp[par[1]]) {
    cout << x << ' ';
  }
}
