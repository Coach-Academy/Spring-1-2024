#include <bits/stdc++.h>

using namespace std;
#define int long long
int n, T;
int a[25];
vector<int> path, best;
int max_sum;

void solve(int i, int sum) {
  if (sum > T)return;
  if (i == n) {
    if (sum > max_sum) {
      max_sum = sum;
      best = path;
    } 
    return;
  }

  path.emplace_back(a[i]);
  solve(i + 1, sum + a[i]);
  path.pop_back();

  solve(i + 1, sum);

}

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  while (cin >> T >> n) {
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
    }
    max_sum = 0;
    solve(0, 0);
    for (int x: best) cout << x << ' ';
    cout << "sum:" << max_sum << '\n';
  }
}

