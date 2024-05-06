
#include<bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  vector<int> arr(m + 2);
  for (int i = 0, l, r; i < n; ++i) {
    cin >> l >> r;
    arr[l] += 1;
    arr[r + 1] -= 1;
  }
  partial_sum(arr.begin(), arr.end(), arr.begin());
  vector<int> res;
  for (int i = 1; i <= m; ++i) {
    if (!arr[i]) {
      res.emplace_back(i);
    }
  }
  cout << res.size() << '\n';
  for (int &x: res) {
    cout << x << ' ';
  }
}
