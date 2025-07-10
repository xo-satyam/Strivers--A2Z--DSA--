//PROBLEM STATEMENT-Search in Rotated Sorted Array (with non distinct values).
//PROBLEM-https://leetcode.com/problems/search-in-rotated-sorted-array-ii/
//SOLUTION:-
class Solution {
public:
    bool search(vector<int>& nums, int k) {
        int n = nums.size(); 
        int low = 0,high = n-1;
        while(low<=high){
            int mid = low +(high-low)/2;
            if(nums[mid]==k) return true;
            if(nums[mid]==nums[low] && nums[high]==nums[mid]){
                low++,high--;
                continue;
            }
            if(nums[low]<=nums[mid]){
                if(k<=nums[mid] && nums[low]<=k){
                    high = mid-1;
                }else{
                    low = mid+1;
                }
            }else{
                if(k>=nums[mid] && k<=nums[high]){
                    low = mid+1;
                }else{
                    high = mid-1;
                }
            }
        }
        return false;
    }
};
