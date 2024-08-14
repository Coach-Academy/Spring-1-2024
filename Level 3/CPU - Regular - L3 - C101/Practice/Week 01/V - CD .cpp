#include <bits/stdc++.h>

using namespace std;
#define ll long long
int n, target;
vector<int> arr, res, best_answer;
int mx_sum;

void solve(int i, int sum) {
  if (sum > target) {
    return;
  }
  if (i == n) {
    if (sum > mx_sum) {
      mx_sum = sum;
      best_answer = res;
    }
    return;
  }
  /// option 1:: pick
  res.push_back(arr[i]);
  solve(i + 1, sum + arr[i]);
  res.pop_back();

  /// option 2:: leave
  solve(i + 1, sum);
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  while (cin >> target >> n) {
    arr.resize(n);
    for (int &x: arr) {
      cin >> x;
    }
    mx_sum = 0;
    solve(0, 0);
    for (int &x: best_answer) {
      cout << x << ' ';
    }
    cout << "sum:" << mx_sum << '\n';

  }


}
