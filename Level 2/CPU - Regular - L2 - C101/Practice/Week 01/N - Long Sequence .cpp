#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  ll sum = 0;
  int arr[n];
  for (int &x: arr) {
    cin >> x;
    sum += x;
  }
  ll x;
  cin >> x;
  ll res = x / sum * n;
  x %= sum;
  for (int i = 0; i < n; ++i) {
    if (x < 0)break;
    ++res;
    x -= arr[i];
  }
  cout << res;
}

