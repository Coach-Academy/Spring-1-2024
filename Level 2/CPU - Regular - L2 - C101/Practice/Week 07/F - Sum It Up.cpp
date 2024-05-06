#include <bits/stdc++.h>

using namespace std;
#define int long long
int n, T;
int a[25];
vector<int> path;
bool valid;

void solve(int i, int sum, int lst = -1) {
  if (sum > T)return;
  if (i == n) {
    if (sum != T)return;
    valid = true;
    cout << path[0];
    for (int j = 1; j < path.size(); ++j) {
      cout << "+" << path[j];
    }
    cout << '\n';
    return;
  }
  if (lst != a[i]) {
    path.emplace_back(a[i]);
    solve(i + 1, sum + a[i], -1);
    path.pop_back();
  }
  solve(i + 1, sum, a[i]);
}

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  while (cin >> T >> n, n > 0) {
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
    }
    sort(a, a + n, greater<int>());
    cout << "Sums of " << T << ":\n";
    solve(0, 0);
    if (!valid) {
      cout << "NONE\n";
    }
    valid = false;
  }
}

