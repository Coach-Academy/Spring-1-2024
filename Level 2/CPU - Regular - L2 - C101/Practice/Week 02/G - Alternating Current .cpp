
#include <bits/stdc++.h>

using namespace std;


signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr), cout.tie(nullptr);
  string s;
  cin >> s;
  stack<char> stk;
  for (char ch: s) {
    if (stk.empty() || stk.top() != ch) {
      stk.push(ch);
    } else {
      stk.pop();
    }
  }
  cout << (stk.empty() ? "Yes" : "No");
}
