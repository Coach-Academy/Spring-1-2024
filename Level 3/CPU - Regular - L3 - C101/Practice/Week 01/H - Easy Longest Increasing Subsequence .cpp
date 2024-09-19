#include <bits/stdc++.h>

using namespace std;
#define ll long long
int arr[30];
int n;

int solve(int cur, int lst) {
  if (cur > n) {
    return 0;
  }
  int res = solve(cur + 1, lst); /// leave

  if (arr[cur] > arr[lst]) { /// pick
    res = max(res, 1 + solve(cur + 1, cur));
  }
  return res;
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin >> n;
  for (int i = 1; i <= n; ++i) {
    cin >> arr[i];
  }
  cout << solve(1, 0);
}
