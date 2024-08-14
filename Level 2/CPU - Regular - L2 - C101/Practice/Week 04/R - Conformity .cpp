#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
//  freopen("output.txt", "w", stdout);
  int n;
  while (cin >> n, n) {
    map<array<int, 5>, int> mp;
    int mx = 0;
    for (int i = 0; i < n; ++i) {
      array<int, 5> c{};
      for (int &x: c) {
        cin >> x;
      }
      sort(c.begin(), c.end());
      mx = max(++mp[c], mx);
    }
    int res{};
    for (auto &[_, v]: mp) {
      if (v == mx)
        res += v;
    }
    cout << res << '\n';
  }
}
