//PROBLEM STATEMENT-Find First and Last Position of Element in Sorted Array
//PROBLEM-https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/
//SOLUTION:-
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n= nums.size();
        int low=0,high=n-1;
        int first=-1,last=-1;
        while(low<=high){
            int mid = low +(high-low)/2;
            if(nums[mid]==target){
                last=mid;
                low=mid+1;
            }
            else if(nums[mid]<target){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        low=0,high=n-1;
        while(low<=high){
            int mid = low +(high-low)/2;
            if(nums[mid]==target){
                first=mid;
                high=mid-1;
            }
            else if(nums[mid]<target){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return {first,last};
    }
};
