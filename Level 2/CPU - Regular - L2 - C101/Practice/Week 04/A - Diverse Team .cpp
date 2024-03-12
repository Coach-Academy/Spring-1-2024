#include<bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, k;
  cin >> n >> k;
  set<int> st;
  vector<int> res;
  for (int i = 1; i <= n; ++i) {
    int x;
    cin >> x;
    if (!st.count(x)) {
      st.insert(x);
      res.emplace_back(i);
    }
  }
  if (res.size() < k) {
    cout << "NO";
  } else {
    cout << "YES\n";
    for (int i = 0; i < k; ++i) {
      cout << res[i] << ' ';
    }
  }
}
