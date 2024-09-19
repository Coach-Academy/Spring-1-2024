#include <bits/stdc++.h>

using namespace std;
#define ll long long

void solve() {
  int n;
  cin >> n;
  queue<int> q;
  set<int> st;
  int mx = 1;
  for (int i = 0, x; i < n; ++i) {
    cin >> x;
    while (st.count(x)) {
      int val = q.front();
      q.pop();
      st.erase(val);
    }
    q.push(x);
    st.insert(x);
    mx = max(mx, (int) q.size());
  }
  cout << mx << '\n';
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
