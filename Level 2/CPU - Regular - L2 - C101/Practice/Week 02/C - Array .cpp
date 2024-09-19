#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  vector<int> zeros;
  int neg = 0, pos = 0, cntZeros = 0;
  for (int i = 0, x; i < n; ++i) {
    cin >> x;
    if (x == 0) {
      ++cntZeros;
    } else if (x > 0 and !pos) {
      pos = x;
    } else if (x < 0 and !neg) {
      neg = x;
    } else {
      zeros.emplace_back(x);
    }
  }
  cout << "1 " << neg << '\n';
  if (pos == 0) {
    int s = zeros.size() - 1;
    cout << "2 " << zeros[s] << ' ' << zeros[s - 1] << '\n';
    zeros.pop_back();
    zeros.pop_back();
  } else {
    cout << "1 " << pos << '\n';
  }
  cout << zeros.size() + cntZeros << ' ';
  for (int &x: zeros)cout << x << ' ';
  while (cntZeros--) cout << "0 ";
}
