#include <bits/stdc++.h>

using namespace std;
#define ll long long

/// O ( min(n - r , r) )
ll nCr(int n, int r) {
  if (r > n) {
    return 0;
  }
  if (n - r < r) {
    r = n - r;
  }
  ll res = 1;
  for (int i = 1; i <= r; ++i) {
    res *= n - i + 1;
    res /= i;
  }
  return res;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--) {
    int n, r;
    cin >> n >> r;
    cout << nCr(n - 1, r - 1) << '\n';
  }
  return 0;
}
