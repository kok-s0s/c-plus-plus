/*
 * @lc app=leetcode id=98 lang=cpp
 *
 * [98] Validate Binary Search Tree
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
  bool isValidBST(TreeNode *root) {
    if (root == NULL)
      return true;
    return validate(root->left, LONG_MIN, root->val) && validate(root->right, root->val, LONG_MAX);
  }

  bool validate(TreeNode *root, long minVal, long maxVal) {
    if (root == NULL)
      return true;
    if (root->val >= maxVal || root->val <= minVal)
      return false;
    return validate(root->left, minVal, root->val) && validate(root->right, root->val, maxVal);
  }
};
// @lc code=end
