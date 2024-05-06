#include <bits/stdc++.h>

using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int q;
  cin >> q;
  map<int, int> frq1; /// { value , frq }
  vector<int> frq2(q + 5);
  int t, x;
  while (q--) {
    cin >> t >> x;
    if (t == 1) { /// add new value
      int val = frq1[x];
      frq2[val]--;
      ++frq1[x]; /// 3 -> 4
      frq2[val + 1]++;
    } else if (t == 2) { /// delete
      if (frq1[x] > 0) {
        int val = frq1[x];
        frq2[val]--;
        --frq1[x];
        frq2[val - 1]++;
      }
    } else { /// ask ?
      cout << (x < frq2.size() && frq2[x] > 0) << '\n';
    }
  }

}
