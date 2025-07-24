//PROBLEM STATEMENT - Valid Anagram
//PROBLEM - https://leetcode.com/problems/valid-anagram/description/
//SOLUTION:-
class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> map_s;
        int len = s.size();
        if(len != t.size()) return false;
        for(char ch : s){
            map_s[ch]++;
        }
        for(char ch : t){
            if(map_s.find(ch) == map_s.end() || map_s[ch] == 0){
                return false;
            }
            map_s[ch]--;
        }
        return true;
    }
};
