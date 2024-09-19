#include <bits/stdc++.h>

using namespace std;
#define ll long long
const int mod = 1e9 + 7, N = 1e3 + 5;
int fact[N], inv[N];

int mul(ll a, ll b) { return a * b % mod; }

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
  return mul(
      fact[n],
      mul(inv[r], inv[n - r])
  );
}

void solve() {
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  for (int &x: a) {
    cin >> x;
  }
  sort(a.rbegin(), a.rend());
  int x = a[k - 1];
  n = count(a.begin(), a.end(), x);
  int r = count(a.begin(), a.begin() + k, x);
  int ans = nCr(n, r);
  cout << ans << '\n';
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
