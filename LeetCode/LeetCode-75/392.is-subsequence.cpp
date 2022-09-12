/*
 * @lc app=leetcode id=392 lang=cpp
 *
 * [392] Is Subsequence
 */

// @lc code=start
class Solution {
 public:
  bool isSubsequence(string s, string t) {
    /*
     * Two pointer
     */

    // int m = s.length(), n = t.length();
    // int count = 0;

    // for (int i = 0; count < m && i < n; ++i)
    //   if (s[count] == t[i])
    //     count++;

    // return (count == s.length());

    /*
     * DP
     */

    int m = s.length();
    int n = t.length();
    vector<vector<int>> dp(m + 1, vector<int>(n + 1));

    for (int i = 1; i <= m; ++i) dp[i][0] = 0;
    for (int j = 0; j <= n; ++j) dp[0][j] = 1;
    for (int i = 1; i <= m; ++i) {
      for (int j = 1; j <= n; ++j) {
        if (s[i - 1] == t[j - 1])
          dp[i][j] = dp[i - 1][j - 1];
        else
          dp[i][j] = dp[i][j - 1];
      }
    }

    return dp[m][n];
  }
};
// @lc code=end
