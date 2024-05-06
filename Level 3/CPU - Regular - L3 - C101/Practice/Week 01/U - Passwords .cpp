
#include <bits/stdc++.h>

using namespace std;
int n;
vector<string> given_strings;
vector<string> cur_pass;
string key;


void solve(int i = 0) {
  if (i == key.size()) {

    for (string &str: cur_pass)
      cout << str;
    cout << '\n';

    return;
  }

  if (key[i] == '#') {

    for (string &str: given_strings) {
      cur_pass.push_back(str);
      solve(i + 1);
      cur_pass.pop_back();
    }


  } else {

    for (int digit = 0; digit <= 9; ++digit) {
      cur_pass.push_back(to_string(digit));
      solve(i + 1);
      cur_pass.pop_back();
    }

  }

}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr), cout.tie(nullptr);
  while (cin >> n) {
    given_strings = vector<string>(n);
    for (string &str: given_strings) {
      cin >> str;
    }
    int q;
    cin >> q;
    while (q--) {
      cout << "--\n";
      cin >> key;
      solve();

    }

  }

}
