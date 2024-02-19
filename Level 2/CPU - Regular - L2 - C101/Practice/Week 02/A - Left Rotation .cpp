#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, d;
  cin >> n >> d;
  vector<int> a(n);
  for (int &x: a) {
    cin >> x;
  }
  for (int i = 0; i < n; ++i, ++d) {
    cout << a[d % n] << ' ';
  }
}
