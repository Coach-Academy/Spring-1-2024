#include <bits/stdc++.h>

using namespace std;

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr), cout.tie(nullptr);
  string s;
  getline(cin, s);
  set<char> st(s.begin() + 1, prev(s.end()));
  st.erase(' ');
  st.erase(',');
  cout << st.size();
}
