
#include <bits/stdc++.h>

using namespace std;

int32_t main() {
  int n;
  cin >> n;
  int a[n];
  for (int &x: a) {
    cin >> x;
  }
  vector<int> res;
  for (int i = 1; i < n; ++i) {
    if (a[i] == 1) {
      res.push_back(a[i - 1]);
    }
  }
  res.push_back(a[n - 1]);
  cout << res.size() << '\n';
  for (int &x: res)
    cout << x << ' ';
}
