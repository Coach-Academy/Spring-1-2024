#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  int res = 0;
  int frq[101]{};
  for (int i = 0, x; i < n; ++i) {
    cin >> x;
    res = max(res, ++frq[x]);
  }
  cout << n - res;
}

