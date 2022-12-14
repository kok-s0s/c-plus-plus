/*
 * @lc app=leetcode id=589 lang=cpp
 *
 * [589] N-ary Tree Preorder Traversal
 */

// @lc code=start
/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
 public:
  vector<int> preorder(Node *root) {
    vector<int> res;
    if (!root) return res;
    res.push_back(root->val);
    for (auto child : root->children) {
      auto tmp = preorder(child);
      res.insert(res.end(), tmp.begin(), tmp.end());
    }
    return res;
  }
};
// @lc code=end
