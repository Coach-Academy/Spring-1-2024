#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
//  freopen("output.txt", "w", stdout);
  string line;
  set<string> st;
  while (getline(cin, line)) {
    string cur;
    line += '.';
    for (char ch: line) {
      if (isalpha(ch)) {
        ch = tolower(ch);
        cur.push_back(ch);
      } else if (cur.size()) {
        st.insert(cur);
        cur.clear();
      }
    }
  }
  for (auto s: st) {
    cout << s << '\n';
  }
}
