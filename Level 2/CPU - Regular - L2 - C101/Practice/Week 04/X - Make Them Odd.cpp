#include <bits/stdc++.h>

using namespace std;
#define ll long long

void solve() {
  int n;
  cin >> n;
  set<int> st;
  for (int i = 0, x; i < n; ++i) {
    cin >> x;
    if (x % 2 == 0) {
      st.insert(x);
    }
  }
  int cnt = 0;
  while (not st.empty()) {
    int mx = *(--st.end());
    st.erase(prev(st.end()));
    mx /= 2;
    ++cnt;
    if (mx % 2 == 0) {
      st.insert(mx);
    }
  }
  cout << cnt << '\n';
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
