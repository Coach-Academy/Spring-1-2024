#include <bits/stdc++.h>

using namespace std;

int solve(int n, int m) {
  if (n == m)return 0;
  if (n > m)return 50;
  int res = 1 + min(
      solve(n * 2, m),
      solve(n * 3, m)
  );
  return res;
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, m;
  cin >> n >> m;
  int res = solve(n, m);
  if (res > 40) {
    res = -1;
  }
  cout << res;

}
