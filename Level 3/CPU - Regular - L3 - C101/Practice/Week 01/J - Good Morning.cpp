#include <bits/stdc++.h>

using namespace std;
#define ll long long

vector<int> grid[] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9},
    {0, 0, 0}
};
set<int> st;

bool valid(int x, int y) {
  return (x <= 2 && y <= 2) || (x == 3 && y == 1);
}

void solve(int num, int x, int y) {
  if (num >= 300 || !valid(x, y))
    return;
  st.insert(num);
  if (num == 0 && x == 3)return;
  solve(num, x + 1, y);
  solve(num, x, y + 1);
  solve(num * 10 + grid[x][y], x, y);
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve(0, 0, 0);
  int tc;
  cin >> tc;
  while (tc--) {
    int k;
    cin >> k;
    int res = 1e9;
    for (int x: st) {
      if (abs(k - res) > abs(k - x)) {
        res = x;
      }
    }
    cout << res << '\n';
  }
}
