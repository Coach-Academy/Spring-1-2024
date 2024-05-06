#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, s, d;
  cin >> n >> s >> d;
  for (int i = 0, x, y; i < n; ++i) {
    cin >> x >> y;
    if (x < s && y > d) {
      cout << "Yes";
      return 0;
    }
  }
  cout << "No";
}

