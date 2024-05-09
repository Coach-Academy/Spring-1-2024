#include <bits/stdc++.h>

using namespace std;
#define int long long
const int N = 102, M = 1e5 + 2, inf = 1e9 + 2;
int w[N], val[N];
int n;
int mem[N][M];

int dp(int i, int ans) {
  if (i == n or !ans) {
    return ans ? inf : 0;
  }
  int &res = mem[i][ans];
  if (~res) {
    return res;
  }
  int op1 = dp(i + 1, ans);
  int op2 = inf;
  if (ans >= val[i]) {
    op2 = dp(i + 1, ans - val[i]) + w[i];
  }
  res = min(op1, op2);
  return res;
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  memset(mem, -1, sizeof mem);
  int cap, sum{};
  cin >> n >> cap;
  for (int i = 0; i < n; ++i) {
    cin >> w[i] >> val[i];
    sum += val[i];
  }
  for (int ans = sum; ans >= 0; --ans) {
    int min_cap = dp(0, ans);
    if (min_cap <= cap) {
      cout << ans;
      return 0;
    }
  }
}
