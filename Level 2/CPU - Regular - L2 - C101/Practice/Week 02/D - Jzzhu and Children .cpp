
#include <bits/stdc++.h>

using namespace std;

int32_t main() {
  int n, m;
  cin >> n >> m;
  deque<pair<int, int>> q;
  for (int i = 1, x; i <= n; ++i) {
    cin >> x;
    q.emplace_back(x, i);
  }
  while (q.size() > 1) {
    auto [val, i] = q.front();
    q.pop_front();
    if (val > m) {
      val -= m;
      q.emplace_back(val, i);
    }
  }
  auto [val, i] = q.front();
  cout << i;
}
