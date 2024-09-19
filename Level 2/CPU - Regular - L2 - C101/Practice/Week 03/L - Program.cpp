#include <bits/stdc++.h>

using namespace std;
#define ll long long
const int N = 200'002;


void solve() {
  int n, q;
  string s;
  cin >> n >> q >> s;
  vector<int> pref_min(n + 1);
  vector<int> pref_max(n + 1);
  vector<int> pref_sum(n + 1);
  vector<int> suffix_min(n + 2);
  vector<int> suffix_max(n + 2);
  int x = 0;
  for (int i = 0; i < n; ++i) {
    int val = (s[i] == '+') ? +1 : -1;
    x += val;
    pref_sum[i + 1] = pref_sum[i] + val;
    pref_max[i + 1] = max(pref_max[i], x);
    pref_min[i + 1] = min(pref_min[i], x);
  }
  suffix_min[n] = suffix_max[n] = pref_sum[n];
  for (int i = n - 1; i >= 0; --i) {
    suffix_max[i] = max(suffix_max[i + 1], pref_sum[i]);
    suffix_min[i] = min(suffix_min[i + 1], pref_sum[i]);
  }
  while (q--) {
    int l, r;
    cin >> l >> r;
    int maxL, minL;
    int maxR, minR;
    int sum;
    maxL = pref_max[l - 1];
    minL = pref_min[l - 1];

    sum = pref_sum[r] - pref_sum[l - 1];

    maxR = suffix_max[r + 1];
    minR = suffix_min[r + 1];
    if (r < n) {
      maxR -= sum;
      minR -= sum;
    }
    int maxOverAll = max(maxL, maxR);
    int minOverAll = min(minL, minR);
    int ans = maxOverAll - minOverAll + 1;
    cout << ans << '\n';
  }

}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int tc;
  cin >> tc;
  while (tc--) {
    solve();
  }
}
