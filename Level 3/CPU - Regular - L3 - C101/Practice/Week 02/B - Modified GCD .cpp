#include <bits/stdc++.h>

#define ll long long
using namespace std;

int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int a, b, q;
  cin >> a >> b >> q;
  int g = gcd(a, b);
  set<int> divisors;
  for (int i = 1; i * i <= g; ++i) {
    if (g % i == 0) {
      divisors.insert(i);
      divisors.insert(g / i);
    }
  }
  while (q--) {
    int l, r;
    cin >> l >> r;
    auto it = divisors.upper_bound(r);
    if (it != divisors.begin() && *(--it) >= l) { ;
      cout << *it << '\n';
    } else {
      cout << "-1\n";
    }
  }


}
