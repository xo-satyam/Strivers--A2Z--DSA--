//PROBLEM STATEMENT-Given a binary array nums, return the maximum number of consecutive 1's in the array.
//PROBLEM-https://leetcode.com/problems/max-consecutive-ones/description/

//SOLUTION:-
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        int ans=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1) count++;
            else count=0;
            ans= max(count,ans);
        }
        return ans;
    }
};
