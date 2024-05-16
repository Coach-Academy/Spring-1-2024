#include <bits/stdc++.h>

using namespace std;
#define ll long long
const int N = 1e6 + 1, mod = 1e9 + 7;


vector<pair<int, int>> prime_factors(int n) {
  vector<pair<int, int>> res;
  for (int i = 2; i * i <= n; ++i) {
    int cnt = 0;
    while (n % i == 0) {
      ++cnt, n /= i;
    }
    if (cnt > 0) {
      res.emplace_back(i, cnt);
    }
  }
  if (n > 1) {
    res.emplace_back(n, 1);
  }
  return res;
}


int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> frq(n + 1, 1);
  for (int i = 2; i <= n; ++i) {
    auto primes = prime_factors(i);
    for (auto &[prime, pow]: primes) {
      frq[prime] += pow;
    }
  }
  ll res = 1;
  for (int pw: frq) {
    res = res * pw % mod;
  }
  cout << res;
}

