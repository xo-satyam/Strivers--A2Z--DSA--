//PROBLEM STAEMENT - Sum of Beauty of All Substrings
//PROBLEM - https://leetcode.com/problems/sum-of-beauty-of-all-substrings/description/
//SOLUTION:-
class Solution {
public:
    int beautySum(string s) {
        int sum = 0;
        for(int i =0;i<s.size();i++){
            int freq[26]={0};
            
            for(int j=i;j<s.size();j++){
                freq[s[j]-'a']++;
                int fmax = INT_MIN,fmin = INT_MAX,f=0;
                for(int f: freq){
                    if(f>0){
                        fmax = max(fmax,f);
                        fmin = min(fmin,f);
                    }
                }
                sum += (fmax-fmin);
            }
           
        }
        return sum;
    }
};
