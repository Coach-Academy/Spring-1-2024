#include <bits/stdc++.h>

using namespace std;

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr), cout.tie(nullptr);
  string s;
  cin >> s;
  set<char> st;
  for (char ch: s) {
    st.insert(ch);
  }
  if ((st.size()) % 2 == 0) {
    cout << "CHAT WITH HER!";
  } else {
    cout << "IGNORE HIM!";
  }
}
