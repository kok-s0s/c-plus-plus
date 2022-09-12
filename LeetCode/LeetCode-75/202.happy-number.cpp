/*
 * @lc app=leetcode id=202 lang=cpp
 *
 * [202] Happy Number
 */

// @lc code=start
class Solution {
 private:
  int getNext(int n) {
    int totalSum = 0;
    while (n > 0) {
      int dight = n % 10;
      totalSum += dight * dight;
      n /= 10;
    }
    return totalSum;
  }

 public:
  bool isHappy(int n) {
    unordered_set<int> tmp;
    while (n != 1 && tmp.find(n) == tmp.end()) {
      tmp.insert(n);
      n = getNext(n);
    }
    return n == 1;
  }
};
// @lc code=end
