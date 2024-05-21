#include <iostream>
#include <vector>

#define ll long long
using namespace std;

/**
 *  dp[i] ->
 *        dp[i-1] + [i],
 *        dp[i-2] + [i-1,i],
 *        dp[i-3] + [i-2,i-1,i]
 */

int main() {
  int tc;
  cin >> tc;
  while (tc--) {
    int n;
    cin >> n;
    vector<int> frq(n + 1), price(n + 1), dp(n + 1);
    for (int i = 1; i <= n; ++i) {
      cin >> frq[i] >> price[i];
    }
    for (int i = 1; i <= n; ++i) {
      int sum = 10;
      dp[i] = 2e9;
      for (int j = i; j > 0; --j) {
        sum += frq[j];
        dp[i] = min(
            dp[i],
            sum * price[i] + dp[j - 1]
        );
      }
    }
    cout << dp[n] << '\n';
  }


}
