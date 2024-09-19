#include <bits/stdc++.h>

using namespace std;
#define ll long long
const int N = 2e5 + 5;
int frq[N];

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  string s;
  cin >> s;
  const int n = s.size();
  s += s.back();
  vector<int> prefix(n + 5);
  for (int i = 0; i < n; ++i) {
    prefix[i + 1] = prefix[i] + (s[i] == s[i + 1]);
  }
  int l, r, q;
  cin >> q;
  while (q--) {
    cin >> l >> r;
    cout << prefix[r - 1] - prefix[l - 1] << '\n';
  }

}
