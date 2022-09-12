/*
 * @lc app=leetcode id=350 lang=cpp
 *
 * [350] Intersection of Two Arrays II
 */

// @lc code=start
class Solution {
 public:
  vector<int> intersect(vector<int> &nums1, vector<int> &nums2) {
    // using Map & without sort
    // map<int, int> freq;
    // vector<int> res;
    // for (int i = 0; i < nums1.size(); ++i) {
    //   freq[nums1[i]]++;
    // }
    // for (int i = 0; i < nums2.size(); ++i) {
    //   if (freq[nums2[i]] > 0) {
    //     freq[nums2[i]]--;
    //     res.push_back(nums2[i]);
    //   }
    // }
    // return res;

    // Two pointer with (x, y) with sort
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());
    int x = 0, y = 0;
    vector<int> res;
    while (x < nums1.size() && y < nums2.size()) {
      if (nums1[x] == nums2[y]) {
        res.push_back(nums1[x]);
        x++;
        y++;
      } else if (nums1[x] < nums2[y]) {
        x++;
      } else {
        y++;
      }
    }
    return res;
  }
};
// @lc code=end
