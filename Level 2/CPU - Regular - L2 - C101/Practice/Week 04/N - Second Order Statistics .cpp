
#include<bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  set<int> st;
  while (n--) {
    int x;
    cin >> x;
    st.insert(x);
  }
  if (st.size() < 2) {
    cout << "NO";
  } else {
    cout << *next(st.begin());
  }
}
