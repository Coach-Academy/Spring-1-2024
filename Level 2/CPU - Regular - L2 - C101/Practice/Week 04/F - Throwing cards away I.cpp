
#include<bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  while (cin >> n, n) {
    if (n == 1) {
      cout << "Discarded cards:\nRemaining card: 1\n";
      continue;
    }
    queue<int> q;
    for (int i = 3; i <= n; ++i) {
      q.emplace(i);
    }
    q.emplace(2);
    cout << "Discarded cards: 1";
    while (q.size() > 1) {
      cout << ", " << q.front();
      q.pop();
      q.push(q.front());
      q.pop();
    }
    cout << "\nRemaining card: " << q.front() << '\n';
  }
}
