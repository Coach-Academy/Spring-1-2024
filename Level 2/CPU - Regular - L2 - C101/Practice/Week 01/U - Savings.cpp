#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int x;
  cin >> x;
  ll sum = 0, i = 1;
  while (true) {
    sum = sum + i;
    if (sum >= x) {
      break;
    }
    ++i;
  }
  cout << i;
}

