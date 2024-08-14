#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  ll x;
  vector<ll> ord;
  map<ll, int> frq;
  while (cin >> x) {
    if (frq[x]++ == 0) {
      ord.emplace_back(x);
    }
  }
  for (ll val: ord) {
    cout << val << ' ' << frq[val] << '\n';
  }
}
