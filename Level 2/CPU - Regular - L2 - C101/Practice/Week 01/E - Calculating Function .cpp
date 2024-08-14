#include <bits/stdc++.h>

using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  long long n;
  cin >> n;
  if (n % 2 == 0) {
    cout << n / 2;
  } else {
    cout << n / 2 - n;
  }
}
