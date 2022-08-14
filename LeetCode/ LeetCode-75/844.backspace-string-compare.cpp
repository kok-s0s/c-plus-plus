/*
 * @lc app=leetcode id=844 lang=cpp
 *
 * [844] Backspace String Compare
 */

// @lc code=start
class Solution {
public:
  bool backspaceCompare(string s, string t) { return build(s) == build(t); }

  string build(string s) {
    string res;
    for (char c : s) {
      if (c == '#') {
        if (!res.empty()) {
          res.pop_back();
        }
      } else {
        res.push_back(c);
      }
    }
    return res;
  }
};
// @lc code=end
