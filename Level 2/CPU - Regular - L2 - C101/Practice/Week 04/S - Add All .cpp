#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
//  freopen("output.txt", "w", stdout);
  int n;
  while (cin >> n, n) {
    multiset<ll> st;
    for (int i = 0, x; i < n; ++i) {
      cin >> x;
      st.insert(x);
    }
    ll tot = 0;
    while (st.size() > 1) {
      ll mn1 = *st.begin();
      ll mn2 = *(++st.begin());
      st.erase(st.begin());
      st.erase(st.begin());
      st.insert(mn1 + mn2);
      tot += mn1 + mn2;
    }
    cout << tot << '\n';
  }
}
