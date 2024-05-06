#include <bits/stdc++.h>

using namespace std;
#define ll long long

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, k;
  cin >> n >> k;
  vector<int> a(n + 1);
  for (int i = 1; i <= n; ++i) {
    cin >> a[i];
  }
  int sum = 0;
  for (int i = 1, t; i <= n; ++i) {
    cin >> t;
    if (t == 1) {
      sum += a[i];
      a[i] = 0;
    }
  }
  partial_sum(a.begin(), a.end(), a.begin());
  int l = 1, r = k;
  int mx = 0;
  while (r <= n) {
    int s = a[r] - a[l - 1];
    mx = max(mx, s);
    ++r, ++l;
  }
  cout << sum + mx;
}
