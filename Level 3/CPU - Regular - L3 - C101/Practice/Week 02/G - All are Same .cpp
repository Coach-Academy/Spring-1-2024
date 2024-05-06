#include <bits/stdc++.h>

#define ll long long
using namespace std;

int gcd(int a, int b) {
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

void solve() {
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int &x: arr) {
    cin >> x;
  }
  sort(arr.begin(), arr.end());
  if (arr[0] == arr[n - 1]) {
    cout << -1;
    return;
  }
  int ans = 0;
  for (int i = 1; i < n; ++i) {
    ans = gcd(ans, arr[i] - arr[i - 1]);
  }
  cout << ans;
}

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int tc;
  cin >> tc;
  while (tc--) {
    solve();
    cout << '\n';
  }
}
