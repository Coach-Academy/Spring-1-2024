
class Solution {
public:

  vector<int> a;
  int T;

  int solve(int i, int sum) {
    if (i == a.size()) {
      if (sum == T) {
        return 1;
      }
      return 0;
    }
    int res = 0;
    res += solve(i + 1, sum - a[i]);
    res += solve(i + 1, sum + a[i]);
    return res;
  }


  int findTargetSumWays(vector<int> &nums, int target) {
    a = nums;
    T = target;
    return solve(0, 0);
  }
};
