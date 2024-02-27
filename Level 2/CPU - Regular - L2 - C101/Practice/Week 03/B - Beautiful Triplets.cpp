#include <bits/stdc++.h>

using namespace std;
#define ll long long
const int N = 2e5 + 5;
int after[N], before[N];

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, d;
  cin >> n >> d;
  vector<int> arr(n);
  for (int &x: arr) {
    cin >> x, ++after[x];
  }
  int res{};
  for (int i = 0; i < n; ++i) {
    after[arr[i]]--;
    int l = arr[i] - d;
    int r = arr[i] + d;
    if (l >= 0 && before[l] > 0 && after[r] > 0) {
      res += after[r] * before[l];
    }
    before[arr[i]]++;
  }
  cout << res;
}
