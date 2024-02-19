
#include <bits/stdc++.h>

using namespace std;


signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr), cout.tie(nullptr);
  int Q;
  cin >> Q;
  int ty;

  stack<string> st;
  st.push("");
  for (int i = 0; i < Q; ++i) {
    cin >> ty;
    string cur = st.top();
    if (ty == 1) {
      string w;
      cin >> w;
      cur += w;
      st.push(cur);
    } else if (ty == 2) {
      int k;
      cin >> k;
      while (k--)cur.pop_back();
      st.push(cur);
    } else if (ty == 3) {
      int k;
      cin >> k;
      cout << cur[k - 1] << '\n';
    } else {
      st.pop();
    }
  }

}
