//PROBLEM STATEMENT-Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
//PROBLEM-https://leetcode.com/problems/single-number/description/

//SOLUTION:-
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int XOR=0;
        for(int i=0;i<nums.size();i++){
            XOR=XOR^nums[i];
        }
        return XOR;
    }
};
