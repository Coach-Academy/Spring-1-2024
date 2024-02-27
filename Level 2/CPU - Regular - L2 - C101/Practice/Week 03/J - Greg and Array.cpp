#include <bits/stdc++.h>

using namespace std;
#define ll long long
const int N = 200'002;

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m, k;
  cin >> n >> m >> k;
  vector<int> arr(n + 1);
  for (int i = 1; i <= n; ++i) {
    cin >> arr[i];
  }
  vector<array<ll, 3>> Q(m);
  for (auto &[l, r, d]: Q) {
    cin >> l >> r >> d;
  }
  vector<int> frq(m + 1);
  for (int i = 0, l, r; i < k; ++i) {
    cin >> l >> r;
    --l, --r;
    frq[l] += 1;
    frq[r + 1] -= 1;
  }
  partial_sum(frq.begin(), frq.end(), frq.begin());
  for (int i = 0; i < m; ++i) {
    Q[i][2] *= frq[i];
  }
  vector<ll> upd(n + 2);
  for (auto &[l, r, d]: Q) {
    upd[l] += d;
    upd[r + 1] -= d;
  }
  partial_sum(upd.begin(), upd.end(), upd.begin());
  for (int i = 1; i <= n; ++i) {
    cout << arr[i] + upd[i] << ' ';
  }
}
