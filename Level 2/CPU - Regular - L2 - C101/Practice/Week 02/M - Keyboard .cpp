#include <bits/stdc++.h>

using namespace std;

const vector<string> arr = {
    {"qwertyuiop"},
    {"asdfghjkl;"},
    {"zxcvbnm,./"}
};

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr), cout.tie(nullptr);

  char dir;
  string s;
  cin >> dir >> s;
  int d = 0;
  if (dir == 'L') {
    d = 1;
  } else {
    d = -1;
  }
  for (char &ch: s) {
    for (auto &v: arr) {
      for (int i = 0; i < v.size(); ++i) {
        if (v[i] == ch) {
          ch = v[i + d];
          break;
        }
      }
    }
  }
  cout << s;

}
