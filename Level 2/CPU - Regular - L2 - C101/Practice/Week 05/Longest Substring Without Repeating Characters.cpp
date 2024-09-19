class Solution {
public:
  int lengthOfLongestSubstring(const string &s) {
    const int n = s.size();
    set<char> st;
    int l = 0, r = 0;
    int res{};
    while (r < n) {
      while (st.count(s[r])) {
        st.erase(s[l++]);
      }
      st.insert(s[r]);
      res = max(res, (int) st.size());
      ++r;
    }
    return res;
  }
};
