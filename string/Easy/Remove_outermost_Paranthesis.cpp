//PROBLEM STATEMENT - Remove Outermost Parentheses.
//PROBLEM - https://leetcode.com/problems/remove-outermost-parentheses/description/
//SOLUTION:-
class Solution {
public:
    string removeOuterParentheses(string s) {
        string result;   
        int balance = 0; 
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                if (balance > 0) {
                    result += s[i]; 
                }
                balance++; 
            } else {
                if (balance > 0) {
                    result += s[i];
                }
            }
        }
      return result; 
    }
};
