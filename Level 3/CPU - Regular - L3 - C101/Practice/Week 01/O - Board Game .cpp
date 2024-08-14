#include <bits/stdc++.h>

using namespace std;
#define ll long long
const int M = 34;
int grid[4][4];
bool vis[17];
int frq_r[4], frq_c[4];
int sum_r[4], sum_c[4];
vector<pair<int, int>> pos;

bool isValid() {
  for (int k = 0; k < 4; ++k) {
    if (frq_r[k] == 0 && sum_r[k] != M)
      return false;

    if (frq_c[k] == 0 && sum_c[k] != M)
      return false;

    if (sum_r[k] > M)
      return false;

    if (sum_c[k] > M)
      return false;
  }
  return true;
}

bool solve(int idx) {

  if (!isValid())return false;

  if (idx == pos.size()) {
    return true;
  }

  auto [i, j] = pos[idx];
  for (int val = 1; val <= 16; ++val) {
    if (vis[val])continue;

    grid[i][j] = val;
    vis[val] = true;
    frq_r[i]--;
    sum_r[i] += val;
    frq_c[j]--;
    sum_c[j] += val;

    if (solve(idx + 1)) {
      return true;
    }

    grid[i][j] = -1;
    vis[val] = false;
    frq_r[i]++;
    sum_r[i] -= val;
    frq_c[j]++;
    sum_c[j] -= val;

  }
  return false;
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  for (int tc = 1; tc <= t; ++tc) {
    for (int i = 0; i < 4; ++i) {
      for (int j = 0; j < 4; ++j) {
        cin >> grid[i][j];
        int v = grid[i][j];
        if (v == -1) {
          pos.emplace_back(i, j);
          frq_r[i]++;
          frq_c[j]++;
        } else {
          vis[v] = true;
          sum_c[j] += v;
          sum_r[i] += v;
        }
      }
    }
    solve(0);
    cout << "Case " << tc << ":\n";
    for (int i = 0; i < 4; ++i) {
      for (int j = 0; j < 4; ++j) {
        cout << grid[i][j] << " \n"[j == 3];
      }
    }
    memset(vis, 0, sizeof vis);
    memset(frq_c, 0, sizeof frq_c);
    memset(frq_r, 0, sizeof frq_r);
    memset(sum_r, 0, sizeof sum_r);
    memset(sum_c, 0, sizeof sum_c);
    pos.clear();
  }
}
