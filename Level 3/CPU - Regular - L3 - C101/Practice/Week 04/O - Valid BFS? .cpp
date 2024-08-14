#include <bits/stdc++.h>

using namespace std;
vector<vector<int>> adj;

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  adj.assign(n + 1, {});
  for (int i = 1, u, v; i < n; ++i) {
    cin >> u >> v;
    adj[u].emplace_back(v);
    adj[v].emplace_back(u);
  }
  deque<int> arr(n), id(n + 1);
  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
    id[arr[i]] = i;
  }
  auto cmp = [&](int f, int s) {
    return id[f] < id[s];
  };
  for (auto &ad: adj) {
    sort(ad.begin(), ad.end(), cmp);
  }
  queue<pair<int, int>> q;
  q.emplace(1, -1);
  while (q.size()) {
    auto [u, p] = q.front();
    q.pop();
    if (arr.front() == u) {
      arr.pop_front();
    } else {
      cout << "NO";
      exit(0);
    }
    for (int v: adj[u]) {
      if (v == p)continue;
      q.emplace(v, u);
    }
  }
  cout << "YES";
}
