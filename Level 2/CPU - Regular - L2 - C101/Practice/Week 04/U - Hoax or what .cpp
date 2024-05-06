#include <bits/stdc++.h>

using namespace std;
#define ll long long

void solve(int n) {
  multiset<int> st;
  ll res{};
  for (int i = 0, k, x; i < n; ++i) {
    cin >> k;
    for (int j = 0; j < k; ++j) {
      cin >> x;
      st.insert(x);
    }
    int mn = *st.begin();
    int mx = *(--st.end());
    res += mx - mn;
    st.erase(st.begin());
    st.erase(prev(st.end()));
  }
  cout << res << '\n';
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n;
  while (cin >> n, n) {
    solve(n);
  }
}
