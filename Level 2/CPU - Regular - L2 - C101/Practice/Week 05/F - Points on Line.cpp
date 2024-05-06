#include <bits/stdc++.h>

using namespace std;
#define ll long long

ll cnt(ll n) {
  if (n < 2)return 0;
  --n;
  return n * (n + 1) / 2; /// 0 1 2 3 .... n - 1
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, d;
  cin >> n >> d;
  int arr[n];
  for (int &x: arr) cin >> x;
  int l = 0, r = 1;
  ll res{};
  while (r < n) {
    while (arr[r] - arr[l] > d) {
      ++l;
    }
    int sz = r - l;
    res += cnt(sz);
    ++r;
  }
  cout << res;

}
