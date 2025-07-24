//PROBLEM STATEMENT - check whether one string is a rotation of another
//PROBLEM - https://leetcode.com/problems/rotate-string/description/
//SOLUTION:-
class Solution {
public:
    bool rotateString(string s, string goal) {
        int len = s.size();
        for(int i=0 ; i < len ; i++){
            if(s == goal) return true;
            s.push_back(s[0]);
            s.erase(s.begin());
        }
        return false;
    }
};
