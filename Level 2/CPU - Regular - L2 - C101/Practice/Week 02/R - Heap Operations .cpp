#include<bits/stdc++.h>

using namespace std;
#define ll long long

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  vector<string> res;
  priority_queue<int, vector<int>, greater<>> pq;
  int n;
  cin >> n;
  string s;
  int x;
  for (int i = 0; i < n; ++i) {
    cin >> s;
    if (s[0] == 'i') {
      cin >> x;
      pq.push(x);
      res.push_back("insert " + to_string(x));
    } else if (s[0] == 'g') {
      cin >> x;
      while (!pq.empty() and pq.top() < x) {
        pq.pop();
        res.push_back("removeMin");
      }
      if (pq.empty() or pq.top() != x) {
        pq.push(x);
        res.push_back("insert " + to_string(x));
      }
      res.push_back("getMin " + to_string(x));
    } else {
      if (pq.empty()) {
        pq.push(1);
        res.push_back("insert 1");
      }
      pq.pop();
      res.push_back("removeMin");
    }
  }

  cout << res.size() << '\n';
  for (auto &op: res) {
    cout << op << '\n';
  }

}
