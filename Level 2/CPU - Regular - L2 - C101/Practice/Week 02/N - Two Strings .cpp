#include <bits/stdc++.h>

using namespace std;

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr), cout.tie(nullptr);
  int p;
  cin >> p;
  for (int i = 0; i < p; ++i) {
    string s1, s2;
    cin >> s1 >> s2;
    set<char> st(s1.begin(), s1.end());
    bool yes = false;
    for (char ch: s2) {
      if (st.find(ch) != st.end()) {
        yes = true;
        break;
      }
    }
    if (yes) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }
}
