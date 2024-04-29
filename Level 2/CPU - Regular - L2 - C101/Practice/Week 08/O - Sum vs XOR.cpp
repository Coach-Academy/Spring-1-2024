#include <bits/stdc++.h>

using namespace std;
#define ll long long

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  ll n;
  cin >> n;
  int zeros = 0;
  while (n > 0) {
    if (~n & 1) ++zeros;
    n >>= 1;
  }
  cout << (1LL << zeros) << '\n';
}

