/*
 * @lc app=leetcode id=189 lang=cpp
 *
 * [189] Rotate Array
 */

// @lc code=start
class Solution {
 public:
  void rotate(vector<int> &nums, int k) {
    int n = nums.size();
    k %= n;
    reverse(nums, 0, n - 1);
    reverse(nums, 0, k - 1);
    reverse(nums, k, n - 1);
  }

  void reverse(vector<int> &nums, int start, int end) {
    while (start < end) {
      swap(nums[start], nums[end]);
      start++;
      end--;
    }
  }
};
// @lc code=end
