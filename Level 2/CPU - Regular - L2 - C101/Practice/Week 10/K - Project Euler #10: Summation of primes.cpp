#include <bits/stdc++.h>

using namespace std;
#define ll long long
const int N = 1e6 + 5;
ll p[N];

void sieve() {
  iota(p + 2, p + N, 2);
  for (int i = 2; i < N; ++i) {
    if (p[i] == i) {
      for (int j = i + i; j < N; j += i) {
        p[j] = 0;
      }
    }
  }
  for (int i = 1; i < N; ++i) {
    p[i] += p[i - 1];
  }
}

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  sieve();
  int tc, n;
  cin >> tc;
  while (tc--) {
    cin >> n;
    cout << p[n] << '\n';
  }
}

