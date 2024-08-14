#include <bits/stdc++.h>

using namespace std;
#define int long long
int n, T;
int a[25];

bool solve(int i, int sum) {
  if (sum == T)return true;
  if (sum > T or i == n)return false;
  return solve(i + 1, sum) or solve(i + 1, sum + a[i]);
}

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    cin >> T >> n;
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
    }
    cout << (solve(0, 0) ? "YES\n" : "NO\n");
  }
}

