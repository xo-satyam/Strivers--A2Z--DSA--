//PROBLEM STATEMENT-A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing 
//all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.
//PROBLEM-https://leetcode.com/problems/valid-palindrome/description/
//SOLUTION:-
class Solution {
public:
    bool isPalindrome(string s) {
        string newf;
        for(char c:s){
            if(isalnum(c)){
                newf += tolower(c);
            }
        }int st=0,end=newf.size()-1;
        while(st<=end){
            if(newf[st]!=newf[end]) return false;
            st++;
            end--;
        }
        return true;
    }
};
