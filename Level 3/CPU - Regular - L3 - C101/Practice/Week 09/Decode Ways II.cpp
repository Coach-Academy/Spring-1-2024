class Solution {
  static const int mod = 1e9 + 7;
  string s;

/***
  dp[i][car] -> {
    carry * 10 + d <= [26,'Z'] and dp[i + 1][0]
  }
  dp[i][0] -> s[i] != '0' : {
    dp[i + 1][0]
    dp[i + 1][s[i] - '0']
  } else {
    return 0
  }
**/

  void add(int &a, int b) {
    a += b;
    if (a >= mod)a -= mod;
  }

  vector<vector<int>> mem;

  int dp(int i, int carry) {
    if (i == s.size()) {
      return carry == 0;
    }
    int &res = mem[i][carry];
    if (~res)return res;
    res = 0;
    int d;
    if (isdigit(s[i])) {
      d = s[i] - '0';
      if (carry) {
        if (carry * 10 + d <= 26)
          add(res, dp(i + 1, 0));
      } else if (s[i] != '0') {
        add(res, dp(i + 1, 0));
        add(res, dp(i + 1, s[i] - '0'));
      }
      return res;
    }
    for (d = 1; d <= 9; ++d) {
      if (carry) {
        if (carry * 10 + d <= 26)
          add(res, dp(i + 1, 0));
        else break;
      } else {
        add(res, dp(i + 1, 0));
        add(res, dp(i + 1, d));
      }
    }
    return res;
  }

public:
  int numDecodings(const string &s) {
    this->s = s;
    mem.assign(s.size(), vector<int>(10, -1));
    return dp(0, 0);
  }
};
