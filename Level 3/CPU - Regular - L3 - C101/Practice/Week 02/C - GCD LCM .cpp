#include <bits/stdc++.h>

#define ll long long
using namespace std;

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int a, b;
    cin >> a >> b;
    if (b % a) {
      cout << "-1\n";
    } else {
      cout << a << ' ' << b << '\n';
    }
  }
}
