#include <bits/stdc++.h>

using namespace std;
#define ll long long
ll limit;

int solve(ll n) {
  if (n <= limit) {
    return 1;
  }
  if (n % 2 == 0) {
    return 2 * solve(n / 2);
  } else {
    return solve(n / 2) + solve(n / 2 + 1);
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  ll n;
  while (cin >> n >> limit){
    cout << solve(n) << '\n';
  }
  return 0;
}

