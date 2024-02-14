
#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> all_valid_pos;
const int N = 16;
vector<int> cur_pos;
bool vis_row[N], vis_d1[N], vis_d2[N];

void solve(int col_num) {

  if (col_num == 9) {
    all_valid_pos.push_back(cur_pos);
    return;
  }

  for (int r_num = 1; r_num <= 8; ++r_num) {

    int d1 = r_num + col_num;
    int d2 = r_num - col_num + 8;
    if (vis_row[r_num] || vis_d1[d1] || vis_d2[d2]) {
      continue;
    }

    vis_row[r_num] = true;
    vis_d1[d1] = true;
    vis_d2[d2] = true;
    cur_pos.push_back(r_num);

    solve(col_num + 1);

    vis_row[r_num] = false;
    vis_d1[d1] = false;
    vis_d2[d2] = false;
    cur_pos.pop_back();

  }


}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr), cout.tie(nullptr);
  solve(1);
  int row[8];
  int tc = 1;
  while (cin >> row[0]) {
    for (int i = 1; i < 8; ++i) {
      cin >> row[i];
    }
    int over_all_best = 10;

    for (auto &cur_valid_pos: all_valid_pos) {
      int cur_moves = 0;
      for (int i = 0; i < 8; ++i)
        if (cur_valid_pos[i] != row[i])
          cur_moves++;
      over_all_best = min(over_all_best, cur_moves);
    }
    cout << "Case " << tc++ << ": " << over_all_best << '\n';
  }


}
