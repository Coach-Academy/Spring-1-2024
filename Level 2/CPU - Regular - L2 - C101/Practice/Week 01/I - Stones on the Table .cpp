#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  char cur, prv = -1;
  int res = 0;
  for (int i = 0; i < n; ++i) {
    cin >> cur;
    if (cur == prv) {
      ++res;
    }
    prv = cur;
  }
  cout << res;
}

