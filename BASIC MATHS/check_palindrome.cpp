//PROBLEM STATEMENT-Given an integer x, return true if x is a palindrome, and false otherwise.
//PROBLEM-https://leetcode.com/problems/palindrome-number/description/
//SOLUTION:-
class Solution {
public:
    bool isPalindrome(int x) {
        long long int rev=0;
        long long int r=x;
        if(x<0) return false;
        while(x !=0){
            int rem=x%10;
            if(rev>INT_MAX/10 || rev<INT_MIN/10) return false;
            rev= rem + rev*10;
            x=x/10;
        }
        return (rev==r);
    }
};
