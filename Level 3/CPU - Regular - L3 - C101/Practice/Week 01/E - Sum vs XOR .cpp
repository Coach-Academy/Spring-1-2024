#include <bits/stdc++.h>

#define ll long long
using namespace std;


int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  ll n;
  cin >> n;
  ll zeros = 0;
  if (n > 0) {
    zeros = 64 - __builtin_clzll(n) - __builtin_popcountll(n);
  }
  cout << (1ll << zeros);
}
