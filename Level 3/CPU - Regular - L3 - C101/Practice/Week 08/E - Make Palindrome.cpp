#include <bits/stdc++.h>

using namespace std;
#define int long long
const int N = 1e3 + 5;
string s;
int mem[N][N];
int vis[N][N], tc;

int dp(int l, int r) {
  if (r <= l) {
    return 0;
  }
  int &res = mem[l][r];
  if (vis[l][r] == tc) return res;
  vis[l][r] = tc;
  if (s[l] == s[r]) {
    return res = dp(l + 1, r - 1);
  }
  int op1 = dp(l + 1, r) + 1;
  int op2 = dp(l, r - 1) + 1;
  res = min(op1, op2);
  return res;
}

string out;

void print(int l, int r) {
  if (l == r) {
    out += s[l];
    return;
  }
  if (r < l) {
    return;
  }
  if (s[l] == s[r]) {
    out += s[l];
    print(l + 1, r - 1);
    out += s[l];
  } else {
    int opt = dp(l, r);
    int op1 = dp(l + 1, r) + 1;
    if (op1 == opt) {
      out += s[l];
      print(l + 1, r);
      out += s[l];
    } else {
      out += s[r];
      print(l, r - 1);
      out += s[r];
    }
  }
}


int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  while (cin >> s) {
    ++tc, out.clear();
    print(0, s.size() - 1);
    cout << dp(0, s.size() - 1) << ' ' << out << '\n';
  }
}
