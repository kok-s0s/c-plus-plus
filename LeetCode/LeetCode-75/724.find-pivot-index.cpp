/*
 * @lc app=leetcode id=724 lang=cpp
 *
 * [724] Find Pivot Index
 */

// @lc code=start
class Solution {
 public:
  int pivotIndex(vector<int> &nums) {
    /*
     * Prefix Sum
     */

    int leftSum = 0, sum = 0;

    for (int x : nums) sum += x;
    for (int i = 0; i < nums.size(); ++i) {
      if (leftSum == sum - leftSum - nums[i]) return i;
      leftSum += nums[i];
    }

    return -1;
  }
};
// @lc code=end
