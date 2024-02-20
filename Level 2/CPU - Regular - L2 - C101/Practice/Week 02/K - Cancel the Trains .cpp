#include <bits/stdc++.h>

using namespace std;

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr), cout.tie(nullptr);
  int tc;
  cin >> tc;
  while (tc--) {
    int n, m;
    cin >> n >> m;
    set<int> st;
    int res{};
    for (int i = 0, x; i < n + m; ++i) {
      cin >> x;
      res += st.count(x);
      st.insert(x);
    }
    cout << res << '\n';
  }
}
