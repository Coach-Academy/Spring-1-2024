#include <bits/stdc++.h>

using namespace std;
#define ll long long
const int mod = 1e9 + 7, N = 2e5 + 5;
int fact[N], inv[N];

int mul(ll a, ll b) { return a * b % mod; }

int add(int a, int b) { return (a + b) % mod; }

ll power(int b, int p) {
  if (!p)return 1;
  ll res = power(b, p / 2);
  res = mul(res, res);
  if (p & 1) {
    res = mul(res, b);
  }
  return res;
}

int nCr(int n, int r) {
  if (r > n)return 0;
  return mul(fact[n], mul(inv[r], inv[n - r]));
}

void solve() {
  int n, m, k;
  cin >> n >> m >> k;
  vector<int> a(n + 1);
  for (int i = 0, x; i < n; ++i) {
    cin >> x;
    a[x] += 1;
  }
  partial_sum(a.begin(), a.end(), a.begin());
  int res = 0;
  for (int i = 1; i <= n; ++i) {
    int r = min(n, i + k);
    int cur = a[i] - a[i - 1];
    while (cur > 0) {
      int sz = a[r] - a[i] + cur - 1;
      res = add(res, nCr(sz, m - 1));
      --cur;
    }
  }
  cout << res << '\n';
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  fact[0] = inv[0] = 1;
  for (int i = 1; i < N; ++i) {
    fact[i] = mul(fact[i - 1], i);
    inv[i] = power(fact[i], mod - 2);
  }
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
