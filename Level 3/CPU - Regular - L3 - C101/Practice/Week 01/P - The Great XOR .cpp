#include <bits/stdc++.h>

using namespace std;
#define ll long long

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr), cout.tie(nullptr);
  int q;
  cin >> q;
  while (q--) {
    ll x, res = 0;
    cin >> x;
    int i = 0;
    while (x > 0) {
      if (!(x & 1)) {
        res += (1LL << i);
      }
      x >>= 1;
      ++i;
    }
    cout << res << '\n';
  }

}
