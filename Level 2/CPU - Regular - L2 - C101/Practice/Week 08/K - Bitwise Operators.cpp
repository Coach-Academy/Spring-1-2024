#include <bits/stdc++.h>

using namespace std;
#define ll long long

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int tc;
  cin >> tc;
  while (tc--) {
    int n;
    cin >> n;
    int a = 1;
    while (~n & a) {
      a <<= 1;
    }
    int b = n ^ a;
    if (b) {
      cout << a << ' ' << b << '\n';
    } else {
      cout << "-1\n";
    }
  }

}

