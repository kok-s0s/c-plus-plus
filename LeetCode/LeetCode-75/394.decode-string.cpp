/*
 * @lc app=leetcode id=394 lang=cpp
 *
 * [394] Decode String
 */

// @lc code=start
class Solution {
 public:
  string decodeString(string s) {
    stack<char> st;
    for (int i = 0; i < s.size(); ++i) {
      if (s[i] != ']')
        st.push(s[i]);
      else {
        string curStr = "";
        while (st.top() != '[') {
          curStr = st.top() + curStr;
          st.pop();
        }
        st.pop();
        string number = "";
        while (!st.empty() && isdigit(st.top())) {
          number = st.top() + number;
          st.pop();
        }
        int kTime = stoi(number);
        while (kTime--) {
          for (int j = 0; j < curStr.size(); ++j) {
            st.push(curStr[j]);
          }
        }
      }
    }
    string result = "";
    while (!st.empty()) {
      result = st.top() + result;
      st.pop();
    }
    return result;
  }
};
// @lc code=end
