#include <bits/stdc++.h>

#define ll long long
using namespace std;

const int mod = 1e9 + 7;

ll mul(ll a, ll b) { return a % mod * (b % mod) % mod; }

ll power(ll base, ll p) {
  if (p == 0) {
    return 1;
  }
  ll res = power(base, p >> 1);
  res = mul(res, res);
  if (p & 1) {
    res = mul(res, base);
  }
  return res;
}

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

ll mod_inv(ll a) {
  return power(a, mod - 2);
}
