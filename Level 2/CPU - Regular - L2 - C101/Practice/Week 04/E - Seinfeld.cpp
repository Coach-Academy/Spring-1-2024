#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  string s;
  int tc = 1;
  while (cin >> s, s[0] != '-') {
    cout << tc++ << ". ";
    int cnt{}, res{};
    for (char ch: s) {
      if (ch == '{') {
        cnt++;
      } else {
        if (cnt > 0) {
          --cnt;
        } else {
          ++res, ++cnt;
        }
      }
    }
    res += cnt / 2;
    cout << res << '\n';
  }

}
