//PROBLEM STATEMENT - Longest Palindromic Substring
//PROBLEM - https://leetcode.com/problems/longest-palindromic-substring/description/
//SOLUTION:-
class Solution {
public:
    string longestPalindrome(string s) {
        int maxlen = 1;
        int n = s.size();
        auto expantion = [&](int left,int right){
            while(left >= 0 && right < n && s[left]==s[right]){
                left--;
                right++;
            }
            return s.substr(left + 1,right - left - 1);
        };
        string maxstr = s.substr(0,1);
        for(int i = 0;i<n;i++){
            string odd = expantion(i,i);
            string even = expantion(i,i+1);
            if(maxstr.length() < odd.length()){
                maxstr = odd;
            }
            if(maxstr.length() < even.length()){
                maxstr = even;
            }
        }
        return maxstr;
    }
};
