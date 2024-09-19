#include <bits/stdc++.h>

using namespace std;
#define ll long long
const int N = 200'002;

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<ll> arr(n + 1);
  for (int i = 1; i <= n; ++i) {
    cin >> arr[i];
  }
  vector<ll> sorted = arr;
  sort(sorted.begin(), sorted.end());
  for (int i = 1; i <= n; ++i) {
    arr[i] += arr[i - 1];
    sorted[i] += sorted[i - 1];
  }
  int q;
  cin >> q;
  while (q--) {
    int t, l, r;
    cin >> t >> l >> r;
    ll ans = 0;
    if (t == 1) {
      ans = arr[r] - arr[l - 1];
    } else {
      ans = sorted[r] - sorted[l - 1];
    }
    cout << ans << '\n';
  }

}
