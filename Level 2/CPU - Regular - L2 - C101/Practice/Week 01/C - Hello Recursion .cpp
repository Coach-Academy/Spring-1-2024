#include <bits/stdc++.h>

using namespace std;

int sum(int i, const vector<int> &arr) {
  if (i == arr.size()) {
    return 0;
  }
  return arr[i] + sum(i + 1, arr);
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int tc;
  cin >> tc;
  for (int i = 1; i <= tc; ++i) {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int &x: arr) {
      cin >> x;
    }
    cout << "Case " << i << ": " << sum(0, arr) << '\n';
  }
}
