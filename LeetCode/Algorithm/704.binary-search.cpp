/*
 * @lc app=leetcode id=704 lang=cpp
 *
 * [704] Binary Search
 */

// @lc code=start
class Solution {
 public:
  int search(vector<int> &nums, int target) {
    int pivot, left = 0, right = nums.size() - 1;
    while (left <= right) {
      pivot = left + (right - left) / 2;
      if (nums[pivot] == target)
        return pivot;
      else if (nums[pivot] < target)
        left = pivot + 1;
      else
        right = pivot - 1;
    }
    return -1;
  }
};
// @lc code=end
