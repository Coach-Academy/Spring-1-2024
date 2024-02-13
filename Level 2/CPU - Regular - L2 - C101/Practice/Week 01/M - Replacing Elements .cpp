#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int tc;
  cin >> tc;
  while (tc--) {
    int n, d;
    cin >> n >> d;
    int arr[n];
    for (int &x: arr) {
      cin >> x;
    }
    sort(arr, arr + n);
    if (arr[n - 1] <= d || arr[0] + arr[1] <= d) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }
}

