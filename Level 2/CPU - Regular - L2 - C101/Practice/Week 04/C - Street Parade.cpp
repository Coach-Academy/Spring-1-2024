
#include<bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  while (cin >> n, n) {
    stack<int> st;
    int cur = 1;
    for (int i = 1; i <= n; ++i) {
      int x;
      cin >> x;
      st.push(x);
      while (st.size() && st.top() == cur) {
        st.pop(), cur++;
      }
    }
    if (st.empty()) {
      cout << "yes\n";
    } else {
      cout << "no\n";
    }
  }
}
