#include <bits/stdc++.h>

using namespace std;
const int N = 1e5 + 5, inf = 1e9 + 5;
int a[N], p[N], x[N];
int n;

int solve(int i) {
  if (i == n)return inf;
  int cur;
  if (a[i] < x[i]) {
    cur = p[i];
  } else {
    cur = inf;
  }
  return min(cur, solve(i + 1));
}


int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr), cout.tie(nullptr);
  cin >> n;
  for (int i = 0; i < n; ++i) {
    cin >> a[i] >> p[i] >> x[i];
  }
  int ans = solve(0);
  if (ans == inf)ans = -1;
  cout << ans;
}

