#include <bits/stdc++.h>

using namespace std;

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr), cout.tie(nullptr);
  int n;
  cin >> n;
  map<string, int> mp;
  for (int i = 0; i < n; ++i) {
    string s;
    cin >> s;
    if (mp.count(s) != 0) {
      cout << s << mp[s] << '\n';
    } else {
      cout << "OK\n";
    }
    ++mp[s];
  }
}
