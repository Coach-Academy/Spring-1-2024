#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  int n;
  cin >> n;
  int arr[n];
  for (int &x: arr) {
    cin >> x;
  }
  sort(arr, arr + n);
  int mn = 0, mx = 0;
  int res{};
  while (mn < n) {
    // a[mn] --> [ a[mn] * 2  <= x]
    while (mx < n and arr[mx] <= arr[mn] * 2) {
      mx++;
    }
    res = max(res, mx - mn);
    mn++;
  }
  cout << n - res;
}
