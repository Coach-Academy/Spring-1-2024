#include <bits/stdc++.h>

using namespace std;
#define ll long long

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int l, r;
  cin >> l >> r;
  int p = 30;
  while (p >= 0) {
    if ((l >> p & 1) != (r >> p & 1)) {
      break;
    }
    --p;
  }
  if (p == -1)
    cout << 0;
  else
    cout << (1 << (p + 1)) - 1;
}

