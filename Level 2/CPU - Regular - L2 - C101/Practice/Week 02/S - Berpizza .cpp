#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int q;
  cin >> q;
  int t;
  set<pair<int, int>> id, mo;
  int cnt = 0;
  while (q--) {
    cin >> t;
    if (t == 1) {
      int m;
      cin >> m;
      ++cnt;
      id.emplace(cnt, -m);
      mo.emplace(-m, cnt);
    } else if (t == 2) {
      auto [i, m] = *id.begin();
      cout << i << ' ';
      id.erase(id.begin());
      mo.erase({m, i});
    } else {
      auto [m, i] = *mo.begin();
      cout << i << ' ';
      mo.erase(mo.begin());
      id.erase({i, m});
    }
  }
}
