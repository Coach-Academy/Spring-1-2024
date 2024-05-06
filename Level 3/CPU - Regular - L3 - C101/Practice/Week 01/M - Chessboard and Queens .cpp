#include <bits/stdc++.h>

using namespace std;
const int N = 8;
set<int> col, d1, d2;
char grid[N][N];

bool valid(int i, int j) {
  return !(col.count(j) || d1.count(i + j) || d2.count(i - j));
}

int solve(int i) {
  if (i == N)return 1;
  int res = 0;
  for (int j = 0; j < N; ++j) {
    if (!valid(i, j))continue;
    if (grid[i][j] == '*')continue;

    col.emplace(j);
    d1.emplace(i + j);
    d2.emplace(i - j);

    res += solve(i + 1);

    col.erase(j);
    d1.erase(i + j);
    d2.erase(i - j);

  }
  return res;
}


int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  for (auto a: grid)
    cin >> a;
  cout << solve(0);
}
