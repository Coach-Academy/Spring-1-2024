#include <bits/stdc++.h>

using namespace std;
#define ll long long
const int N = 200'002;

int frq[N];
int isGood[N];

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, k, q;
  cin >> n >> k >> q;
  for (int i = 0, l, r; i < n; ++i) {
    cin >> l >> r; //// [l : r] += 1
    frq[l] += 1;
    frq[r + 1] -= 1;
  }
  for (int i = 1; i < N; ++i) {
    frq[i] += frq[i - 1];
    if (frq[i] >= k) {
      isGood[i] = 1;
    } else {
      isGood[i] = 0;
    }
    isGood[i] += isGood[i - 1];
  }
  while (q--) {
    int l, r;
    cin >> l >> r;
    cout << isGood[r] - isGood[l - 1] << '\n';
  }


}
