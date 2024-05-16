#include <bits/stdc++.h>

using namespace std;
#define ll long long

vector<pair<ll, int>> prime_factors(ll n) {
  vector<pair<ll, int>> res;
  for (ll f = 2; f * f <= n; ++f) {
    int cnt = 0;
    while (n % f == 0) {
      ++cnt, n /= f;
    }
    if (cnt > 0)
      res.emplace_back(f, cnt);
  }
  if (n > 1) {
    res.emplace_back(n, 1);
  }
  return res;
}


int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  ll n;
  while (cin >> n, n > 0) {
    auto res = prime_factors(n);
    for (auto [prime, pow]: res) {
      cout << prime << '^' << pow << ' ';
    }
    cout << '\n';
  }
}

