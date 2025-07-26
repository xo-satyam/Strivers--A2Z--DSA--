//PROBLEM STATEMENT - Maximum Nesting Depth of Paranthesis
//PROBLEM - https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/
//SOLUTION:-
class Solution {
public:
    int maxDepth(string s) {
        int cnt = 0,maxcnt = -1;
        for(auto ch : s){
            if(ch == '(') cnt++;
            maxcnt = max(cnt,maxcnt);
            if(ch == ')') cnt--;
        } 
        return maxcnt;
    }
};
