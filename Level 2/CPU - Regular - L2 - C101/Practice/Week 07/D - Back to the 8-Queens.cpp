#include <bits/stdc++.h>

using namespace std;
#define int long long
const int n = 8;
int a[n];
bool vis_row[n], vis_col[n], d1[n * n], d2[n * n];

bool valid(int x, int y) {
  if (vis_row[x] or vis_col[y] or d1[x - y + n] or d2[x + y]) {
    return false;
  }
  return true;
}

void update(int x, int y, bool v) {
  vis_row[x] = v;
  vis_col[y] = v;
  d1[x - y + n] = v;
  d2[x + y] = v;
}

int solve(int c) {
  if (c == n) {
    return 0;
  }
  int res = 10;
  for (int i = 0; i < n; ++i) {
    if (valid(i, c)) {
      int extra = (a[c] != i);
      update(i, c, true);
      res = min(res, solve(c + 1) + extra);
      update(i, c, false);
    }
  }
  return res;
}

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int TC = 1;
  while (cin >> a[0]) {
    a[0]--;
    for (int i = 1; i < 8; ++i) {
      cin >> a[i], a[i]--;
    }
    cout << "Case " << TC++ << ": " << solve(0) << '\n';
  }
}

