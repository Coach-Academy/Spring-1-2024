#include<bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    bool ok = true;
    for (int i = 1, x; i <= n; i++) {
      cin >> x;
      bool found = false;
      for (int j = i + 1; j >= 2; j--) {
        if (x % j) {
          found = true;
          break;
        }
      }
      ok &= found;
    }
    if (ok) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }
  return 0;
}
