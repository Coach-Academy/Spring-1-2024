#include <bits/stdc++.h>

using namespace std;
#define int long long
const int N = 100 + 5;
char mem[2][2][N][N];
string ans[] = {"Alice", "Bob"};

/// 0 -> alice
/// 1 - > bob
char dp(int o, int e, bool who, int sum) {
  if (!e and !o)
    return sum; /// win
  char &res = mem[who][sum][o][e];
  if (~res)return res;
  if (!o) {
    return res = dp(o, e - 1, !who, sum);
  }
  if (e > 0 and dp(o, e - 1, !who, sum) == who) {
    return res = who;
  }
  return res = dp(o - 1, e, !who, sum ^ (!who));
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int tc;
  cin >> tc;
  while (tc--) {
    memset(mem, -1, sizeof mem);
    int n;
    cin >> n;
    int o = 0, e = 0;
    for (int i = 0, x; i < n; ++i) {
      cin >> x, x = abs(x);
      if (x & 1)++o;
      else ++e;
    }
    cout << ans[dp(o, e, 0, 0)] << '\n';
  }
}
