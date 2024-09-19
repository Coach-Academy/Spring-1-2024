
#include<bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  string s;
  cin >> s;
  int cnt{}, res = 0;
  for (char c: s) {
    if (c == '(') {
      ++cnt;
    } else if (cnt > 0) {
      res += 2, --cnt;
    }
  }
  cout << res;
}
