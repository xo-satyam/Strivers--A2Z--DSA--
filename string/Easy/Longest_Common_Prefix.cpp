//PROBLEM STATEMENT - Longest Common Prefix
//PROBLEM - https://leetcode.com/problems/longest-common-prefix/description/
//SOLUTION:-
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        if(n==1) return strs[0];
        if (strs.empty()) return "";
        string ans ="";
        sort(strs.begin(),strs.end()) ;
        int m = min(strs[0].size(),strs[1].size());
        for(int i=0;i<m;i++){
            if(strs[0][i] == strs[n-1][i]){
                ans += strs[0][i];
            }else{
                break;
            }
        }
        return ans;
    }
};
