#include <bits/stdc++.h>

typedef long long ll;
using namespace std;
vector<vector<int>> adj;
map<int, int> valToId, idToVal;

void dfs(int u, int par) {
  for (int &v: adj[u]) {
    if (v != par) {
      dfs(v, u);
    }
  }
  cout << idToVal[u] << ' ';
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  int cnt = 0;
  int u, v;
  adj.assign(n + 1, {});
  for (int i = 0; i < n; ++i) {
    cin >> u >> v;
    if (!valToId.count(u)) {
      idToVal[cnt] = u;
      valToId[u] = cnt++;
    }
    if (!valToId.count(v)) {
      idToVal[cnt] = v;
      valToId[v] = cnt++;
    }
    u = valToId[u];
    v = valToId[v];
    adj[u].emplace_back(v);
    adj[v].emplace_back(u);
  }

  for (int i = 0; i <= n; ++i) {
    if (adj[i].size() == 1) {
      dfs(i, -1);
      break;
    }
  }

}
