#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  string s;
  cin >> s;
  bool valid = true;
  for (int i = 0; i < s.size(); ++i) {
    if (i % 2 == 0) {
      if (!islower(s[i]))
        valid = false;
    } else {
      if (!isupper(s[i]))
        valid = false;
    }
  }
  cout << (valid ? "Yes" : "No");
}

