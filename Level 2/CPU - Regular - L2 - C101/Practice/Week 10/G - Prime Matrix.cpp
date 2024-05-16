#include <bits/stdc++.h>

using namespace std;
#define ll long long
const int N = 1e5 + 4;
int op[N];

void sieve() {
  vector<bool> is_prime(N, true);
  is_prime[1] = false;
  for (int i = 2; i < N; ++i) {
    if (is_prime[i]) {
      for (int j = i * 2; j < N; j += i) {
        is_prime[j] = false;
      }
    }
  }
  int lst = 0;
  for (int i = N - 1; i > 0; --i) {
    if (is_prime[i])
      lst = i;
    op[i] = lst - i;
  }
}

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  sieve();
  int n, m;
  cin >> n >> m;
  vector<int> row(n), col(m);
  for (int i = 0, x; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      cin >> x;
      row[i] += op[x];
      col[j] += op[x];
    }
  }
  cout << min(
      *min_element(row.begin(), row.end()),
      *min_element(col.begin(), col.end())
  );
}

