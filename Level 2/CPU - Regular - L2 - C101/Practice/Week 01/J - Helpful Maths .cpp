#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  string s;
  cin >> s;
  string res = "";
  for (char ch: s) {
    if (ch != '+') {
      res += ch;
    }
  }
  sort(res.begin(), res.end());
  cout << res[0];
  for (int i = 1; i < res.size(); ++i) {
    cout << '+' << res[i];
  }
}

