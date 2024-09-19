#include <bits/stdc++.h>

using namespace std;
#define ll long long

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int q;
  cin >> q;
  while (q--) {
    ll l, r;
    cin >> l >> r;
    for (int i = 0; i < 63; ++i) {
      ll tmp = l;
      tmp |= 1ll << i;
      if (tmp <= r) {
        l = tmp;
      } else {
        break;
      }
    }
    cout << l << '\n';
  }
}
