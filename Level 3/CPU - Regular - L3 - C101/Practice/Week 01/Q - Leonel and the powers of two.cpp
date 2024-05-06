#include <bits/stdc++.h>

using namespace std;
#define ll long long

void solve(ll k) {
  if (k == 1) {
    cout << "2";
  } else if (k % 2 == 0) {
    cout << "(";
    solve(k / 2);
    cout << ")^2";
  } else {
    cout << "(2*";
    solve(k - 1);
    cout << ")";
  }
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int tc;
  cin >> tc;
  while (tc--) {

    ll k;
    cin >> k;
    solve(k);
    cout << '\n';

  }


}
