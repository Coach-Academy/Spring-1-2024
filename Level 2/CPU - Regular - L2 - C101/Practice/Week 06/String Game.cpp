#include <bits/stdc++.h>

using namespace std;
#define int long long

bool check(string &s, string &pat) {
  int si = 0, pi = 0;
  while (pi < pat.size()) {
    if (si == s.size()) {
      return false;
    }
    if (s[si] == pat[pi]) {
      ++pi;
    }
    ++si;
  }
  return true;
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  string str, pat;
  cin >> str >> pat;
  const int n = str.size();
  vector<int> arr(n);
  for (int &x: arr) cin >> x;
  int s = 0, e = n - 1, ans, md;
  while (s <= e) {
    md = (s + e) / 2;
    string t;
    vector<bool> del(n);
    for (int i = 0; i < md; ++i) {
      int p = arr[i] - 1;
      del[p] = true;
    }
    for (int i = 0; i < n; ++i)
      if (!del[i])
        t += str[i];
    if (check(t, pat)) {
      ans = md, s = md + 1;
    } else {
      e = md - 1;
    }
  }
  cout << ans;
}

