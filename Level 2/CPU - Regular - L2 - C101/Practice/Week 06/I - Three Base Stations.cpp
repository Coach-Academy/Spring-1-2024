#include <bits/stdc++.h>

using namespace std;
#define int long long

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  int arr[n];
  for (int &x: arr) cin >> x;
  sort(arr, arr + n);
  auto ok = [&](double d) -> bool {
    int cnt = 1, lst = 0;
    for (int i = 1; i < n; ++i) {
      if ((arr[i] - arr[lst]) > 2 * d) {
        ++cnt;
        lst = i;
      }
    }
    if (cnt > 3) {
      return false;
    } else {
      return true;
    }
  };
  double s = 0, e = 1e9, md, ans;
  const int T = 100;
  for (int i = 0; i < T; ++i) {
    md = (e + s) / 2;
    if (ok(md)) {
      ans = md;
      e = md;
    } else {
      s = md;
    }
  }
  int lst = 0;
  vector<double> pos = {arr[0] + ans};
  for (int i = 1; i < n; ++i) {
    if ((arr[i] - arr[lst]) > 2 * ans) {
      pos.emplace_back(arr[i] + ans);
      lst = i;
    }
  }
  while (pos.size() < 3)
    pos.emplace_back(pos.back());


  cout << fixed << setprecision(6);
  cout << ans << '\n';
  for (auto &x: pos) {
    cout << x << ' ';
  }

}

