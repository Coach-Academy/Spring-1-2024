#include <bits/stdc++.h>

#define ll long long
using namespace std;

const int mod = 1e9 + 7;

ll power(ll a, ll p);

ll mul(ll a, ll b) { return a % mod * (b % mod) % mod; }

ll add(ll a, ll b) { return (a % mod + b % mod) % mod; }

ll sub(ll a, ll b) { return ((a % mod) - (b % mod) + mod) % mod; }

ll mod_inv(ll a) { return power(a, mod - 2); }

ll divide(ll a, ll b) { return mul(a, mod_inv(b)); }

ll power(ll base, ll p) {
  base %= mod;
  ll res = 1;
  while (p) {
    if (p & 1)res = mul(res, base);
    base = mul(base, base);
    p >>= 1;
  }
  return res;
}

vector<int> fact;
vector<int> inv;

void pre(int N) {
  fact.assign(N + 1, 1);
  inv.assign(N + 1, 1);
  for (int i = 2; i <= N; ++i) {
    fact[i] = mul(fact[i], i);
    inv[i] = mod_inv(fact[i]);
  }
}

int nCr(int n, int r) { return mul(fact[n], mul(inv[r], inv[n - r])); }

int nPr(int n, int r) { return mul(fact[n], inv[n - r]); }
