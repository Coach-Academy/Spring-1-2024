#include <iostream>

#define ll long long
using namespace std;
const int mod = 1e9 + 7;

void add(int &a, int b) {
  /// a < mod , b < mod
  /// a == mod -1 , b = mod - 1
  /// 2 * mod - 2 [-mod] = mod - 2
  a += b;
  if (a >= mod) {
    a -= mod;
  }
}

/***
 *
 *  dp[pos][steps] => {
 *      dp[0.... 3] [steps - 1]
 *  }
 *  dp[pos == 'D'][0]
 */

int main() {
  int n;
  cin >> n;
  int dp[4][2];
  /// D -> 0
  dp[0][0] = 1;
  dp[1][0] = dp[2][0] = dp[3][0] = 0;
  for (int steps = 1; steps <= n; ++steps) {
    for (int pos = 0; pos < 4; ++pos) {
      dp[pos][steps & 1] = 0;
      for (int prv = 0; prv < 4; ++prv) {
        if (prv == pos)continue;
        add(dp[pos][steps & 1], dp[prv][(steps - 1) & 1]);
      }
    }
  }
  cout << dp[0][n & 1];
}
