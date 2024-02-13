#include <bits/stdc++.h>

#define ll long long
using namespace std;
ll limit;

ll solve(ll cur, int fours, int sevens) {
  if (cur >= limit && fours == sevens) {
    return cur;
  }
  if (cur >= (ll) 1e11) {
    return 1e11;
  }
  return min(
      solve(cur * 10 + 4, fours + 1, sevens),
      solve(cur * 10 + 7, fours, sevens + 1)
  );
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin >> limit;
  cout << solve(0, 0, 0);
}
