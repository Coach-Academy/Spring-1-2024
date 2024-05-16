#include <bits/stdc++.h>

using namespace std;
#define ll long long
const int N = 1e6 + 1;
vector<int> ans[11];
int cnt[N];


void pre() {
  for (int i = 2; i < N; ++i) {
    if (cnt[i] == 0) {
      for (int j = i; j < N; j += i) {
        cnt[j] += 1;
      }
    }
  }
  for (int i = 1; i < N; ++i) {
    int x = cnt[i];
    ans[x].emplace_back(i);
  }
}

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  pre();

  int tc;
  cin >> tc;
  while (tc--) { // O( T * log(n) )
    int a, b, n;
    cin >> a >> b >> n;
    auto &arr = ans[n];
    auto l = lower_bound(arr.begin(), arr.end(), a);
    auto r = upper_bound(arr.begin(), arr.end(), b);
    cout << r - l << '\n';
  }
}

