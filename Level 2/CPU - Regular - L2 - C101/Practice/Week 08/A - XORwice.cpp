#include <bits/stdc++.h>

using namespace std;
#define ll long long

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int tc;
  cin >> tc;
  while (tc--) {
    int a, b;
    cin >> a >> b;
    int x = a & b;
    cout << (a ^ x) + (b ^ x) << '\n';
//    cout << (a ^ b) << '\n';
  }

}

