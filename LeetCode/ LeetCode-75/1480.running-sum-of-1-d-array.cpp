/*
 * @lc app=leetcode id=1480 lang=cpp
 *
 * [1480] Running Sum of 1d Array
 */

// @lc code=start
class Solution {
public:
  vector<int> runningSum(vector<int> &nums) {
    /*
     * Using Separate Space
     */

    // vector<int> result = {nums[0]};

    // for(int i = 1; i < nums.size(); ++i) {
    //   result.push_back(result.back() + nums[i]);
    // }

    // return result;

    /*
     * Using Input Array for Output
     */

    for (int i = 1; i < nums.size(); ++i) {
      nums[i] += nums[i - 1];
    }

    return nums;
  }
};
// @lc code=end
