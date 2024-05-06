
#include <bits/stdc++.h>

using namespace std;

bool is_prime[40];

void pre() {
  for (int num = 2; num <= 31; ++num) {
    is_prime[num] = true;
    for (int p = 2; p < num; ++p) {
      if (num % p == 0) {
        is_prime[num] = false;
        break;
      }
    }
  }
}

int n;
vector<vector<int>> all_valid_pos;
vector<int> cur_pos;
bool vis[17];

void solve() {
  if (cur_pos.size() == n) {
    if (is_prime[cur_pos.back() + 1]) {
      all_valid_pos.push_back(cur_pos);
    }
    return;
  }

  for (int i = 2; i <= n; ++i) {
    if (vis[i])continue;
    if (!is_prime[cur_pos.back() + i])continue;

    vis[i] = true;
    cur_pos.push_back(i);

    solve();

    vis[i] = false;
    cur_pos.pop_back();


  }


}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr), cout.tie(nullptr);

  pre();

  int tc = 1;
  cur_pos.push_back(1);
  while (cin >> n) {
    if (tc > 1)cout << "\n";
    all_valid_pos.clear();
    solve();
    cout << "Case " << tc++ << ":\n";
    for (auto &valid_pos: all_valid_pos) {
      for (int i = 0; i < n; ++i) {
        cout << valid_pos[i] << " \n"[i + 1 == n];
      }
    }
  }

}
