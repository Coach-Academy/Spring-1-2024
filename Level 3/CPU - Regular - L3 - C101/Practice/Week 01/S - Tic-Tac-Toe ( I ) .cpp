#include <bits/stdc++.h>

using namespace std;
#define ll long long

set<string> all;

vector<string> grid(3, "...");

bool isEnd() {
  for (int i = 0; i < 3; ++i) {
    if (grid[i] == "XXX" || grid[i] == "OOO")
      return true;
  }
  for (int j = 0; j < 3; ++j) {
    if (grid[0][j] != '.' && grid[0][j] == grid[1][j] && grid[1][j] == grid[2][j])
      return true;
  }
  if (grid[1][1] == '.')return false;
  if (grid[0][0] == grid[1][1] && grid[1][1] == grid[2][2])return true;
  if (grid[0][2] == grid[1][1] && grid[1][1] == grid[2][0])return true;
  return false;
}

void solve(int cnt = 1) {
  all.insert(grid[0] + grid[1] + grid[2]);
  if (cnt == 10 || isEnd()) {
    return;
  }
  for (int i = 0; i < 3; ++i) {
    for (int j = 0; j < 3; ++j) {
      if (grid[i][j] != '.')continue;
      grid[i][j] = (cnt & 1) ? 'X' : 'O';
      solve(cnt + 1);
      grid[i][j] = '.';
    }
  }
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
  int q;
  cin >> q;
  while (q--) {
    string g, s;
    for (int i = 0; i < 3; ++i) {
      cin >> s;
      g += s;
    }
    cout << (all.count(g) ? "yes" : "no") << '\n';
  }
}
