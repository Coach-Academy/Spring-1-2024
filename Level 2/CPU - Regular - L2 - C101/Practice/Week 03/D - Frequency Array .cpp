#include <bits/stdc++.h>

using namespace std;
#define ll long long
const int N = 2e5 + 5;
int frq[N];

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int arr[n];
    bool valid = true;
    for (int &x: arr) {
      cin >> x;
      if (frq[x]++ == 1) {
        valid = false;
      }
    }
    cout << (valid ? "prekrasnyy\n" : "ne krasivo\n");
    for (int &x: arr) {
      frq[x] = 0;
    }
  }
}
