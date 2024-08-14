#include <bits/stdc++.h>

using namespace std;
#define ll long long

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int tc;
  cin >> tc;
  while (tc--) {
    ll x;
    cin >> x;
    ll res{};
    for (int i = 0; x > 0; ++i, x >>= 1) {
      if (~x & 1)
        res += 1LL << i;
    }
    cout << res << '\n';
  }
}

