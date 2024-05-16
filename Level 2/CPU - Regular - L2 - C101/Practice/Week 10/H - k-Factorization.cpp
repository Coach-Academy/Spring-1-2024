#include <bits/stdc++.h>

using namespace std;
#define ll long long

vector<int> prime_factors(int n) {
  vector<int> res;
  for (int i = 2; i <= n / i; ++i) {
    while (!(n % i)) {
      res.emplace_back(i), n /= i;
    }
  }
  if (n > 1)res.emplace_back(n);
  return res;
}

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, k;
  cin >> n >> k;
  auto res = prime_factors(n);
  if (res.size() < k) {
    return cout << -1, 0;
  }
  while (res.size() > k) {
    res[0] *= res.back();
    res.pop_back();
  }
  for (int &x: res) {
    cout << x << ' ';
  }
}

