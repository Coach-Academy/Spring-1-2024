#include <bits/stdc++.h>

using namespace std;
#define ll long long
string str_r, str_c;
vector<vector<char>> grid;
int n;


bool valid(int end) {
  for (int i = 0; i < n; ++i) {
    int a = 0, b = 0, c = 0, f = 0;
    for (char ch: grid[i]) {
      if (ch == '.')continue;
      if (!f && ch != str_r[i])return false;
      f = 1;
      if (ch == 'A') ++a;
      else if (ch == 'B')++b;
      else ++c;
    }
    if (a > 1 || b > 1 || c > 1)return false;
    if (end and (a != 1 or b != 1 or c != 1))return false;
  }
  for (int i = 0; i < n; ++i) {
    int a = 0, b = 0, c = 0, f = 0;
    for (int j = 0; j < n; ++j) {
      char ch = grid[j][i];
      if (ch == '.')continue;
      if (!f && ch != str_c[i])return false;
      f = 1;
      if (ch == 'A') ++a;
      else if (ch == 'B')++b;
      else ++c;
    }
    if (a > 1 || b > 1 || c > 1)return false;
    if (end and (a != 1 or b != 1 or c != 1))
      return false;
  }
  return true;
}


void solve(int i, int j) {

  if (!valid(i == n)) {
    return;
  }

  if (j == n) {
    solve(i + 1, 0);
    return;
  }

  if (i == n) {
    cout << "Yes\n";
    for (int k = 0; k < n; ++k) {
      for (int l = 0; l < n; ++l) {
        cout << grid[k][l];
      }
      cout << '\n';
    }
    exit(0);
  }
  const string T = "ABC";
  for (char ch: T) {
    grid[i][j] = ch;
    solve(i, j + 1);
  }

  /// option 4: '.'
  grid[i][j] = '.';
  solve(i, j + 1);

}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin >> n >> str_r >> str_c;
  grid.assign(n, vector<char>(n, '.'));
  solve(0, 0);
  cout << "No";

}
