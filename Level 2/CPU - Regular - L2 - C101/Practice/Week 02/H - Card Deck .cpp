#include<bits/stdc++.h>

using namespace std;
#define ll long long

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  map<int, int> mp;
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
    mp[a[i]] = i;
  }
  while (mp.size()) {
    auto [val, i] = *mp.rbegin();
    for (int j = i; j < n; ++j) {
      cout << a[j] << " ";
      mp.erase(a[j]);
    }
    n = i;
  }
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int tc;
  cin >> tc;
  while (tc--) {
    solve();
    cout << '\n';
  }
}
