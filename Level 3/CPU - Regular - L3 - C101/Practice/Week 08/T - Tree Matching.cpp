#include <bits/stdc++.h>

using namespace std;
#define int long long
const int N = 2e5 + 5;
vector<int> adj[N];
int mem[2][N];


int dp(int u, bool t, int p) {
  int &res = mem[t][u];
  if (~res)return res;
  int sum{};
  for (int v: adj[u]) {
    if (v == p)continue;
    sum += dp(v, false, u);
  }
  res = sum;
  if (t) return res;
  for (int v: adj[u]) {
    if (v == p)continue;
    res = max(
        res,
        1 + dp(v, true, u) + sum - dp(v, false, u)
    );
  }
  return res;
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  memset(mem, -1, sizeof mem);
  int n;
  cin >> n;
  for (int i = 1, u, v; i < n; ++i) {
    cin >> u >> v;
    adj[u].emplace_back(v);
    adj[v].emplace_back(u);
  }
  cout << dp(1, false, -1);
}
