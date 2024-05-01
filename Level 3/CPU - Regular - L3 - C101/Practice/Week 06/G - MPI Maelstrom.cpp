#include <bits/stdc++.h>

using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  while (cin >> n) {
    vector<vector<pair<int, int>>> adj(n);
    for (int i = 1; i < n; ++i) {
      for (int j = 0; j < i; ++j) {
        string s;
        cin >> s;
        if (s == "x")continue;
        int w = stoi(s);
        adj[j].emplace_back(i, w);
        adj[i].emplace_back(j, w);
      }
    }
    set<pair<int, int>> st = {{0, 0}};
    int dis[n];
    memset(dis, '?', sizeof dis);
    while (st.size()) {
      auto [d, u] = *st.begin();
      st.erase(st.begin());
      for (auto [v, w]: adj[u]) {
        int dd = d + w;
        if (dd < dis[v]) {
          st.erase({dis[v], v});
          st.insert({dis[v] = dd, v});
        }
      }
    }
    cout << *max_element(dis, dis + n) << '\n';
  }
}
