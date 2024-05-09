#include <bits/stdc++.h>

using namespace std;
const int mod = 1e9 + 7, N = 1e5 + 5;
int mem[N], pref[N];
int n, k;

int dp(int i) {
  if (i == 0) return 1;
  if (i < 0) return 0;
  int &res = mem[i];
  if (~res) {
    return res;
  }
  res = (dp(i - 1) + dp(i - k)) % mod;
  return res;
}

int main() {
  memset(mem, -1, sizeof mem);
  cin >> n >> k;
  pref[0] = 0;
  for (int i = 1; i <= 100000; ++i) {
    pref[i] = (pref[i - 1] + dp(i)) % mod;
  }
  int l, r;
  for (int i = 0; i < n; ++i) {
    cin >> l >> r;
    cout << (pref[r] - pref[l - 1] + mod) % mod << "\n";
  }
}
