
#include<bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int q, x;
  cin >> q;
  string ty;
  bool rev = false;
  deque<int> dq;
  while (q--) {
    cin >> ty;
    if (rev) {
      if (ty[0] == 't') ty = "push_back";
      else if (ty[0] == 'p')ty = "toFront";
      else if (ty[0] == 'b') ty = "front";
      else if (ty[0] == 'f')ty = "back";
    }
    if (ty[0] == 't') {
      cin >> x;
      dq.push_front(x);
    } else if (ty[0] == 'p') {
      cin >> x;
      dq.push_back(x);
    } else if (ty[0] == 'b') {
      if (dq.empty())cout << "No job for Ada?\n";
      else cout << dq.back() << '\n', dq.pop_back();
    } else if (ty[0] == 'f') {
      if (dq.empty())cout << "No job for Ada?\n";
      else cout << dq.front() << '\n', dq.pop_front();
    } else {
      rev ^= 1;
    }
  }
}
