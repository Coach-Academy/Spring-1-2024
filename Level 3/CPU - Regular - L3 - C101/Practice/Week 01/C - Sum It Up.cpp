#include <bits/stdc++.h>

#define ll long long
using namespace std;
const int N = 1001;
int n, target_sum;
int frq[N], path[N];
vector<int> val;

bool solve(int idx = 0, int sum = 0) {
  if (sum == target_sum) {
    bool plus = false;
    for (int i = 0; i < val.size(); ++i) {
      for (int j = 0; j < path[i]; ++j) {
        if (plus)cout << "+";
        cout << val[i];
        plus = true;
      }
    }
    cout << '\n';
    return true;
  }
  if (idx == val.size() || sum > target_sum) {
    return false;
  }
  int i = val[idx];
  bool res = false;
  for (int j = frq[i]; j >= 0; --j) {
    path[idx] = j;
    res |= solve(idx + 1, sum + j * i);
  }
  return res;
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  while (cin >> target_sum >> n, n && target_sum) {
    val.resize(n);
    for (int &x: val) {
      cin >> x;
      frq[x] = 0;
    }
    for (int &x: val) {
      frq[x]++;
    }
    val.erase(unique(val.begin(), val.end()), val.end());
    cout << "Sums of " << target_sum << ":\n";
    bool res = solve();
    if (!res) {
      cout << "NONE\n";
    }
  }
}
