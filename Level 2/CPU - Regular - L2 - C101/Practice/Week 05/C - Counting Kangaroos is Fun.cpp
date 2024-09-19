#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  int arr[n];
  for (int &x: arr) {
    cin >> x;
  }
  sort(arr, arr + n);
  int l = 0, r = n / 2, ans = n;
  while (l < n / 2 and r < n) {
    if (arr[l] * 2 <= arr[r]) {
      ans--, l++;
    }
    ++r;
  }
  cout << ans;
}
