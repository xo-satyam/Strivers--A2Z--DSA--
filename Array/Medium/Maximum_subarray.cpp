//PROBLEM STATEMENT- Given an integer array nums, find the subarray with the largest sum, and return its sum.
//PROBLEM- https://leetcode.com/problems/maximum-subarray/
//SOLUTION:-
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0,ans=INT_MIN;
        for(int i=0;i<nums.size();i++){
            sum +=nums[i];
            ans=max(sum,ans);
            if(sum<0) sum=0;
        }
        return ans;
    }
};
