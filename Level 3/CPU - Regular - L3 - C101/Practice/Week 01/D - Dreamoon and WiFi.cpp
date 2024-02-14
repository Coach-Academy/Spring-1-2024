#include <bits/stdc++.h>

#define ll long long
using namespace std;


int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  string s1, s2;
  cin >> s1 >> s2;
  int q = 0, p = 0, m = 0;
  for (char ch: s1) {
    if (ch == '+')++p;
    else ++m;
  }
  for (char &ch: s2) {
    if (ch == '+')--p;
    else if (ch == '-')--m;
    else ++q;
  }
  const int N = 1 << q;
  int cnt = 0;
  for (int msk = 0; msk < N; ++msk) {
    int x = 0, y = 0;
    for (int i = 0; i < q; ++i) {
      if (msk >> i & 1) ++x;
      else ++y;
    }
    if (m == x && p == y) {
      ++cnt;
    }
  }
  cout << fixed << setprecision(12) << cnt * 1.0 / N;
}
