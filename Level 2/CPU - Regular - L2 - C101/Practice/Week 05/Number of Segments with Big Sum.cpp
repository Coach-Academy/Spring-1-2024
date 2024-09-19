#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  ll s;
  cin >> n >> s;
  int a[n];
  for (int &x: a) {
    cin >> x;
  }
  ll cur = 0;
  int l = 0, r = 0;
  ll res{};
  while (r < n) {
    cur += a[r];
    while (cur - a[l] >= s) {
      cur -= a[l];
      l++;
    }
    if (cur >= s) {
      res += l + 1;
    }
    ++r;
  }
  cout << res;
}
