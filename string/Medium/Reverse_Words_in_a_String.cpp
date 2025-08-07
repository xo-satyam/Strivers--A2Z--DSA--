//PROBLEM STATEMENT - Reverse Words in a String
//PROBLEM - https://leetcode.com/problems/reverse-words-in-a-string/description/
//SOLUTION:-
class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        int i = n-1,j = n-1;
        string ans = "";
        while(i >= 0){
            if(s[i] == ' '){
                if(i != j){
                    ans += s.substr(i+1,j-i)+' ';
                    
                }i--,j=i;
            }else{
                i--;
            }
        }
        if(i != j) ans += s.substr(i+1,j-i);
        else if(ans.back() == ' ') ans.pop_back();
        return ans;
    }
};
