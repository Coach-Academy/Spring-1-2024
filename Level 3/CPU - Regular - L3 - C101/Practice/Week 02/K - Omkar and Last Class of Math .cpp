#include<bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> divos;
    for (int i = 1; i * i <= n; i++) {
      if (n % i == 0) {
        divos.push_back(i);
        divos.push_back(n / i);
      }
    }
    sort(divos.begin(), divos.end());
    int val = divos[1];
    cout << n / val << ' ' << n - n / val << '\n';
  }
}
