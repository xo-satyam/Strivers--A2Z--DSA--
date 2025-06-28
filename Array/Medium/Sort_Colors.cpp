//PROBLEM STATEMENT- Given an array nums with n objects colored red,white, or blue, sort them in-place so that
//                   objects of the same color are adjacent, with the colors in the order red, white, and blue.
//PROBLEM- https://leetcode.com/problems/sort-colors/description/
//SOLUTION:-
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int low=0,high=n-1,mid=0;
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[mid],nums[low]);
                low++;
                mid++;
            }else if(nums[mid]==1) mid++;
            else{
                swap(nums[mid],nums[high]);
                high--;
            }
        }
    }
};
