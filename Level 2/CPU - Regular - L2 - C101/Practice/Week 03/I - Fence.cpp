#include <bits/stdc++.h>

using namespace std;
#define ll long long
const int N = 200'002;

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, k;
  cin >> n >> k;
  vector<int> arr(n + 1);
  for (int i = 1; i <= n; ++i) {
    cin >> arr[i];
    arr[i] += arr[i - 1];
  }
  int l = 0, r = k;
  int mn = 1e9, i = 1;
  while (r <= n) {
    int cur = arr[r] - arr[l];
    if (cur < mn) {
      mn = cur, i = l + 1;
    }
    ++l, ++r;
  }
  cout << i;
}
