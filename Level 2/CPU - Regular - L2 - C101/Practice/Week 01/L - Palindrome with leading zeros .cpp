#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  string n;
  cin >> n;
  while (n.size() && n.back() == '0') {
    n.pop_back();
  }
  int l = 0, r = ((int) n.size()) - 1;
  while (l < r) {
    if (n[l] != n[r]) {
      cout << "No";
      return 0;
    }
    ++l, --r;
  }
  cout << "Yes";


}

