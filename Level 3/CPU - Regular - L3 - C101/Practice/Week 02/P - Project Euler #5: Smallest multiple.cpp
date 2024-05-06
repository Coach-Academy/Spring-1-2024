#include <bits/stdc++.h>

using namespace std;
#define ll long long

ll gcd(ll a, ll b) { return !b ? a : gcd(b, a % b); }

ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n;  cin >> n;
    ll res = 1;
    for (int i = 2; i <=n; ++i) {
      res = lcm(res,i);
    }
    cout << res << '\n';
  }
}
