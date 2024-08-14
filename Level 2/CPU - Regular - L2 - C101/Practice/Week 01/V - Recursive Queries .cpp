#include <bits/stdc++.h>

using namespace std;
#define ll long long

int f(int n) {
  if (n == 0) {
    return 1;
  }
  int d = max(1, n % 10);
  n = n / 10;
  int res = d * f(n);
  return res;
}

int g(int n) {
  if (n < 10) {
    return n;
  }
  return g(f(n));
}

vector<int> res[10];

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  for (int i = 1; i <= 1e6; ++i) {
    int k = g(i);
    res[k].push_back(i);
  }


  int q;
  cin >> q;
  for (int i = 0; i < q; ++i) { /// O(Q) * log(N)
    int l, r, k;
    cin >> l >> r >> k;
    int cnt =
        upper_bound(res[k].begin(), res[k].end(), r) -
        lower_bound(res[k].begin(), res[k].end(), l);
    cout << cnt << '\n';
//    for (int j = l; j <= r; ++j) { /// O(N) * log(N)
//      int t = g(j);
//      if (t == k) {
//        cnt += 1;
//      }
//    }
  }

}

