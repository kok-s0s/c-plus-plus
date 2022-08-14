/*
 * @lc app=leetcode id=205 lang=cpp
 *
 * [205] Isomorphic Strings
 */

// @lc code=start
class Solution {
public:
  bool isIsomorphic(string s, string t) {
    /*
     * Character Mapping with Dictionary
     */

    if (s.size() != t.size())
      return false;

    int mp1[256];
    int mp2[256];

    for (int i = 0; i < 256; ++i)
      mp1[i] = -1;
    for (int i = 0; i < 256; ++i)
      mp2[i] = -1;

    for (int i = 0; i < s.size(); ++i) {
      if (mp1[s[i]] != mp2[t[i]])
        return false;

      mp1[s[i]] = mp2[t[i]] = i;
    }

    return true;
  }
};
// @lc code=end
