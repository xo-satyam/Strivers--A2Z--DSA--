//PROBLEM STATEMENT-Find First and Last Position of Element in Sorted Array
//PROBLEM-https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/
//SOLUTION:-
//BY USING LOWER BOUND AND UPPER BOUND
class Solution {
public:
    int lowerbound(vector<int>& nums, int k){
        int n = nums.size();
        int lb = n;
        int low = 0,high = n-1;
        while(low<=high){
            int mid = low +(high-low)/2;
            if(nums[mid]>=k){
                lb = mid;
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        return lb;

    }
    int upperbound(vector<int>& nums, int k){
        int n = nums.size();
        int ub = n;
        int low = 0,high = n-1;
        while(low<=high){
            int mid = low +(high-low)/2;
            if(nums[mid]>k){
                ub = mid;
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        return ub;

    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int n= nums.size();
        int first = lowerbound(nums,target);
        if (first==n || nums[first]!=target) return {-1,-1};
        int last = upperbound(nums,target)-1;
        return {first,last};
    }
};

//SOLUTION 2:-
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
