class Solution {
public:
  int splitArray(const vector<int> &nums, int k) {

    auto ok = [&](int mx) -> bool {
      int sum = mx + 1, cnt = 0;
      for (const int &x: nums) {
        if (x > mx)return false;
        if (sum + x <= mx) {
          sum += x;
        } else {
          ++cnt, sum = x;
        }
      }
      return cnt <= k;
    };

    int s = 0, e = 2e9, md, ans;
    while (s <= e) {
      md = (s + e) / 2;
      if (ok(md)) {
        e = md - 1;
        ans = md;
      } else {
        s = md + 1;
      }
    }
    return ans;
  }
};
