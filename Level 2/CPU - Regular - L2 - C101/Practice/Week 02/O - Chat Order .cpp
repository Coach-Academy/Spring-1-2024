#include<bits/stdc++.h>

using namespace std;
#define ll long long

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  stack<string> stk;
  for (int i = 0; i < n; ++i) {
    string s;
    cin >> s;
    stk.push(s);
  }
  set<string> st;
  while (!stk.empty()) {
    auto cur = stk.top();
    stk.pop();
    if (st.count(cur) == 0) {
      cout << cur << '\n';
      st.insert(cur);
    }
  }

}
