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


}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int a, b;
  cin >> a >> b;
  vector<int> pa(3), pb(3);
  while (!(a % 2)) pa[0]++, a /= 2;
  while (!(a % 3)) pa[1]++, a /= 3;
  while (!(a % 5)) pa[2]++, a /= 5;

  while (!(b % 2)) pb[0]++, b /= 2;
  while (!(b % 3)) pb[1]++, b /= 3;
  while (!(b % 5)) pb[2]++, b /= 5;

  if (a != b) {
    cout << "-1";
  } else {
    cout << (
        abs(pa[0] - pb[0]) +
        abs(pa[1] - pb[1]) +
        abs(pa[2] - pb[2])
    );
  }
}
