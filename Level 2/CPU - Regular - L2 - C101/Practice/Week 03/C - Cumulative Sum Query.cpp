#include <bits/stdc++.h>

using namespace std;
#define ll long long
const int N = 2e5 + 5;
int after[N], before[N];

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  int arr[n];
  for (int &x: arr) {
    cin >> x;
  }
  for (int i = 1; i < n; ++i) {
    arr[i] += arr[i - 1];
  }
  int q;  cin >> q;
  while (q--) {
    int l,r;
    cin >> l >> r;
    int res = arr[r];
    if(l > 0)res-=arr[l-1];
    cout << res << '\n';
  }
}
