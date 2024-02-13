#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  int a[n];
  for (int &x: a) {
    cin >> x;
  }
  int sum{};
  for (int i = 0, b; i < n; ++i) {
    cin >> b;
    sum += a[i] * b;
  }
  if (sum != 0) {
    cout << "No";
  } else {
    cout << "Yes";
  }
}

