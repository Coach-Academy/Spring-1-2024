#include <bits/stdc++.h>

using namespace std;
#define ll long long

int encode(char c) {
  if (c == '{')return 1;
  if (c == '}')return -1;

  if (c == '(')return 2;
  if (c == ')')return -2;

  if (c == '[')return 3;
  if (c == ']')return -3;
  
  return 0;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    stack<int> stk;
    bool isValid = true;
    for (char ch: s) {
      int code = encode(ch);
      if (code > 0) {
        stk.push(code);
      } else if (stk.size() && stk.top() == -code) {
        stk.pop();
      } else {
        isValid = false;
        break;
      }
    }
    if (!stk.empty()) {
      isValid = false;
    }
    cout << (isValid ? "YES" : "NO") << '\n';
  }
}
