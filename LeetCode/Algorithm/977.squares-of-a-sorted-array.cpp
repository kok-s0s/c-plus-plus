/*
 * @lc app=leetcode id=977 lang=cpp
 *
 * [977] Squares of a Sorted Array
 */

// @lc code=start
class Solution {
public:
  vector<int> sortedSquares(vector<int> &nums) {
    vector<int> res(nums.size());
    int left = 0, right = nums.size() - 1;
    for (int k = res.size() - 1; k >= 0; --k) {
      if (abs(nums[left]) <= abs(nums[right])) {
        res[k] = nums[right] * nums[right--];
      } else {
        res[k] = nums[left] * nums[left++];
      }
    }
    return res;
  }
};
// @lc code=end
