//PROBLEM STATEMENT - Reverse words in a given string / Palindrome Check
//PROBLEM - https://leetcode.com/problems/reverse-words-in-a-string/
//SOLUTION:-
class Solution {
public:
   string reverseWords(string s) {
        int n=s.length(),i=n-1,j=n-1;
        string ans;
        while(i>=0){
            if(s[i] == ' '){
                if(i != j){
                    ans += s.substr(i+1,j-i)+ ' ';
                } 
                i--,j=i;   
            }else i--;
        }   
        if(i != j){
            ans += s.substr(i+1,j-i);   
        }
        else if(ans.back()==' ')ans.pop_back();

        return ans;
    }
};
