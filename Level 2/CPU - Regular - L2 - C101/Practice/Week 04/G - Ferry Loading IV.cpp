
#include<bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int l, n;
    cin >> l >> n;
    l *= 100;
    queue<int> q[2];
    string s;
    for (int i = 0, x; i < n; ++i) {
      cin >> x >> s;
      if (s[0] == 'l') {
        q[0].emplace(x);
      } else {
        q[1].emplace(x);
      }
    }
    int cur = 0, res{};
    while (q[0].size() or q[1].size()) {
      ++res;
      int sum{};
      while (q[cur].size() && sum + q[cur].front() <= l) {
        sum += q[cur].front();
        q[cur].pop();
      }
      cur ^= 1;
    }
    cout << res << '\n';
  }
}
