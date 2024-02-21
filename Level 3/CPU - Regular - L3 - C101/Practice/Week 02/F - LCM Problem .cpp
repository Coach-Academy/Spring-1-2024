#include <bits/stdc++.h>

#define ll long long
using namespace std;

void solve() {
  int l, r;
  cin >> l >> r;
  if (l * 2 <= r) {
    cout << l << ' ' << l * 2 << '\n';
  } else {
    cout << "-1 -1\n";
  }
}

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int tc;
  cin >> tc;
  while (tc--) {
    solve();
  }
}
