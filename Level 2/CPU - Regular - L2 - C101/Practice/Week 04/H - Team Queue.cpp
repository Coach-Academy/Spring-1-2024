
#include<bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, tc = 1, x, k;
  while (cin >> n, n) {
    cout << "Scenario #" << tc++ << '\n';
    map<int, int> teamID;
    for (int i = 0; i < n; ++i) {
      cin >> k;
      while (k--) {
        cin >> x;
        teamID[x] = i;
      }
    }
    vector<queue<int>> teamQueue(n);
    queue<int> q;
    string s;
    while (cin >> s, s != "STOP") {
      if (s[0] == 'E') {
        cin >> x;
        int id = teamID[x];
        if (teamQueue[id].empty()) {
          q.emplace(id);
        }
        teamQueue[id].push(x);
      } else {
        int id = q.front();
        while (teamQueue[id].empty()) {
          q.pop(), id = q.front();
        }
        cout << teamQueue[id].front() << '\n';
        teamQueue[id].pop();
      }
    }
    cout << '\n';
  }
}
