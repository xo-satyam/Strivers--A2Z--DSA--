//PROBLEM STATEMENT - Given an integer array nums and an integer k, split nums into k non-empty subarrays 
//                    such that the largest sum of any subarray is minimized.
//PROBLEM - https://leetcode.com/problems/split-array-largest-sum/description/
//SOLUTION:-
class Solution {
public:
    int checksum(vector<int>& nums, int k){
        int count = 1,pages=0;
        for(int i=0;i<nums.size();i++){
            if(pages + nums[i] <= k){
                pages += nums[i];
            }else{
                pages = nums[i];
                count++;
            }
        }return count;
    }
    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(),nums.end());
        int  high = accumulate(nums.begin(),nums.end(),0);
        while(low <= high){
            int mid = low +(high-low)/2;
            int count_sum = checksum(nums,mid);
            if(count_sum > k){
                low = mid+1;
            }else{
                high = mid-1;
            }
        }
        return low;
    }
};
