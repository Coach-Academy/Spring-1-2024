#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int q;
  cin >> q;
  priority_queue<int, vector<int>, greater<>> part1;
  queue<int> part2;
  while (q--) {
    int ty;
    cin >> ty;
    if (ty == 1) {
      int x;
      cin >> x;
      part2.emplace(x);
    } else if (ty == 2) {
      if (!part1.empty()) {
        cout << part1.top() << '\n';
        part1.pop();
      } else {
        cout << part2.front() << '\n';
        part2.pop();
      }
    } else {
      while (!part2.empty()) {
        int x = part2.front();
        part2.pop();
        part1.push(x);
      }
    }
  }

}
