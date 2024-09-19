#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, top;
  cin >> n >> top;
  int a, b;
  for (int i = 0; i < n; ++i) {
    cin >> a >> b;
    if (a == top || b == top || 7 - a == top || 7 - b == top) {
      cout << "NO";
      return 0;
    }
  }
  cout << "YES";
}
