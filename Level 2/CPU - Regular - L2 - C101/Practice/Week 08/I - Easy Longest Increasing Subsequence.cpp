#include <bits/stdc++.h>

using namespace std;
#define ll long long

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  int arr[n];
  for (int &x: arr) cin >> x;

  int res = 1;

  for (int mask = 1; mask < (1 << n); ++mask) {
    int prv = -1, sz = 0;
    for (int i = 0; i < n; ++i) {
      if (mask >> i & 1) {
        if (arr[i] > prv) {
          ++sz;
          prv = arr[i];
        } else {
          sz = 0;
          break;
        }
      }
    }
    if (sz > res) {
      res = sz;
    }
  }
  cout << res;

}

