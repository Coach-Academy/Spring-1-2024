#include <bits/stdc++.h>

using namespace std;
#define ll long long

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int tc;
  ll l, r;
  cin >> tc;
  while (tc--) {
    cin >> l >> r;
    for (int i = 0;; ++i) {
      ll t = 1LL << i | l;
      if (t > r)break;
      l = t;
    }
    cout << l << '\n';
  }

}

