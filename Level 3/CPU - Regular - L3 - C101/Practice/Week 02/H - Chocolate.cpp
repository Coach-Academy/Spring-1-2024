#include <bits/stdc++.h>

using namespace std;
#define ll long long
const int N = 2e5 + 5;


int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }
  int cnt = 1;
  long long res = 1;
  bool flag = false;
  for (int i = 0; i < n; ++i) {
    if (a[i]) {
      if (flag) {
        res *= cnt;
      }
      flag = true;
      cnt = 1;
    } else {
      ++cnt;
    }
  }
  if (!flag) res = 0;
  cout << res;
}
