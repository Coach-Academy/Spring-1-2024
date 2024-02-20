
#include <bits/stdc++.h>

using namespace std;

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr), cout.tie(nullptr);
  int n;
  cin >> n;
  int arr[n];
  for (int &x: arr) cin >> x;
  long long h = 0;
  int res = 0;
  priority_queue<int, vector<int>, greater<>> pq;
  for (int i = 0; i < n; ++i) {
    ++res;
    h += arr[i];
    if (arr[i] < 0) {
      pq.push(arr[i]);
    }
    while (h < 0) {
      h -= pq.top();
      pq.pop();
      --res;
    }
  }
  cout << res;


}
